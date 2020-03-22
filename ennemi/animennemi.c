#include "animennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"


void animEnm (ennemi e, SDL_Surface *screen, SDL_Surface *background)
{
e.sprite=IMG_Load("spritee.png");
int i ;
for(i=0;i<7;i++)
{
e.position_sprite.x=i*60;
e.position_sprite.y=0;
e.position_sprite.h=60;
e.position_sprite.w=60;
SDL_BlitSurface(background,NULL, screen, NULL);
SDL_BlitSurface(e.sprite,&e.position_sprite, screen, &e.position_ennemi);
SDL_Flip(screen);
SDL_Delay(10);
}

for(i=7;i>=0;i--)
{
e.position_sprite.x=i*60;
e.position_sprite.y=100;
e.position_sprite.h=60;
e.position_sprite.w=60;
SDL_BlitSurface(background,NULL, screen, NULL);
SDL_BlitSurface(e.sprite,&e.position_sprite, screen, &e.position_ennemi);
SDL_Flip(screen);
SDL_Delay(10);
}

}

















