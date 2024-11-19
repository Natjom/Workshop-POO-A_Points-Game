#include "dependances.h"
#include "weapon.h"

Weapon::Weapon() : name("Fists"), cost(0), atk(1) {}
Weapon::Weapon(const std::string &name, int cost, int atk)
    : name(name), cost(cost), atk(atk) {}


void Weapon::info() 
{
    std::cout << "\nFirst Hand Weapon : " << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Cost : " << cost << std::endl;
    std::cout << "Attack : " << atk << std::endl;
}