#include <studio.h>
#include "SDL/SDL.h"
int main(int argc, char *argv[])
 {
      SDL_Unit(SDL_INIT_VIDEO);
SDL_SetVideoMode(640,768,32,SDL_HWSURFACE);
SDL_Quit();
return EXIT_SUCCESS;
}
