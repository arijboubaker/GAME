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



int go=1 ; 

int curseur = 0, firsttime = 0;

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


initialiser_save(&sauv,&sauvy,&sauvn);
/*
c1=initperso (c1,50,500,200,300,1,20,10,3,0,0,0,106,111,-1,-1,50,70,5,1,1,1);
c2=initperso (c2,50,500,200,300,1,20,10,3,0,0,0,106,111,-1,-1,50,70,5,1,1,1);

e=initialiser_ennemi(e,100,100,100,100,100,100,100,100,100,100,100,100);
*/
b=initialiser_background(b,0,0,0,0,0,0,1);

SDL_BlitSurface(b.background, NULL, screen, &(b.posbg));

affichageperso(c1,screen);
SDL_Flip(screen);

effect= Mix_LoadWAV("son1.wav");

niveau=1 ; 
LoadGame(&c1,&c2,&b ,file, &e ,&niveau,screen);
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
		break;

		case SDLK_LEFT: 
			c1.direction=0;
		break;	
		case SDLK_ESCAPE:
			
			go=save(screen,event ,&firsttime,&curseur,sauv,sauvn,sauvy,effect,c1,c2,b,file ,e,niveau,&go);
			
		break;	
		}
	}
SDL_BlitSurface(b.background, NULL, screen, &(b.posbg));

mouvement (&c1);

animperso (&c1,screen);

affichageperso(c1,screen);

SDL_Flip(screen);
}
	


return EXIT_SUCCESS;
}
