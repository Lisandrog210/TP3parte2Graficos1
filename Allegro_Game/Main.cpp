#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <iostream>
#include "allegro5\allegro_native_dialog.h"

using namespace std;

int main(int argc, char **argv) {


	
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP  *background, *coolspot, *sierra = NULL;

	al_init();
	al_init_image_addon();
	
	display = al_create_display(800, 600);	
	background = al_load_bitmap("meadow.jpg");
	al_draw_bitmap(background, 0, 0, 0);
	al_flip_display();
	coolspot = al_load_bitmap("coolspot.png");
	sierra = al_load_bitmap("sierra.png");
	al_draw_bitmap(coolspot, 0, 0, 0);
	al_draw_bitmap(sierra, 100, 100, 0);
	while (true) {};

	
	
	
	//al_destroy_display(display);
	//al_destroy_bitmap(background);

	
}