# TDGame: War of the Towers

## Overview

**Project2** is a **Tower Defense** game developed using **Qt** for the graphical user interface (GUI) and **C++** for the game logic. In this game, players defend their base by strategically placing towers along a path to stop waves of enemies from reaching their goal. The game features multiple levels, a dynamic scoring system, and various win/lose conditions that keep the gameplay both engaging and challenging. With the ability to import custom maps, the game offers endless replayability and strategic depth.

This project serves as an exploration of Qt-based game development with C++ while implementing complex game mechanics, including object-oriented programming (OOP) principles, event handling, and graphical user interface design.

### Game Story
As the commander of a strategic base, the player must place and upgrade towers to stop waves of enemies from advancing along a predetermined path. Enemies have varying strengths and abilities, and the player must adapt their strategy to counter each wave effectively. As the player progresses through the levels, the difficulty ramps up with more challenging enemies and limited resources.

## Features

### **Core Gameplay Mechanics**
- **Tower Placement**: Players can place different types of towers with unique attributes and abilities to stop incoming enemy waves. Towers can be upgraded using in-game currency to increase their power.
- **Enemy Waves**: The game features various enemy types, each with different movement speeds, health, and abilities. Some enemies may move faster, others may be tougher, and some might even have special skills (e.g., flying enemies or shielded units).
- **Multiple Levels**: The game includes multiple levels, each with its unique map layout, increasing difficulty, and different enemy compositions. Each level offers new challenges that require the player to think critically and adjust their tower strategy.
- **Score System**: Players earn points based on the number of enemies successfully eliminated. The score determines the player's performance at the end of each level. Higher scores unlock new towers and upgrades.
- **Money System**: Players earn in-game currency by defeating enemies. This currency is used to purchase new towers or upgrade existing ones. Effective management of resources is key to winning each level.
- **Win and Lose Conditions**: Players win a level by stopping all enemy waves. If too many enemies reach the player's base, the level is lost. The game ends when all levels are lost, but it can be reset for another attempt.
- **Map Import**: Players can import custom maps, offering new layouts and increased variety in gameplay. This feature allows for personalized gameplay experiences and infinite replayability.
- **Tutorial**: A simple tutorial is provided at the start of the game to explain the core mechanics, such as tower placement, enemy waves, and how to manage resources effectively.

### **User Interface (UI)**
- **Game Screen**: Displays the gameplay area where towers are placed and enemies advance. It includes information such as the current score, resources, wave progress, and base health.
- **Level Selection**: A menu that allows players to select which level to play, each with its unique layout and difficulty.
- **Win/Loss Screens**: After completing a level, the player is shown a screen with their performance, including the total score, number of enemies defeated, and overall success rate. These screens also provide options to restart the level or proceed to the next one.
- **Map Editor**: An interface that allows users to import and edit custom game maps for a unique experience.

## Files and Structure

The project includes the following files and directories:

### **Core Game Logic**
- **`Bullets.cpp` / `Bullets.h`**: Handles the mechanics of bullets, including firing, movement, and collision detection.
- **`Enemy.cpp` / `Enemy.h`**: Defines enemy behavior, such as movement patterns, health, and damage taken.
- **`Player.cpp` / `Player.h`**: Contains player-specific mechanics like managing resources (money, score) and interacting with towers.
- **`Score.cpp` / `Score.h`**: Manages the scoring system, tracking points awarded for defeating enemies and completing levels.
- **`Tower.cpp` / `Tower.h`, `Tower2.cpp` / `Tower2.h`**: Defines the various tower types and their attributes, including damage, range, and attack speed.
- **`Money.cpp` / `Money.h`**: Manages the player's money and the purchasing system for towers and upgrades.

### **Game Levels and UI Elements**
- **`choose_enemy.cpp` / `choose_enemy.h`**: Contains logic for selecting which enemies appear in the game.
- **`level.cpp` / `level.h`, `level.ui`**: Manages the game levels and user interface elements related to level selection.
- **`win.cpp` / `win.h`, `lose.cpp` / `lose.h`**: Implements win and lose conditions, along with their associated UI screens.
- **`tutorial.cpp` / `tutorial.h`**: Provides a tutorial for first-time players to help them understand the game mechanics.
- **`map_import.cpp` / `map_import.h`**: Allows players to import custom maps to modify or personalize the level layout.

### **User Interface Design**
- **`mainwindow.cpp` / `mainwindow.h`, `mainwindow.ui`**: The main window of the game that hosts the gameplay area and other UI elements like buttons, status bars, and menus.
- **`.ui` Files**: Qt Designer-generated files for the game’s interface components (menus, level selection, tutorials, and win/lose screens).

### **Miscellaneous Files**
- **`README.md`**: This file containing project details, instructions, and setup information.
- **`Project2.pro`**: The Qt project file that contains configuration settings and paths required to build the project.
- **`build-Project2-Qt_6_4_0_for_macOS-Debug`**: The build directory containing the compiled application and debug files.

## Setup Instructions

### Prerequisites
To build and run the game, you need the following:

- **Qt** (version 6.4.0 recommended) installed on your system.
- A **C++ compiler** compatible with Qt.
- **macOS** or any other platform supported by Qt (Linux, Windows).

### Installing

1. **Clone the repository**:
   ```bash
   [git clone https://github.com/your-username/Project2.git (https://github.com/antshuang19/Tower-Defense-Game.git)](https://github.com/antshuang19/TDGame-War-of-the-Towers.git)
