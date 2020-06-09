/**
* @file horloge.c
**/

//#include "ennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include <time.h>
#include "horloge.h"

SDL_Surface * gameTime (timer *t) {
  char tim[100];
  SDL_Surface *timetext;
SDL_Delay(1000);
if (t->sec==60) {
    t->min++;
    t->sec =0;
}else {
   t->sec++;
}
if (TTF_Init() < 0) {
  printf("error\n");
}else{
TTF_Font * police = NULL;
SDL_Color noir = {255, 255, 255};
police = TTF_OpenFont("angelina.ttf", 32);
printf("TTF_Init: %s\n", TTF_GetError());
if (police == NULL) {
  printf("error in font time\n");
}else{
sprintf(tim, "0%d : %d", t->min, t->sec);
timetext = TTF_RenderText_Solid(police, tim, noir);
TTF_CloseFont(police);
TTF_Quit();
}
}

return timetext;
}
