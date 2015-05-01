// CS 372 Project 3
// The Platformer
// Noah Betzen, William Fisher, Jacob McKenna
// Dylan Tucker, William Showalter, Saira Walia, Adam Walters
// GameInputHandler.cpp

#include "GameInputHandler.h"

void GameInputHandler::setExitCommand(std::shared_ptr<Command> command)
{
  _exit = command;
}

void GameInputHandler::setMovePlayerCommand(std::shared_ptr<Command> command)
{
  _movePlayer = command;
}

std::shared_ptr<Command> GameInputHandler::handleInput(const sf::Event &event)
{
  switch(event.key.code)
  {
    case sf::Keyboard::Escape:
    {
      return _exit;
      break;
    }

    case sf::Keyboard::Up:
    case sf::Keyboard::Down:
    case sf::Keyboard::Left:
    case sf::Keyboard::Right:
    case sf::Keyboard::W:
    case sf::Keyboard::A:
    case sf::Keyboard::S:
    case sf::Keyboard::D:
    {
      return _movePlayer;
    }
    default:
    {
      break;
    }
  }

  return _null;
}