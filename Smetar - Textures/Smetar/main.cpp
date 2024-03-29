#include "Game.h"


Game* game = nullptr;

int main(int argc, char* argv[])
{
	game = new Game();
	game->init("Smetar", 1280, 720, false);

	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}