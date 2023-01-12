#include "Header.h"




int attackc1(void) {
    
    int attack = rand() % 30 + 15;;
    return attack;
}

int attackc2(void) {
    
    int attack2 = rand() % 40 + 18;
    return attack2;
}

int critc1(void) {
    int critd = 0;
    int critc = rand() % 100 + 1;
    if (critc > 90) {
        int critd = rand() % 15 + 1;

    }
    if (critc < 90) {

        int critd = 0;
    }
    return critd;
}

int critc2(void) {
    int critd = 0;
    int critc = rand() % 100 + 1;
    if (critc > 85) {
        int critd = rand() % 25 + 5;

    }
    if (critc < 90) {

        int critd = 0;
    }
    return critd;
}

int enemyattack(void) {
    int eattack = 20;
    int critd = 0;
    int critc = rand() % 100 + 1;
    if (critc > 80) {
        int critd = rand() % 15 + 1;

    }
    if (critc < 90) {

        critd = 0;
    }
    eattack = eattack + critd;
    return eattack;
}

int critslevel(int critlevel) {
    int critr{};
    switch (critlevel) {

    case 1:
        critr = critc1();
    return critr;
     break;
    case 2:
        critr = critc2();
        return critr;
    }

}

int attackslevel(int attacklevel) {
    int attackr{};
    switch (attacklevel) {

    case 1:
        attackr = attackc1();
        return attackr;
        break;
    case 2:
        attackr = attackc2();
        return attackr;
    }
    }
