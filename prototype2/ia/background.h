#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SDL/SDL.h>
#include "defs.h"

struct Background
{
	SDL_Surface *backgroundImg;
SDL_Surface *backgroundImg2;
	SDL_Rect backgroundPos;
};
typedef struct Background Background;


int init_background(Background* B, char* path,Background* B2);
void display_background(Background B,Background B2,SDL_Surface *screen);
void freeBackground(Background* B,Background* B2);


int loadBackground(Background* B, char* path,Background* B2);
void initBackgoundAttributes(Background* B,Background* B2);

#endif
