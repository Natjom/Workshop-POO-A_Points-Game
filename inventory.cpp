#include "dependances.h"
#include "inventory.h"

void Inventory::addWeapon(const std::string& name, int cost, int atk) {
        weapons.emplace_back(name, cost, atk);
    }

    // Supprimer une arme par nom
    void Inventory::removeWeapon(const std::string& name) {
        weapons.erase(
            std::remove_if(weapons.begin(), weapons.end(),
                [&](const Weapon& weapon) { return weapon.name == name; }),
            weapons.end());
    }

    // Afficher toutes les armes dans l'inventaire
    void Inventory::displayInventory() const {
        std::cout << "\nInventory:\n";
        if (weapon)
        for (const auto& weapon : weapons) {
            std::cout << "Name: " << weapon.name
                      << ", Cost: " << weapon.cost
                      << ", Attack: " << weapon.atk << '\n';
        }
    }