#include "dependances.h"
#include "player.h"

Player::Player()
{
    name = "John Doe";
    money = 0;
    health = 0;
    Weapon firstHandWeapon = Weapon();
    inv = Inventory();
};

Player::Player(std::string name)
{
    this->name = name;
    money = 0;
    health = 0;
    Weapon firstHandWeapon = Weapon();
    inv = Inventory();
};

Player::Player(std::string name, int money, int health, Weapon firstHandWeapon, Inventory inv)
{
    this->name = name;
    this->money = money;
    this->health = health;
    this->firstHandWeapon = firstHandWeapon;
    this->inv = inv;
};

void Player::info() 
{
    std::cout << "\nPlayer : " << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Money : " << money << std::endl;
    std::cout << "Health : " << health << std::endl;
    firstHandWeapon.info();
    inv.displayInventory();
};



    Inventory inv;