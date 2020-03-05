#ifndef ENNEMI_H_
#define ENNEMI_H_
typedef struct ennemis
{
	SDL_Rect pos1;
	SDL_Rect pos2;
	SDL_Surface *e1;
	SDL_Surface *e2;
	SDL_Surface *e3;
	SDL_Surface *enb;
}ennemis;

void initialiserennemi(ennemis *ennemi);


#endif
