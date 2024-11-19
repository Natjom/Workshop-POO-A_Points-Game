

#ifndef WEAPON_H
#define WEAPON_H

#include "dependances.h"

class Weapon
{
public:
    std::string name;
    int cost;
    int atk;

    Weapon();
    Weapon(const std::string &name, int cost, int atk);

    void info();
};

#endif // WEAPON_H