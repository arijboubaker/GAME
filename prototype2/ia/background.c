/**
* @file background.c
**/

#include <SDL/SDL_image.h>
#include "background.h"

int init_background(Background *B, char* path,Background *B2)
{
	int OK;

	OK = loadBackground(B, path,B2);
	if (OK != -1)
	{
		initBackgoundAttributes(B,B2);
	}
	
	return OK;
}


int loadBackground(Background *Backg, char* path,Background *Backg2)
{
	// load background
	Backg->backgroundImg = IMG_Load(path);
Backg2->backgroundImg=IMG_Load("b.png");
	if (Backg->backgroundImg == NULL) {
		printf("Unable to load backround image: %s\n", SDL_GetError());
		return (-1);
	}
	
	
	return (0);
}


void initBackgoundAttributes(Background *Backg,Background *Backg2)
{
	Backg->backgroundPos.x=0;
	Backg->backgroundPos.y=0;
	Backg->backgroundPos.w=SCREEN_W;
	Backg->backgroundPos.h=SCREEN_H;
Backg2->backgroundPos.x=100;
	Backg2->backgroundPos.y=0;
	Backg2->backgroundPos.w=1600;
	Backg2->backgroundPos.h=100;
}


void display_background(Background Backg,Background Backg2,SDL_Surface *screen)
{
	SDL_BlitSurface(Backg.backgroundImg, &(Backg.backgroundPos), screen,NULL); 
	SDL_BlitSurface(Backg.backgroundImg,NULL , screen,&(Backg2.backgroundPos)); 
}

void freeBackground(Background *Backg,Background *Backg2)
{
	SDL_FreeSurface(Backg->backgroundImg);
SDL_FreeSurface(Backg2->backgroundImg);
}
