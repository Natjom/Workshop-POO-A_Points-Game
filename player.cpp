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
    std::cout << "Name: " << name << ", " << "Money: " << money << ", " << "Health: " << health << std::endl;
    std::cout << "Main hand weapon : " << std::endl;
    firstHandWeapon.info();
    inv.displayInventory();
};


void Player::buyWeapon(Weapon weapon) 
{
    if (weapon.cost < money) 
    {
        std::cout << "You bought an " << weapon.name << " !" << std::endl;
        money -= weapon.cost;
        inv.addWeapon(weapon.name, weapon.cost, weapon.atk);
    }
    else {
        std::cout << "Not enough money to buy a " << weapon.name << " !" << std::endl;
    }
};