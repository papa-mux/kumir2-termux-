# KuMir2 for Termux

> Build and run the KuMir2 educational IDE (Кумир) natively on Android via Termux.

[Русская версия](./readme-ru.md)

![License](https://img.shields.io/badge/license-GPL--3.0-green)
![Platform](https://img.shields.io/badge/platform-Termux%20(Android)-blue)
![Build](https://img.shields.io/badge/build-CMake-orange)

---

## About

This repository contains patches and build configuration to build **KuMir2** — a free educational programming environment — for **Termux** on Android. KuMir2 was not originally designed to build against modern Python versions, so the necessary fixes are included here.

Included actors: Robot, Turtle, Draw, Painter, Vodoley (Water Pourer), Grasshopper, Isometric Robot, Complex Numbers, Keyboard, Colorer.

---

## Option 1 — Quick install (prebuilt)

The easiest way is to download and run `install.sh`, which automatically downloads the prebuilt `kumir2-android.7z` archive from the `install` branch, extracts it, and installs everything into `$PREFIX`:

```sh
curl -O -L "https://raw.githubusercontent.com/papa-mux/kumir2-termux-/install/install.sh"
```

```sh
bash install.sh
```

The script will ask for your language (English / Русский), install missing dependencies (`curl`, `p7zip`) automatically, and place binaries, libraries and resources into the correct Termux directories.

---

## Option 2 — Build from source

### Build dependencies

```sh
pkg install cmake make clang git python qt5-qtbase qt5-qtsvg qt5-qttools pkg-config
```

| Package         | Purpose                                   |
|-----------------|--------------------------------------------|
| `cmake`         | Build system                               |
| `make`          | Building from generated Makefiles          |
| `clang`         | C/C++ compiler                             |
| `git`           | Cloning the repository                     |
| `python`        | KuMir build scripts                        |
| `qt5-qtbase`    | Core Qt5 modules (GUI, core)               |
| `qt5-qtsvg`     | SVG icon support in the interface           |
| `qt5-qttools`   | Qt5 tools (linguist, uic, etc.)            |
| `pkg-config`    | Library lookup during build                |

### Build

```sh
git clone https://github.com/papa-mux/kumir2-termux-
cd kumir2-termux-
```

```sh
mkdir build && cd build
cmake ..
```

```sh
make
```

Install after building:

```sh
make install
```

Full list of build targets (individual actors, IDE, etc.):

```sh
make help
```

---

## Known issues and fixes

- Building against modern Python versions requires patches — these are already applied in this repository.
- If the build fails on a specific module, try building it individually with `make <TargetName>` from the `make help` list to see the detailed error output.

---

## Credits

- [KuMir2 (НИИСИ РАН)](https://niisi.ru/kumir/) — original project
- Termux community

## License

GPL-3.0
