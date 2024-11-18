#include "raylib.h"

int main() {

  // Window dimensions
  int window_width {800};
  int window_height {450};

  //circle coordinations
  int circleCenterX {125};
  int circleCenterY {125};
  int circleRadius {25};
  int circleMove {15};
    //circle edges
  int circleLeftEdge {circleCenterX - circleRadius};
  int circleRightEdge {circleCenterX + circleRadius};
  int circleUpEdge {circleCenterY - circleRadius};
  int circleDownEdge {circleCenterY + circleRadius};

  // AXE coordinations 
  int axePosX {300};
  int axePosY {0};
  int axeLength {50};
  int axeMove {10};
    // axe edges
  int axeLeftEdge {axePosX};
  int axeUpEdge {axePosY};
  int axeRightEdge {axePosX + axeLength};
  int axeDownEdge {axePosY + axeLength};

  InitWindow(window_width,window_height,"Axe game");

  //set fps
  int fps {60};
  SetTargetFPS(fps);

  while (!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(WHITE);

    // game drawing
    DrawCircle(circleCenterX, circleCenterY, circleRadius, BLUE);
    DrawRectangle(axePosX, axePosY, axeLength, axeLength, RED);

    // axe logic
    axePosY+= axeMove;
    if(axeUpEdge == 0 || axeDownEdge == window_height){
    axeMove = -axeMove;
  }


    //Circle logic
    if(IsKeyDown(KEY_D) && circleRightEdge < window_width){
      circleCenterX+=circleMove;
    }
    else if (IsKeyDown(KEY_A) && circleLeftEdge > 0){
      circleCenterX-=circleMove;
    }
    else if (IsKeyDown(KEY_W) && circleUpEdge > 0){
      circleCenterY-=circleMove;
    }
    else if (IsKeyDown(KEY_S) && circleDownEdge < window_height){
      circleCenterY+=circleMove;
    }
    EndDrawing();
  }
}