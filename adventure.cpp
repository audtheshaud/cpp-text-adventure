/*
Welcome to the game code, this adventure will contain mutiple functions 
taking care of health, hunger, location, the enemy, and the 
decisions made by the player
*/

#include <iostream>
#include <time.h>
#include <string>
#include <ncurses.h>
#include <unistd.h>

#define ESCAPE_TIME 300

int health_num;

void next_page(){
    std::cout << "Press any key to continue...\n";
    system("read -s -N 1");
    system("clear");
    sleep(1.5);
    return;
}

void spacer(){
    std::cout << "\n";
    for (int i = 0; i < 120; i++){
        std::cout << "↟";
    }
    std::cout << "\n";
}

void show_health(int* health){
    std::cout << "Health: ";
    for (int i = 0; i < *health; i++){
        std::cout << "❤ ";
    }
    std::cout << "\n\n";
}

void how_to_play(){
    spacer();
    std::cout << "                                              ---HOW TO PLAY---\n";
    std::cout << " \\ The Forest is a text based adventure game in which the player makes decisions in order to avoid an unfortunate fate \\\n";
    std::cout << " \\ that awaits them. Using contextual clues, the player will be able to make their way to safety. Remember, to always  \\\n";
    std::cout << " \\ TRUST YOUR INSTINCTS...                                                                                             \\ \n\n";
    spacer();
    next_page();
    return;
}

void new_game(){
    spacer();
    std::cout << "Chapter 1:\n";
    std::cout <<"---      You wake up in a small clearing with colossal evergreens towering over you in every direction               ---\n\n";
    std::cout <<"---      You examine yourself and notice your clothes are tattered and your belongings have disappeared              ---\n\n";
    std::cout <<"---      Loud shrieks come from somewhere far away, you feel your heart sink as your peer out into the ominous fog   ---\n\n";
    std::cout <<"---      The wildlife that was eerily studing you scatter frantically, giving you the impression, you should too...  ---\n";
    spacer();
    return;
}

void welcome_screen(){
    spacer();
    std::cout << "      .___________. __    __   _______     _______   ______   .______       _______     _______.___________.\n";
    std::cout << "      |           ||  |  |  | |   ____|   |   ____| /  __  \\  |   _  \\     |   ____|   /       |           |\n";
    std::cout << "      `---|  |----`|  |__|  | |  |__      |  |__   |  |  |  | |  |_)  |    |  |__     |   (----`---|  |----`\n";
    std::cout << "          |  |     |   __   | |   __|     |   __|  |  |  |  | |      /     |   __|     \\   \\       |  |     \n";
    std::cout << "          |  |     |  |  |  | |  |____    |  |     |  `--'  | |  |\\  \\----.|  |____.----)   |      |  |     \n";
    std::cout << "          |__|     |__|  |__| |_______|   |__|      \\______/  | _| `._____||_______|_______/       |__|     \n";
    spacer();
    std::cout << "A text based adventure game by A. N.\n";
    next_page();
    return;
}



int main(){
    int game_status = 1;
    welcome_screen();
    how_to_play();
    new_game();
    return game_status;
}