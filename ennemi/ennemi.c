#include "ennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include <time.h>
void initialiserennemi(ennemi *e)
{
e->sprite[1] = IMG_Load("../GAME/ennemi/1.png");
e->sprite[2] = IMG_Load("../GAME/ennemi/2.png");
e->sprite[3] = IMG_Load("../GAME/ennemi/3.png");
e->sprite[4] = IMG_Load("../GAME/ennemi/4.png");
e->sprite[5] = IMG_Load("../GAME/ennemi/5.png");
e->sprite[6] = IMG_Load("../GAME/ennemi/6.png");
e->sprite[7] = IMG_Load("../GAME/ennemi/7.png");
e->sprite[8] = IMG_Load("../GAME/ennemi/8.png");
e->position_enenmi.x = 350;
e->position_ennemi.y = 300;
e->direction=1;
}
	


void freesurfaceennemi(ennemi *e)
{int i;
for(i=0;i<8;i++)
SDL_FreeSurface(e->sprite[i]);
}

void affichage_ennemi(ennemi e, SDL_Surface *screen)
{
SDL_BlitSurface(e.sprite[e.num], NULL, screen, &e.position_ennemi);
SDL_Flip(screen);
}

int rand_pos(int pmax, int pmin)
{
int pos;
srand(time(NULL));
pos=rand()%(pmax-pmin+1)+pmin;
return pos;
}

ennemi dep_alea(ennemi e,int pos_i,int pos_f)
{
	if(e.direction==1)
	{	
		if(e.position_ennemi.x!=pos_f)
			e.position_ennemi.x+=10;
		
			
		else 
			e.direction=0;
	}
	
	if(e.direction==0)
	{
		if(e.position_ennemi.x!=pos_i)
			e.position_ennemi.x-=10;
		
		
		else 
			e.direction=1;
	}
	
	
	return e;
}

/*
AUTRE METHODE:
void dep_alea(ennemi *e, SDL_Surface *screen, SDL_Rect poshero)
{

SDL_Event event;
int c = 1;
int tPr = 0, tAct = 0;
int pos;
int s1 = 600;
int d = e->position_ennemi.x - poshero.x;
int i = 1;
if(d >= s1){
i = 1;
}else{
if((d < s1) && (d > 100)){
e->position_ennemi.x -=5;
i = 2;
}else{
if((d <= 100) && (d>=0)){
i= 3;
}
}
}
return i;
}



void animEnm (enemy e, SDL_Surface *screen, int asMouvement){
static int anim_indicator = 0;
if(asMouvement == 1){
SDL_BlitSurface(e.spriteleft[0], NULL, screen, &e.position_enemy);
}else{
if(asMouvement == 2){
if(anim_indicator > 4){
anim_indicator = 0;
SDL_BlitSurface(e.spriteleft[0], NULL, screen, &e.position_enemy);
}else{
SDL_BlitSurface(e.spriteleft[anim_indicator], NULL, screen, &e.position_enemy);
anim_indicator++;
}
}else{
if(asMouvement==3){
	
	}
	}
	}
	}




*/

