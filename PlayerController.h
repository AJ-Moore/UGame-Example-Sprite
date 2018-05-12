

#ifndef GAME_PLAYER_CONTROLLER_H
#define GAME_PLAYER_CONTROLLER_H

#include "UCommon.h"
#include "UComponent.h"
#include <USpriteRenderer.h>

namespace UpsilonGame {

	class DLLExport PlayerController : public UpsilonEngine::UComponent{
	public:
		/// Initialisation method, called during object initialisation 
		virtual bool init();

		/// Called prior to object deletion to perform any unload actions
		virtual void unload();

		/// Update method, called incrementally, this is where logic not related to rendering is usually implemented
		virtual void update();

		/// Provide explicit point for rendering(for maximun flexibility)... will render to the parent scenes framebuffer 
		virtual void render();

	protected:

		/// Reference to the players sprite renderer
		UpsilonEngine::USpriteRenderer* spriteRenderer;
	};

}

#endif