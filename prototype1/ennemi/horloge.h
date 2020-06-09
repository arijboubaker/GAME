//#ifndef TIME_H_
//#define TIME_H_

#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"

#include <time.h>


typedef struct timer
{
int min;
int sec;

}timer;

SDL_Surface * gameTime (timer *t);
