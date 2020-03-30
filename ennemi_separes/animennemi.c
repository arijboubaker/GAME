#include "animennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"


void animEnm (ennemi *e, SDL_Surface *screen)
{

int i ;

	if(e->direction==1)
		for(i=0;i<e->numr;i++)
		{
			SDL_BlitSurface(e->sprite[i],&e->position_sprite, screen, &e->position_ennemi);
			SDL_Flip(screen);
			SDL_Delay(100);
		}

	else if(e->direction==0)
		for(i=3;i<e->numl;i++)
		{
			SDL_BlitSurface(e->sprite[i],&e->position_sprite, screen, &e->position_ennemi);
			SDL_Flip(screen);
			SDL_Delay(100);
		}

}










