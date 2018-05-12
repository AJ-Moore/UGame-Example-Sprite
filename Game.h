

#ifndef GAME_H
#define GAME_H

#include <UGame.h>

#include "UScene.h"
#include "UEntity.h"

namespace UpsilonGame {
	/** Game central point for application, provides direct interface between the game and the engine*/
	class Game : public UpsilonEngine::UGame{
	public:
		Game();
		~Game();

		/// Performs game initialisation - game will exit on return false
		virtual bool init();

		/// Update game logic 
		virtual void update();

		/// Render game 
		virtual void render();

		/// The scene
		UpsilonEngine::UScene* scene;

		/// The player entity
		UpsilonEngine::UEntity* player;

		/// The Camera 
		UpsilonEngine::UEntity* camera; 
	};

}

#endif 
