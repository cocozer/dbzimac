#ifndef APPLICATION_UI_H
#define APPLICATION_UI_H
#include <SDL2/x86_64-w64-mingw32/include/SDL2/SDL.h>
#include <string>

extern const int SCREEN_WIDTH, SCREEN_HEIGHT;

SDL_Window* init(std::string windowTitle);
SDL_Surface* loadMedia(std::string path);
void close(SDL_Window* gWindow, SDL_Renderer* renderer);


#endif