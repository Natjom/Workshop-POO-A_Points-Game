#ifndef PLAYER_H
#define PLAYER_H

#include "dependances.h"
#include "inventory.h"
#include "monster.h"
#include "weapon.h"

class Player {
private:
    std::string name;
    int money;
    int health;
    Weapon firstHandWeapon;
    Inventory inv;
public:
    Player();
    Player(std::string name);
    Player(std::string name, int money, int health, Weapon firstHandWeapon, Inventory inv);
    ~Player() {};

    void info();

    void buyWeapon(Weapon weapon);
    void attack(Monster monstre);
    void hurt(int atk);
};

#endif // PLAYER_H

// o Peut acheter des armes dans une boutique en fonction de son solde.
// o Peut attaquer des monstres pour gagner de l'argent.
// o Peut être endommagé par les monstres.