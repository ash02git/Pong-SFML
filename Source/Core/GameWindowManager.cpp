#include "../../Header/Core/GameWindowManager.h"

namespace Core {
	void GameWindowManager::initialize()
	{
		// Allocate memory for the render window object
		game_window = new RenderWindow();
		// Set up the window with configured properties
		createGameWindow();
	}

	void GameWindowManager::createGameWindow()
	{
		game_window->create(VideoMode(game_window_width, game_window_height), game_title);
	}

	bool GameWindowManager::isGameRunning()
	{
		return game_window->isOpen();
	}

	void GameWindowManager::render()
	{
		//implementation will be done later
	}

	RenderWindow* GameWindowManager::getGameWindow()
	{
		return game_window;
	}
}