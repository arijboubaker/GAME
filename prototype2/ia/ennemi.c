/**
* @file ennemi.c
**/

#include "ennemi.h"


int init_ennemi(Ennemi* E, char* path)
{
	int OK;

	OK = loadEnnemiImages(E, path);
	if (OK != -1)
	{
		initEnnemiAttributes(E);
	}
	
	return OK;
}


int loadEnnemiImages(Ennemi * A, char* path)
{
	A->image = IMG_Load(path);

	if(A->image == NULL) {
		printf("Unable to load Ennemi png:%s\n", SDL_GetError());
		return (-1);
	}
	return (0);
}


void initEnnemiAttributes(Ennemi* E)
{	
	int i, j;	

	E->positionAbsolue.x = 0.9 * BACKGND_W;
	E->positionAbsolue.y = 0.8 * BACKGND_H - Ennemi_HEIGHT;
	E->positionAbsolue.w = Ennemi_WIDTH;
	E->positionAbsolue.h = Ennemi_HEIGHT;
	
	E->Frame.i = 1;
	E->Frame.j = 0;
	
        // Faire le calcul des SDL_Rect des positions de toutes 
	// les imagettes une seule fois à l'initialisation
	for (i = 0; i < SPRITE_ENNEMI_NbL; i++)
	{	for(j = 0; j < SPRITE_ENNEMI_NbCol; j++)
		{	
			E->positionAnimation[i][j].x = j * Ennemi_WIDTH;
			E->positionAnimation[i][j].y = i * Ennemi_HEIGHT;
			E->positionAnimation[i][j].w = Ennemi_WIDTH;  
			E->positionAnimation[i][j].h = Ennemi_HEIGHT;
		}
	}
	E->Direction = 1;
	E->State = WAITING;
	
}

void display_ennemi(Ennemi E, SDL_Surface* screen)
{
	SDL_BlitSurface(E.image, &E.positionAnimation[E.Frame.i][E.Frame.j], screen, &E.positionAbsolue);
}

void animateEnnemi(Ennemi* E)
{


	// mise a jour du numero de ligne de l'imagette 
	// si l'ennemi n'est pas en train d'attaquer --> ligne = 1

	/* Completer le code ici */
if ( 	(E->State == WAITING)||(E->State ==MOVING))
E->Frame.i=1;	
	// si l'ennemi est  en train d'attaquer --> ligne = 3
	/* Completer le code ici */
if ( 	E->State == ATTACKING)
E->Frame.i=3;
if ( 	(E->State == RUNNING)||(E->State == MOVING1))
E->Frame.i=0;
	// mise a jour du numero de colonne de l'imagette pour avoir l'effet de l'animation
	E->Frame.j ++;    
	if (E->Frame.j == SPRITE_ENNEMI_NbCol)   
		 E->Frame.j = 0;  
	SDL_Delay(50);	
}



void moveEnnemi(Ennemi *E, SDL_Rect posHero)
{ int max=1300, min=1100;
int distEH = E->positionAbsolue.x - (posHero.x + Hero_WIDTH);
    	switch(E->State)
{
case MOVING:
{
     switch (distEH)
{
case 1300 :    	
  E->positionAbsolue.x-=8;
break;
 case 1100:
E->positionAbsolue.x+=8;
break;
}


case FOLLOWING :
{
	  E->positionAbsolue.x-=8;
break;
}
case ATTACKING : 
{

	  E->positionAbsolue.x-=8;
break;
}

case RUNNING:
{
	  E->positionAbsolue.x+=20;

break;
}
}

}
}



void update_ennemi(Ennemi* E, SDL_Rect posHero)
{ 

	int distEH = E->positionAbsolue.x - (posHero.x + Hero_WIDTH);
	printf("distEH = %d\t E->State = %d\n", distEH,E->State);
    	switch(E->State)
    	{
        	case WAITING :
        	{
            		animateEnnemi(E);
            		break;
        	}
                case MOVING :
        	{
            		animateEnnemi(E);
            		moveEnnemi(E,posHero);
            		break;
        	}

        	case FOLLOWING :
        	{
            		animateEnnemi(E);
            		moveEnnemi(E,posHero);
            		break;
        	}

        	case ATTACKING :
        	{
			// Attaque en se déplaçant vers l'ennemi
		    	animateEnnemi(E);
			moveEnnemi(E,posHero);
			break;
        	}    
                case RUNNING :
                {
                        animateEnnemi(E);
			moveEnnemi(E,posHero);
                break;
                }

    	}

	updateEnnemiState(E, distEH);	
}


void updateEnnemiState(Ennemi* E, int distEH)
{
	// Selon l'état courant de l'ennemi, implementer les transitions t2, t4 et t6
   	switch(E->State)
{
case WAITING : 
	       {

              if (    (distEH <= 1300) && (distEH>1100))
	             E->State = MOVING;
             break ; 
           }
case MOVING : 
           {
            if (    (distEH <=1000) && (distEH>100))
	          E->State = FOLLOWING;
            break; 
          }
case FOLLOWING : 
{ 	
if (    (distEH <= 100) && (distEH>0))
	E->State = ATTACKING;
	
break; 
}
case ATTACKING :
{	
if (    distEH <= 0)
E->State =RUNNING;
break ; 
}
}

}

/*********************************************************/
void freeEnnemi(Ennemi *E)
{
	SDL_FreeSurface(E->image);
}
