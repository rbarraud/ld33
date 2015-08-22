#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity
{
public:
  Player(const sf::Image &image);

  void doEvent(const sf::Event &event);
  void update(const float &delta);
};

#endif // PLAYER_H
