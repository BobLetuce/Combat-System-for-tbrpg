#include "Header.h"

int main()
{

    
    int critlevel = 1;
    int attacklevel = 1;
    int healthlevel = 1;
            
    std::vector<int> Monster{ 1,2,3,4,5 };
    int ph = 150;
    std::string player_weapon;
    int eattack = 20;
    int attackdamage{};
    int skillup{};
    std::string axe("Axe");
    std::string sword("Sword");
    std::string wstats("Weapon Info");
    std::string attack("Attack");
    std::string attack1("Attack");
    std::cout << "You will be fighting a goblin. Please choose your weapon: Axe or Sword.\n";
    std::cin >> player_weapon;
    if (player_weapon == axe) {

        attackdamage = 35;


    }
    if (player_weapon == sword) {

        attackdamage = 50;

    }

    std::cout << "You have found the goblin get ready to fight\n";
    int gh = 100;
    do {
        int attack2 = rand() % 30 + 15;
        std::cout << "Player Health:" << ph << "\n";
        std::cout << "Goblin Health:" << gh << "\n";
        std::cout << "Enter Attack to attack\n";
        std::cin >> attack;

        if (attack == attack1) {
            
            gh = gh - (attackc1() + critc1());

            ph = ph - enemyattack();

        }


    } while (gh > 0);

    if (gh < 0) {
        ph = 150;
        std::cout << "You gained 20 exp";
        std::cout << "What skill would you like to increase: Health(1), Attack(2), or Critchance(3)";
        std::cin >> skillup;
    }
    switch (skillup) {
       
    case 1:
            healthlevel = healthlevel + 1;
            break;
    case 2:
        attacklevel = attacklevel + 1;
            break;

    case 3:
        critlevel = critlevel + 1;
        break;
    }



    std::cout << "You have found the goblin get ready to fight\n";
    int gh2 = 200;
    do {
        
        int attack2 = rand() % 30 + 15;
        std::cout << "Player Health:" << ph << "\n";
        std::cout << "Goblin Health:" << gh2 << "\n";
        std::cout << "Enter Attack to attack\n";
        std::cin >> attack;

        if (attack == attack1) {

            gh2 = gh2 - (attackslevel(attacklevel) + critslevel(critlevel));
            ph = ph - enemyattack();

        }


    } while (gh2 > 0);

    std::cout << "You win! GO DIE!!!";


}
