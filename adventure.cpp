/*
Welcome to the game code, this adventure will contain mutiple functions 
taking care of health, hunger/thirst, location, the enemy, and the 
decisions made by the player
*/

#include <iostream>
#include <time.h>

#define HEALTH_POINT '\u2764'
#define ESCAPE_TIME 300

int health_num;

void spacer(){
    for (int i; i < 30; i++){
        std::cout << '\u219F';
    }
}

void show_health(){
    for (int i; i < health_num; i++){
        std::cout << HEALTH_POINT;
    }
}

void new_game(){
    health_num = 5;
    spacer();
    show_health();
}


int main(){
    int game_status = 1;
    new_game();


    return game_status;
}