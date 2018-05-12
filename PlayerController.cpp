#include "PlayerController.h"
#include <Material.h>

namespace UpsilonGame {

	bool PlayerController::init()
	{

		/// Create the players sprite renderer
		this->spriteRenderer = this->getParent()->addComponent<UpsilonEngine::USpriteRenderer>(); 

		//hack for now
		UpsilonEngine::Material* _mat = new UpsilonEngine::Material();
		_mat->init("assets/steve.material");

		UpsilonEngine::USpriteAnimator* animator = new UpsilonEngine::USpriteAnimator();

		UpsilonEngine::USpriteAnimation* run = new UpsilonEngine::USpriteAnimation();
		run->pushFrame(0);
		run->pushFrame(1);
		run->pushFrame(2);
		run->pushFrame(3);
		run->pushFrame(4);
		run->pushFrame(5);

		animator->addAnimation(run);

		this->spriteRenderer->setAnimator(animator);
		this->spriteRenderer->setMaterial(_mat);

		return true; 
	}

	void PlayerController::unload()
	{
	}

	void PlayerController::update()
	{
	}

	void PlayerController::render()
	{
	}
}
