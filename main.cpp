#include "player.h"
#include "inventory.h"
#include "weapon.h"
#include "shop.h"
#include "monster.h"

#include "dependances.h"

int main() {
    
    Player steph("Stephane");

    steph.setMoula(1000);

    Weapon stick("Stick", 10, 2);

    steph.info();
    std::cout << std::endl << std::endl;
    
    steph.buyWeapon(stick);

    steph.info();
    std::cout << std::endl << std::endl;
    
    return 0;
}