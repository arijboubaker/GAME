/**
* @file animennemi.c
**/

#include "animennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include <time.h>
//#include "struct.h"
//#include "horloge.h"
void initialiserennemi(ennemi *e)
{

e->spriteleft=IMG_Load("staline left.png");
e->spriteright=IMG_Load("staline right.png");
e->position_ennemi.x = 350;
e->position_ennemi.y = 300;

e->position_sprite.h=36;
e->position_sprite.w=58;

e->direction=0;
e->pos2.x=400;
e->pos1.x=50;
}


void freesurfaceennemi(ennemi *e)
{
SDL_FreeSurface(e->spriteleft);
SDL_FreeSurface(e->spriteright);
}


SDL_Surface * gameTime (timer *t) {
  char tim[100];
  SDL_Surface *timetext;

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
SDL_Color noir = {0, 0, 0};
police = TTF_OpenFont("angelina.ttf", 32);
//printf("TTF_Init: %s\n", TTF_GetError());
if (police == NULL) {
  printf("error in font time\n");
}
else{
sprintf(tim, "%d : %d", t->min, t->sec);//format defini et affecter a une chaine
timetext = TTF_RenderText_Solid(police, tim, noir);//stocker dans timetext la chaine 

}
}

return timetext;
}



void affichage_ennemi(ennemi e, SDL_Surface *screen,background b,SDL_Surface *timetext)
{

SDL_Rect postext;
postext.x=400;
postext.y=50;

SDL_BlitSurface(b.background, NULL, screen, &b.posbg);
if(e.direction==0)//gauche
SDL_BlitSurface(e.spriteleft,&e.position_sprite, screen, &e.position_ennemi);
else if(e.direction==1)//droite

SDL_BlitSurface(e.spriteright,&e.position_sprite, screen, &e.position_ennemi);

SDL_BlitSurface(timetext, NULL, screen, &postext);
SDL_Delay(100);
SDL_Flip(screen);


}






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


