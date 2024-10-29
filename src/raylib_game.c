/*******************************************************************************************
*
*   raylib gamejam template
*
*   Template originally created with raylib 4.5-dev, last time updated with raylib 5.0
*
*   Template licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2022-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

#if defined(PLATFORM_WEB)
    #define CUSTOM_MODAL_DIALOGS            // Force custom modal dialogs usage
    #include <emscripten/emscripten.h>      // Emscripten library - LLVM to JavaScript compiler
#endif

#include <stdio.h>                          // Required for: printf()
#include <stdlib.h>                         // Required for: 
#include <string.h>                         // Required for: 

#include "Evidence.h"
#include "GameState.h"
#include "GameObjects.h"

//----------------------------------------------------------------------------------
// Defines and Macros
//----------------------------------------------------------------------------------
// Simple log system to avoid printf() calls if required
// NOTE: Avoiding those calls, also avoids const strings memory usage
#define SUPPORT_LOG_INFO
#if defined(SUPPORT_LOG_INFO)
    #define LOG(...) printf(__VA_ARGS__)
#else
    #define LOG(...)
#endif

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------

// https://lospec.com/palette-list/light-academia-8 ---------
// Light Academia 8 Palette by Chase Stemel
// Same palette is used for sprites!

#define LA8BLACK (Color){41, 30, 22, 255}
#define LA8DARKGREY (Color){64, 53, 49, 255}
#define LA8GREY (Color){71, 60, 54, 255}
#define LA8LIGHTGREY (Color){217, 193, 180, 255}
#define LA8WHITE (Color){240, 244, 214, 255}
#define LA8TAN (Color){217, 172, 132, 255}
#define LA8DARKTAN (Color){140, 89, 59, 255}
#define LA8MAROON (Color){112, 47, 62, 255}
//-----------------------------------------------------------

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
static const int screenWidth = 960;
static const int screenHeight = 720;

struct GameState* g_state;
// TODO: Define global variables here, recommended to make them static

//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
static void UpdateDrawFrame(void);      // Update and Draw one frame

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
#if !defined(_DEBUG)
    SetTraceLogLevel(LOG_NONE);         // Disable raylib trace log messages
#endif

    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(screenWidth, screenHeight, "D.A. Braithwaite");

    // broken bullshit
    Image icon = LoadImage("../resources/icon-10x.png");
    ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
    SetWindowIcon(icon);

    // Init the state ready for the beginning of Case 1.
    g_state = InitGameState();
    g_state->collectedEvidence[0] = MakeButcherMugshot();
    g_state->collectedEvidence[1] = MakeBlankPolaroid();
    g_state->collectedEvidence[2] = MakeKnifeBlood();

#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 60, 1);
#else
    SetTargetFPS(60);     // Set our game frames-per-second

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button
    {
        UpdateDrawFrame();
    }
#endif

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadImage(icon);
    FreeGameState(g_state);

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

//--------------------------------------------------------------------------------------------
// Module functions definition
//--------------------------------------------------------------------------------------------

// Update and draw frame
void UpdateDrawFrame(void)
{
    // Render to screen (main framebuffer)
    BeginDrawing();

        ClearBackground(LA8BLACK);

        // TODO: Draw your game screen here
        DrawText("D.A. Braithwaite", screenWidth / 2 - 17 * 10, 256, 48, LA8WHITE);

        // Draw evidence 0 (butcher mugshot)
        DrawTexture(
            g_state->collectedEvidence[0]->tex,
            g_state->collectedEvidence[0]->location.x,
            g_state->collectedEvidence[0]->location.y,
            WHITE
        );

    EndDrawing();
    //----------------------------------------------------------------------------------  
}