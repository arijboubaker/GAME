/**
* @file animennemi.c
* @autor Bouabker Arij
* @date  Mai ,2020
*
*testing program for ennemy animation  
*
*/




//***********************************************************************************************************************************************************************************************************

#include "animennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"



//***********************************************************************************************************************************************************************************************************

void initialiserennemi(ennemi *e)
{

e->spriteleft=IMG_Load("staline left.png");
e->spriteright=IMG_Load("staline right.png");

if (e->spriteleft==NULL)
    {
        printf ("Unable to load sprite ennemi left:%s\n",SDL_GetError());
    }
if (e->spriteright==NULL)
    {
        printf ("Unable to load sprite ennemi right:%s\n",SDL_GetError());
    }

e->position_ennemi.x = 350;
e->position_ennemi.y = 300;

e->position_sprite.x=0;
e->position_sprite.y=0;
e->position_sprite.h=spriteennemi1_H;
e->position_sprite.w=spriteennemi1_W;

e->direction=0;
}

//***********************************************************************************************************************************************************************************************************

void animEnm (ennemi *e, SDL_Surface *screen,background b)
{
int i ;
	for(i=0;i<5;i++)
	{
	if(e->direction==1) //si le deplacement est à droite 
		{
		e->position_sprite.x=i*spriteennemi1_W;
		e->position_sprite.y=300;
		
		affichage_ennemi(*e,screen,b);
		SDL_Delay(100);
		}

	else if(e->direction==0)//si le deplacement est à gauche
		{
		e->position_sprite.x=i*spriteennemi1_W;
		e->position_sprite.y=0;

		affichage_ennemi(*e,screen,b);
		SDL_Delay(100);
		}
	}

}



//***********************************************************************************************************************************************************************************************************

void freesurfaceennemi(ennemi *e)
{
SDL_FreeSurface(e->spriteleft);
SDL_FreeSurface(e->spriteright);
}

//***********************************************************************************************************************************************************************************************************

void affichage_ennemi(ennemi e, SDL_Surface *screen,background b)
{
	SDL_BlitSurface(b.background, NULL, screen, &b.posbg);
	if(e.direction==0)
SDL_BlitSurface(e.spriteleft,&e.position_sprite, screen, &e.position_ennemi);

	else if(e.direction==1)
SDL_BlitSurface(e.spriteright,&e.position_sprite, screen, &e.position_ennemi);

SDL_Flip(screen);
SDL_Delay(10);

}



//***********************************************************************************************************************************************************************************************************





void mvm_alea_enemi(ennemi *e)
{
	if(e->direction==1)
	{	
		if(e->position_ennemi.x!=e->pos2.x)
			e->position_ennemi.x+=10;
		
			
		else 
			e->direction=0;
	}
	
	if(e->direction==0)
	{
		if(e->position_ennemi.x!=e->pos1.x)
			e->position_ennemi.x-=10;
		
		
		else 
			e->direction=1;
	}
	
	
	
}

