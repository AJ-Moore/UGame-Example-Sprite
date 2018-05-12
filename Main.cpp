


/**  Main entry point for the application.*/

#include "Game.h"
#include <Upsilon.h>


int main(int argc, char* argv[]) {

	// Create the game object, add to engine instance 
	UpsilonGame::Game* _game = new UpsilonGame::Game();
	UpsilonEngine::Upsilon* _upsilon = new UpsilonEngine::Upsilon(_game); 
	_upsilon->start(); 

	delete _upsilon;		_upsilon = nullptr; 
	delete _game;		_game = nullptr; 

	return 0;
}
