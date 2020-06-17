#include "jeu.h"

void get_input(int Tab_input[], SDL_Event event)
{
	switch (event.type) 
	{
		case SDL_KEYDOWN:
			Tab_input[event.key.keysym.sym] = 1;	
			break;

		case SDL_KEYUP:
			Tab_input[event.key.keysym.sym] = 0;
			break;
	}

}

int jouer(SDL_Surface * screen)
{
	char path_hero [500] = "hero_spr.png";
	char path_ennemi [500] = "ennemi_spr.png";
	char path_background [500] = "background.png";
	char path_font [500] ="Ubuntu-Title.ttf";	

	int continuer = 1;
	SDL_Event event;
	int Tab_input[323] = {0}; // everything will be initialized to false	

	Hero hero,f;
	Ennemi ennemi;
	Background Backg,Backg2;
	Text txt;
	
	TTF_Font *police = NULL;
	

	int HE_collision = 0; //initialement pas de collision hero/ennemi
int HE_collision1 = 0;
	int ib = 0, ih = 0, ie = 0, it = 0;

	/*********************** INITIALIZE ************************/
	
	ib = init_background(&Backg, path_background,&Backg2);
	ih = init_hero(&hero, path_hero,&f);
	ie = init_ennemi(&ennemi, path_ennemi);
	it = init_text(&txt, path_font);

	if(ib == -1 || ih == -1 || ie == -1 || it == -1)
	{
		continuer = 0;	
	}

	//Appui continu sur les touches
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);

	// GAME LOOP
	while(continuer) 
	{
		/*********************** INPUT ************************/
		if (SDL_PollEvent(&event)) 
		{				
			get_input(Tab_input, event);
		}

	 
		/*********************** UPDATE ************************/
		// update continuer pour sortir de la boucle si
		// l'utilisateur appuie sur echaper ou sur la croix
		continuer = !(Tab_input[SDLK_ESCAPE] || event.type == SDL_QUIT);
		
		//update l'etat de collision hero/ennemi,
		// cas deplacement horizontal, hero à gauche de l'ennemi
		HE_collision = 	((hero.positionAbsolue.x + Hero_WIDTH) >= ennemi.positionAbsolue.x) &&(hero.positionAbsolue.x <= (ennemi.positionAbsolue.x + Ennemi_WIDTH));		

		//update les composantes du jeu
		update_hero(&hero, Tab_input, HE_collision,&f);
		update_ennemi(&ennemi, hero.positionAbsolue);
		update_txt(&txt,hero.vies);
// 		update_background(...); // en cas de scrolling



		/*********************** DISPLAY ************************/
		display_background(Backg,Backg2,screen);
		displayText(txt,screen);
		display_ennemi(ennemi,screen);
		display_hero(hero,screen,f);

		SDL_Flip(screen);
		
	}
        freeText(&txt);
	freeHero(&hero,&f);
	freeEnnemi(&ennemi);
	freeBackground(&Backg,&Backg2);
	
	return(0);
}
