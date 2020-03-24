#include "perso.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

personnage initperso (personnage c)
{
	char chemin[20],scoree[20];
 	int i;
  for (i=0; i<4; i++) 
  {
      sprintf(chemin, "%d.jpg", i+1);
      c.sprite[i] = IMG_Load(chemin);
  
  }
	TTF_Init();
	c.position_perso.x = 150;
  	c.position_perso.y = 350;

	c.direction=1;
	c.num=0;


	c.vie_perso.vie[1]=IMG_Load("image_de_vie1.jpg");
	c.vie_perso.vie[2]=IMG_Load("image_de_vie2.jpg");
	c.vie_perso.vie[3]=IMG_Load("image_de_vie3.jpg");
	c.vie_perso.vie[0]=IMG_Load("image_de_vie0.jpg");

	c.vie_perso.position_de_vie.x=20 ; 
	c.vie_perso.position_de_vie.y=10 ; 

	c.vie_perso.nbredevie=3;

	c.score_perso.score_atteint=0;
	

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
	SDL_BlitSurface(c.sprite[c.num], NULL, screen, &c.position_perso);
}




void animperso (personnage *c, SDL_Surface *screen)
{
		if (c->direction ==1)
{c->num++;
    if (c->num > 1)
	{
	c->num = 0;
        }

}
  else
{
  if (c->direction ==0)   
	{c->num++;

    if (c->num > 3)

		 {
       			c->num=2;			
   		 }


         }
}

}




