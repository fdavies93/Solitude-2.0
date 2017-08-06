# Solitude 2.0

## Introduction

Solitude 2 is a 2D game engine built in modern C++ and powered by the SFML library.

It's a reboot of an earlier project from before I understood software architecture principles. The earlier project still exists on my hard drive, but sadly runs on the less-popular Allegro library, overuses pointers, and generally needs massive refactoring before it'll work.

Some nice features of Solitude 2:
- Asynchronous texture loading; this should allow for gameplay to go ahead while textures are loading (2D open worlds!)
- Component-entity model for GameObjects; ideally this will prevent dire inheritance hierarchies from ever emerging.

## Get Started

- You will need SFML. I build it using the Visual Studio 2015 toolchain.
- You'll need to configure the linker paths in the solution / project.
- As the project's dynamically linked, you will also need to include the appropriate .dlls in your testing directory.
- Poke around in the main.cpp file. At the moment it loads a single image to test the asynchronous texture loading; you can configure this or use it as an entry point to understand how the architecture of the graphics engine is structured.

##TODO

- Implement rendering of sprites by ScreenManager
- Sprite management needed in ScreenManager; but this can only be implemented with bigger system
- Minimum for sprite management:
  - Implement camera component
  - Implement components being sent to modules
