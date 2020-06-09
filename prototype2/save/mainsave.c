/**
* @file mainsave.c
* @autor Bouabker Arij
* @date  Mai ,2020
*
*testing program for game saving  and loading
*
*/



#include "save.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

int main()
{

SDL_Init(SDL_INIT_VIDEO);
TTF_Init();


int go=1 ; 

int curseur = 0 ;

char file[20];

personnage c1,c2;

background b ; 

ennemi e ; 

int niveau ;

SDL_Event event ;
 
Objet sauv , sauvy, sauvn ;



SDL_Surface *screen=NULL ;

Mix_Chunk *effect ;



if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
  {
    printf("%s", Mix_GetError());
  }

screen=SDL_SetVideoMode(1280, 720, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);

strcpy(file,"save.txt");

c1=initiaperso(c1);
c2=initiaperso2(c2);
	
initialiser_save(&sauv,&sauvy,&sauvn);



initialiserennemi(&e);

b=initialiser_background(b,0,0,1);

SDL_BlitSurface(b.img, NULL, screen, &(b.pos));


SDL_Flip(screen);

effect= Mix_LoadWAV("son1.wav");

niveau=1 ; 

//LoadGame(&c1,&c2,&b , &e ,&niveau,screen);

affichageperso(c1,screen);

affichageperso(c2,screen);
SDL_Flip(screen);
while(go)
{   

SDL_WaitEvent(&event);

switch(event.type)
        {

	case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            	{	
		case SDLK_RIGHT:
			c1.direction=1;	
			c2.direction=-1;
		break;

		case SDLK_LEFT: 
			c1.direction=0;
			c2.direction=-1;
		break;	

		case SDLK_ESCAPE:
			
			go=save(screen,event ,&curseur,sauv,sauvn,sauvy,effect,c1,c2,b,file ,e,niveau,&go);
			
		break;	
		}
	}
SDL_BlitSurface(b.img, NULL, screen, &(b.pos));



 mvm_alea_enemi(&e);
 affichage_ennemi(e,screen);

mouvement (&c1);

mouvement (&c2);

animperso (&c1,screen);

animperso (&c2,screen);

affichageperso(c1,screen);

affichageperso(c2,screen);

	
	
SDL_Flip(screen);
c1.direction=-1;
c2.direction=-1;
}

SDL_FreeSurface(b.img);
freesurfaceennemi(&e);
SDL_Quit();

return EXIT_SUCCESS;
}
