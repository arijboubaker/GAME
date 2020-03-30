#include "perso.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

personnage initperso (personnage c)
{char scoree[100];

	TTF_Init();
        c.sprite= IMG_Load("sprite.png");  
	
	c.position_perso.x = 150;
  	c.position_perso.y = 350;
	c.position_perso.w=200;
	c.position_perso.h=300;

	c.direction=1;
	
	c.vie_perso.vie[1]=IMG_Load("image_de_vie1.jpg");
	c.vie_perso.vie[2]=IMG_Load("image_de_vie2.jpg");
	c.vie_perso.vie[3]=IMG_Load("image_de_vie3.jpg");
	c.vie_perso.vie[0]=IMG_Load("image_de_vie0.jpg");

	
	c.vie_perso.position_de_vie.x=20 ; 
	c.vie_perso.position_de_vie.y=10 ; 

	c.vie_perso.nbredevie=3;

	c.score_perso.score_atteint=0;
	
	c.position_sprite.x=0;
	c.position_sprite.y=600;
	c.position_sprite.w=200;
	c.position_sprite.h=300;
	
	c.numr=-1;
	c.numl=-1;

	SDL_Color policeNoire={0,0,0};
	
	c.score_perso.police_score= TTF_OpenFont("angelina.TTF" , 40);
	
	sprintf(scoree,"Score: %d",c.score_perso.score_atteint);
        c.score_perso.score_texte= TTF_RenderText_Blended(c.score_perso.police_score,scoree,policeNoire);	
	
	c.score_perso.position_score.x=200 ;
	c.score_perso.position_score.y=300 ;
	
  return c;
}


void affichageperso(personnage c, SDL_Surface * screen)

{
	SDL_BlitSurface(c.vie_perso.vie[c.vie_perso.nbredevie], NULL, screen, &c.vie_perso.position_de_vie);
	SDL_BlitSurface(c.score_perso.score_texte, NULL, screen, &c.score_perso.position_score);
 	SDL_BlitSurface(c.sprite,&c.position_sprite, screen, &c.position_perso);
	
}




void animperso (personnage *c, SDL_Surface *screen)
{
		if (c->direction ==1)
                {	c->numr++;
			if(c->numr==6)
				{
				c->numr=0;
				c->position_sprite.x=0;
				c->position_sprite.y=600;
				c->position_sprite.h=300;
				c->position_sprite.w=200;
				}
			else 
				{
				c->position_sprite.x=c->numr*200;
				c->position_sprite.y=600;
				c->position_sprite.h=300;
				c->position_sprite.w=200;
				}
                }
                else if (c->direction ==0)   
		{c->numl++;
			if(c->numl==6)
			{
				c->numl=0;
				c->position_sprite.x=0;
				c->position_sprite.y=300;
				c->position_sprite.h=300;
				c->position_sprite.w=200;

		   	}
			else 
			{
				c->position_sprite.x=c->numl*200;
				c->position_sprite.y=300;
				c->position_sprite.h=300;
				c->position_sprite.w=200;
			}
                 }
		
					
}














