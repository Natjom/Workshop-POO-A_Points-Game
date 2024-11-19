#include "dependances.h"
#include "weapon.h"

Weapon::Weapon() : name("Fists"), cost(0), atk(1) {}
Weapon::Weapon(const std::string &name, int cost, int atk)
    : name(name), cost(cost), atk(atk) {}


void Weapon::info() 
{
    std::cout << "Name: " << name
                      << ", Cost: " << cost
                      << ", Attack: " << atk << '\n';
}