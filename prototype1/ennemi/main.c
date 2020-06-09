
/**
* @file main.c
**/
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include "animennemi.h"
//#include "horloge.h"
//#include "struct.h"
int main()
{
SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER);
TTF_Init();
timer t;
ennemi e ;
SDL_Event event;
SDL_Surface *screen=NULL;
SDL_Surface *timetext;
SDL_Rect postext;
//postext.x=400;
//postext.y=50;
TTF_Font * police = NULL;
int go=1,i;

background b ;
initialiserennemi(&e);
b.background=IMG_Load("background.png");




	e.position_sprite.x=0;
	e.position_sprite.y=0;
	e.position_sprite.w=60;
	e.position_sprite.h=60;
     



screen=SDL_SetVideoMode(1280, 720, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_BlitSurface(b.background, NULL, screen, &b.posbg);
SDL_Flip(screen);

t.min=0;
t.sec=0;


while(go)
{   
//animEnm(&e,screen,b);
timetext=gameTime(&t);
mvm_alea_enemi(&e);
//affichertemps(screen,timetext);
affichage_ennemi(e,screen,b,timetext);


if(TTF_Init() == -1)

{

   fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());

   exit(EXIT_FAILURE);

}
SDL_PollEvent(&event);

switch(event.type)
        {
	case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            	{	
		
		case SDLK_ESCAPE:
			go = 0;
			SDL_Quit();
		break;	
		}
	}
}
freesurfaceennemi(&e);
SDL_Quit();
TTF_CloseFont(police);
TTF_Quit();
return 0;
}

