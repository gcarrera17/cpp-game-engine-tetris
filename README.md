# cpp-game-engine-tetris
A modular Tetris implementation in modern C++20. Designed for console-first with clean architecture and extensibility in mind.

## Goals

- Clean separation between core game logic and presentation layer
- Using Modern C++20
- Portable build system using CMake
- Designed for future SDL/OpenGL renderer

## Build (Windows, GCC/MinGW + CMake)

### Configure
```powershell
cmake -S . -B build
```

### Build
```powershell
cmake --build build
```

### Run
```powershell
.\build\tetris.exe
```