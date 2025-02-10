#include <iostream>
#include <thread>  
#include <chrono>

using namespace std;


int main () {
    char first_choice;
    char second_choice;
    string custom_choice;

    srand (time (NULL));
    int computer = rand() %4 + 1;

    cout << "===========================\n";
    cout << "The Art of Approaching Girl \n";
    cout << "===========================\n";
    start:
    cout << "There are absolutely several ways in order to approaching a girl you like. However, it takes confidence and absolute courage to accomplish it. \n\n";
    cout << "Let us begin. You're sitting in your favorite coffee shop, you see from next to your table, a...\n";
    cout << "   A. Blonde girl\n";
    cout << "   B. Latina girl\n";
    cout << "   C. Asian girl\n";
    cout << "   D. Dude\n";

    cin >> first_choice;

    if (first_choice == 'D' || first_choice == 'd' ) {
        cout << "\nYeah idk what to say... You must be gay\n\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        return 0;
    }
    else if (first_choice == 'a' || first_choice == 'A') {
        cout << "\nYou see from next to your table, a pretty, tall attractive Blonde baddie. And you have a really strong feeling in your heart that you have to approach her\n";
    }
    else if (first_choice == 'b' || first_choice == 'B') {
        cout << "\nYou see from next to your table, a pretty, baddie mamacita Latine baddie. And you have a really strong feeling in your heart that you have to approach her\n";
    }
    else if (first_choice == 'c' || first_choice == 'C') {
        cout << "\nYou see from next to your table, a pretty, baddie squid game Asian baddie. And you have a really strong feeling in your heart that you have to approach her\n";
    }
    else {
        cout << "\nYeah no wonder you're single, you're literally dumb for not reading instructions. Try again!\n\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        goto start;
    }
    this_thread::sleep_for(std::chrono::seconds(1));

    start2:
    cout << "==============================================================\n";
    cout << "Choose from 4 techniques below, how would you approach a girl? \n";

    cout << "   A. Open with a pickup line\n";
    cout << "   B. Straight walk to her and directly ask for her phone number\n";
    cout << "   C. Being goofy and call her mommy :D\n";
    cout << "   D. (Fill out your own words)\n";
    cin >> second_choice;

    cout << "\nShe looks at you and pondering...\n\n";
    
    this_thread::sleep_for(std::chrono::seconds(3));

    if ((second_choice == 'A' || second_choice == 'a' || 
         second_choice == 'B' || second_choice == 'b' || 
         second_choice == 'C' || second_choice == 'c' || 
         second_choice == 'D' || second_choice == 'd') && computer == 1) {
        cout << "Yeah sure, you seems a kind guy\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        cout << "CONGRATULATIONS You Just Got Yourself a Girlfriend! 🎉🥳\n\n";
    }
    else if ((second_choice == 'A' || second_choice == 'a' || 
         second_choice == 'B' || second_choice == 'b' || 
         second_choice == 'C' || second_choice == 'c' || 
         second_choice == 'D' || second_choice == 'd') && computer == 2) {
        cout << "Ummm.... Im actually 15 :D\n";
        cout << "👮🚨 YEAH YOU ARE GOING STRAIGHT TO JAIL BUDDY 🚨👮\n";
        
        this_thread::sleep_for(std::chrono::seconds(1));
        cout << "\nAnd yep always FIRST THING FIRST ask how old she is :D\n\n";
        return 0;
    }
    else if ((second_choice == 'A' || second_choice == 'a' || 
         second_choice == 'B' || second_choice == 'b' || 
         second_choice == 'C' || second_choice == 'c' || 
         second_choice == 'D' || second_choice == 'd') && computer == 3) {
        cout << "I am so sorry, but I have a boyfriend\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        cout << "\nUmmm yeah you will be single forever... Good luck spending the rest of your year alone :)\n\n";
        return 0;
    }
    else if ((second_choice == 'A' || second_choice == 'a' || 
         second_choice == 'B' || second_choice == 'b' || 
         second_choice == 'C' || second_choice == 'c' || 
         second_choice == 'D' || second_choice == 'd') && computer == 4) {
        cout << "GET AWAY FROM ME YOU FREAKING CREEP\n\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        cout << "Everybody at coffee shop look at you\n\n";
        cout << "-100000 Aura Debt 💀\n";
        return 0;
    }
    else {
        cout << "\nYeah choose either A, B, C, or D (with your own words). It is not that freaking complicated lmao.\n\n";
        this_thread::sleep_for(std::chrono::seconds(1));
        goto start2;
    }

}
