#!/usr/bin/env bash

set -e

echo "========================================="
echo "  Select language / Выберите язык:"
echo "  1) English"
echo "  2) Русский"
echo "========================================="
read -p "Enter number / Введите число (1-2): " lang_choice

if [ "$lang_choice" = "2" ]; then
    MSG_DEP="[INFO] Проверка и установка зависимостей (curl, p7zip)..."
    MSG_DOWNLOAD="[INFO] Скачиваем релизный архив kumir2-android.7z..."
    MSG_ERROR_DOWNLOAD="[ОШИБКА] Не удалось скачать архив. Проверьте интернет или ссылку."
    MSG_EXTRACT="[INFO] Распаковка компонентов..."
    MSG_ERROR_EXTRACT="[ОШИБКА] Структура архива нарушена! Отсутствуют bin, lib или share."
    MSG_COPY="[INFO] Установка файлов в системные директории Termux ($PREFIX)..."
    MSG_FIX_LIBS="[INFO] Оптимизация путей библиотек..."
    MSG_CLEANUP="[INFO] Очистка временных файлов..."
else
    MSG_DEP="[INFO] Checking and installing dependencies (curl, p7zip)..."
    MSG_DOWNLOAD="[INFO] Downloading release archive kumir2-android.7z..."
    MSG_ERROR_DOWNLOAD="[ERROR] Failed to download archive. Check your connection or URL."
    MSG_EXTRACT="[INFO] Extracting components..."
    MSG_ERROR_EXTRACT="[ERROR] Invalid archive structure! Missing bin, lib, or share."
    MSG_COPY="[INFO] Installing files to Termux system directories ($PREFIX)..."
    MSG_FIX_LIBS="[INFO] Optimizing library paths..."
    MSG_CLEANUP="[INFO] Cleaning up temporary files..."
fi

echo "$MSG_DEP"
pkg update -y
if ! command -v curl &> /dev/null; then pkg install curl -y; fi
if ! command -v 7z &> /dev/null; then pkg install p7zip -y; fi

echo "$MSG_DOWNLOAD"
if ! curl -L -O https://github.com/papa-mux/kumir2-termux-/raw/refs/heads/install/kumir2-android.7z; then
    echo "$MSG_ERROR_DOWNLOAD"
    exit 1
fi

if [ ! -f "kumir2-android.7z" ]; then
    echo "$MSG_ERROR_DOWNLOAD"
    exit 1
fi

echo "$MSG_EXTRACT"
7z x kumir2-android.7z -y > /dev/null

if [ ! -d "bin" ] && [ ! -d "BIN" ]; then
    echo "$MSG_ERROR_EXTRACT"
    exit 1
fi

echo "$MSG_COPY"
mkdir -p "$PREFIX/bin" "$PREFIX/lib" "$PREFIX/share"

cp -rf bin/* "$PREFIX/bin/"
chmod +x $PREFIX/bin/kumir2-* 2>/dev/null || true
cp -rf share/* "$PREFIX/share/"
cp -rf lib/* "$PREFIX/lib/"

echo "$MSG_FIX_LIBS"
if [ -d "$PREFIX/lib/plugins" ]; then
    mkdir -p "$PREFIX/lib/kumir2/plugins"
    mv -f $PREFIX/lib/plugins/* "$PREFIX/lib/kumir2/plugins/" 2>/dev/null || true
    rmdir "$PREFIX/lib/plugins" 2>/dev/null || true
fi

echo "$MSG_CLEANUP"
rm -rf bin lib share kumir2-android.7z
