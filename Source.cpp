#include "Header.h"



int Hattackc1(void) {

    int attack = rand() % 30 + 15;;
    return attack;
}

int Hattackc2(void) {

    int attack2 = rand() % 35 + 17;
    return attack2;
}

int Lattackc1(void) {

    int attack = rand() % 20 + 10;
    return attack;
}

int Lattackc2(void) {

    int attack2 = rand() % 25 + 12;
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



int healc1(void) {
    int heala = rand() % 20 + 10;
        return heala;
        }

int healc2(void) {
    int heala = rand() % 30 + 12;
    return heala;
}

int healevels(int healevel) {
    int heal{};
    switch (healevel) {
    
    case 1:
        heal = healc1();
        return heal;
        break;
    case 2:
        heal = healc2();
        return heal;
        break;
    }

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

int Hattackslevel(int attacklevel) {
    int attackr{};
    switch (attacklevel) {

    case 1:
        attackr = Hattackc1();
        return attackr;
        break;
    case 2:
        attackr = Hattackc2();
        return attackr;
    }
}
int Lattackslevel(int attacklevel) {
    int attackr{};
    switch (attacklevel) {

    case 1:
        attackr = Lattackc1();
        return attackr;
        break;
    case 2:
        attackr = Lattackc2();
        return attackr;
    }
}


int enemyshealth(int plevel, gh){
    switch (plevel) {
        
    case 1: {

        gh = 100;
        break;}

    case 2: {


        gh = 200;
        break;
    }

          return gh;
    }   
}
