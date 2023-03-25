# C++ + CMake single executable template

## Build

1. Configure cmake's toolchain

```bash
mkdir build
cmake -B build .
```

2. Build project

```bash
cmake --build build
```

3. Find executable in `build` folder and run it

```bash
./build/foo
```

Note: executable maybe in some other location in `build` folder. For instance, if you use `Ninja Multi-Config` generator, it stores executable of each configuration in each individual folder.

