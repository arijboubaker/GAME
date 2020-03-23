typedef struct background{
	SDL_Surface *background;
	SDL_Rect posbg;
	int dx,fx,dy,fy;
}background;
void aff_bg(SDL_Surface *ecran,SDL_Surface *bg,SDL_Rect posbg);
void scrolling(SDL_Surface *ecran,SDL_Rect posperso,SDL_Rect posbg,int dx,int dy,int fx,int fy,int direction,int d,int k);
