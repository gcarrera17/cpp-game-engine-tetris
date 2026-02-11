# Architecture Overview (v0)

## High-Level Structure

The project follows a layered design:

- Core (Game Logic)
- Presentation Layer (Console for now, SDL/OpenGL later)

## Core Layer

The core layer contains:

- Board representation
- Pieces representation
- Collision detection
- Line clearing logic
- Game state management

The core must not depend on:
- Console I/O
- Rendering libraries
- Platform-specific APIs

## Presentation Layer

Responsible for:

- Rendering the board state
- Handling the user input
- Calling into the core engine

This allows replacing the console renderer with SDL/OpenGL without modifying the core logic

## Build System

CMake is used for portability and clean out-of-source builds.