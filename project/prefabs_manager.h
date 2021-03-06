#pragma once
#include "ecm.h"
#include "engine.h"

std::shared_ptr<Entity> make_player();
std::shared_ptr<Entity> make_ghost(double, sf::Vector2f);
std::shared_ptr<Entity> make_treasure(sf::Vector2f);
void make_walls();
void make_breakable_walls();
void make_pickaxe();
std::shared_ptr<Entity> make_button(std::string);
std::shared_ptr<Entity> make_logo(std::string);


