#include "anim.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

int animationcoat(SDL_Surface *ecran,int go  )
{
int k=1 ; 
char path[20];
SDL_Surface *Fond=NULL ;
SDL_Rect positiondefond ;
positiondefond.x=0;
positiondefond.y=0; 

for(k=1;k<9;k++)
 {
 sprintf(path,"00%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(ecran); 
 } 	
for(k=10;k<99;k++)
 {
 sprintf(path,"0%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(ecran); 
 } 
for(k=100;k<414;k++)
 {
 sprintf(path,"%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(ecran); 
 } 	
go=0 ; 
return go ; 	
}

/*void animationlogo(SDL_Surface *screen )
{
int k=1 ; 
char path[20];
SDL_Surface *Fond=NULL ;
SDL_Rect positiondefond ;
positiondefond.x=0;
positiondefond.y=0; 

for(k=1;k<9;i++)
 {
 sprintf(path,"000%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(screen); 
 } 	
for(k=10;k<99;i++)
 {
 sprintf(path,"00%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(screen); 
 } 
for(k=100;k<999;i++)
 {
 sprintf(path,"0%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(screen); 
 } 	
for(k=1000;k<1020;i++)
 {
 sprintf(path,"%d.jpg" ,k);
 Fond=IMG_Load(path);
 SDL_BlitSurface(Fond,NULL,ecran,&positiondefond);
 SDL_Delay(10);
 SDL_Flip(screen); 
 } 	
	
}*/


