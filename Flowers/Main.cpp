#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>

#include "Snake.hpp"

constexpr int DESK_SIZE = 20;
constexpr int CELL_SIZE = 640 / DESK_SIZE;


int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a window
    SDL_Window* window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 640, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Set the draw color to red
    //SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

    // Clear the renderer with the draw color
    //SDL_RenderClear(renderer);
    
    bool running = true;
    while (running)
    {









        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                {
                    running = false;
                }
                case SDL_MOUSEBUTTONDOWN:
                {
                    break;
                }
                case SDL_MOUSEBUTTONUP:
                {
               
                    break;
                }
            }
        }



    }


    // Update the screen
    SDL_RenderPresent(renderer);

    // Wait for 3 seconds
    SDL_Delay(3000);

    // Cleanup and quit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}