#include "Game.h"
#include "UScene.h"
#include "PlayerController.h"

using namespace UpsilonEngine; 

namespace UpsilonGame {

	Game::Game(){
	}


	Game::~Game()
	{
	}

	/// Performs game initialisation - game will exit on return false
	bool Game::init() {

		// Get the scene manager service 
		USceneManager* _sceneManager = UServiceLocator::getSceneManager();
		UWindowManager* _windowManager = UServiceLocator::getWindowManager();
		UWindow* _mainWin = UServiceLocator::getWindowManager()->getMainWindow();

		this->scene = _sceneManager->addScene();

		this->camera = new UEntity("Main Camera");
		this->player = new UEntity("Player");

		Material* _sky = new Material();
		_sky->init("assets/sky.material");

		UCamera* _cam = this->camera->addComponent<UCamera>();
		this->camera->addComponent(new UBasicSkyBox(_sky));

		this->player->addComponent(new PlayerController());

		_mainWin->setActiveCamera(_cam);

		this->scene->addChild(this->camera);
		this->scene->addChild(this->player);

		return true;

	}

	/// Update game logic 
	void Game::update() {

	}

	/// Render game 
	void Game::render() {

	}

}