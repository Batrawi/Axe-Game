
# Axe Game

A simple game built using **C++** and **Raylib** where you control a circle to avoid a falling axe. If the circle touches the axe, it's game over!

## 🚀 How to Run the Game

1. **Clone the repository**:
   ```bash
   git clone <repository-url>
   cd <repository-folder>
   ```

2. **Install Raylib**:
   - Visit the [Raylib installation page](https://www.raylib.com/).
   - Download and install Raylib for your platform (Windows/Linux/Mac).
   - Make sure to set up your compiler to link with Raylib.

3. **Compile the code**:
   - Using g++, run:
     ```bash
     g++ -o axe_game axe_game.cpp -lraylib -lm -ldl -lpthread -lGL
     ```
   - Ensure the `axe_game.cpp` file is in the same directory as the command.

4. **Run the game**:
   ```bash
   ./axe_game
   ```

## 🛠️ Technologies Used

- **C++**: A versatile programming language used to build the game's logic and structure.
- **Raylib**: A simple and easy-to-use library for game development.

## 📝 Game Overview

- **Objective**: Move the circle left and right to avoid the falling axe.
- **Controls**:
  - `D` → Move right
  - `A` → Move left
- **Game Over**: The game ends if the circle collides with the axe.

## 🎮 Gameplay Features

- **Dynamic Collision Detection**: The game detects collisions between the circle and the axe in real time.
- **Responsive Controls**: Move the circle smoothly using the keyboard.

## 🔄 Double Buffering

This game uses **double buffering** through the Raylib functions `BeginDrawing` and `EndDrawing`. Double buffering is a technique used to prevent screen flickering by:
1. Drawing all the graphics to an off-screen buffer.
2. Swapping the off-screen buffer with the on-screen buffer once drawing is complete.

This ensures smooth animations and a flicker-free user experience.

## 🎉 Future Improvements

- Add a scoring system to track how long the player survives.
- Introduce multiple axes or different obstacles for increased difficulty.
- Add sounds for collisions and movements.
