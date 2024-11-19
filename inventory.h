#ifndef INVENTORY_H
#define INVENTORY_H

#include "dependances.h"
#include "weapon.h"

class Inventory
{
private:
    std::vector<Weapon> weapons;

public:
    void addWeapon(const std::string &name, int cost, int atk);
    void removeWeapon(const std::string &name);
    void displayInventory() const;
};

#endif // INVENTORY_H