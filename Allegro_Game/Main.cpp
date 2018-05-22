#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include <iostream>
using namespace std;
//--------------Variables--------------
int displayWidth = 800;
int displayHeigth = 600;
//---------------Objects---------------
ALLEGRO_DISPLAY* display = NULL;
ALLEGRO_BITMAP* image = NULL;

int init() {
	if (!al_init()) {
		cout << "Failed to initialize Allegro" << endl;
		return 0;
	}
	if (!al_init_image_addon()) {
		cout << "Failled to initialize Allegro's Image Addon" << endl;
		return 0;
	}

	display = al_create_display(displayWidth, displayHeigth);

	if (!display) {
		cout << "Failed to initialize display" << endl;
		return 0;
	}

	return 1;
}

int main(int argc, char **argv) {
	init();

	al_destroy_display(display);
	al_destroy_bitmap(image);
}