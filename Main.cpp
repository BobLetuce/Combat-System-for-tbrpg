#include "Header.h"

int main()
{


    int critlevel = 1;
    int attacklevel = 1;
    int healthlevel = 1;
    int rechargelevel = 1;
    int healevel = 1;


    std::vector<int> Monster{ 1,2,3,4,5 };
    int ph = 150;
    std::string player_weapon;
    int eattack = 20;
    int attackdamage{};
    int skillup{};
    std::string axe("Axe");
    std::string sword("Sword");
    std::string wstats("Weapon Info");
    int attack{};
    int Hattack = 1;
    int Lattack = 2;
    int Regen = 3;
    int Heal = 4;
    int PE = 30;
    std::cout << "You will be fighting a goblin. Please choose your weapon: Axe\n";
    std::cin >> player_weapon;
    if (player_weapon == axe) {

        attackdamage = 35;


    }
    if (player_weapon == sword) {

        attackdamage = 50;

    }


    int gh = 100;
    do {
        int attack2 = rand() % 30 + 15;
        std::cout << "Player Health:" << ph << "\n";
        std::cout << "Player Energy:" << PE << "\n";
        std::cout << "Goblin Health:" << gh << "\n";
        std::cout << "Enter 1(Heavy Attack(10E) 2(Light Attack(5E) 3(Recharge Energy(+15E) or 4(Heal(10E)\n";
        std::cin >> attack;

        if (attack == Hattack) {

            gh = gh - (Hattackc1() + critc1());
            PE = PE - 10;
            ph = ph - enemyattack();

        }
        if (attack == Lattack) {

            gh = gh - (Lattackc1() + critc1());
            PE = PE - 5;
            ph = ph - enemyattack();

        }
        if (attack == Regen) {
            
            PE = PE + 10;

            ph = ph - enemyattack();
        }
        if (attack == Heal) {
            ph = ph + 35;
            PE = PE - 10;
            ph = ph - enemyattack();
        }


    } while (gh > 0);
    PE = 45;
    if (gh < 0) {
        ph = 150;
        std::cout << "You gained 20 exp\n";
        std::cout << "What skill would you like to increase: Health(1), Attack(2), Critchance(3), Recharge(4), Or Heal(5) \n";
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
    case 4:
        rechargelevel = rechargelevel + 1;
        break;

    case 5:
        healevel = healevel + 1;
        break;
    }



    std::cout << "You have found the goblin get ready to fight\n";
    int gh2 = 200;
    do {

        int attack2 = rand() % 30 + 15;
        std::cout << "Player Health:" << ph << "\n";
        std::cout << "Player Energy" << PE << "\n";
        std::cout << "Goblin Health:" << gh2 << "\n";
        std::cout << "Enter 1(Heavy Attack) 2(Light Attack) 3(Recharge Energy) or 4(Heal)\n";
        std::cin >> attack;

        if (attack == Hattack) {

            gh2 = gh2 - (Hattackslevel(attacklevel) + critslevel(critlevel));
            ph = ph - enemyattack();
            PE + PE - 10;
        }
        if (attack == Lattack) {
            gh2 = gh2 - (Lattackslevel(attacklevel) + critslevel(critlevel));
            PE = PE - 5;
            ph = ph - enemyattack();
        }
        if (attack == Regen) {

            PE = PE + 10;

            ph = ph - enemyattack();
        }
        if (attack == Heal) {
            ph = ph + healevels(healevel);
            PE = PE - 10;
            ph = ph - enemyattack();
        }

    } while (gh2 > 0);


    std::cout << "You win! GO DIE!!!";


}
