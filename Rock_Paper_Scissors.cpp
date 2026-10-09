#include <iostream>
#include <stdlib.h>

/* 
Rock Paper Scissors
*/

int main() {

  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  char userInput;
  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n";
  std::cout << "Type C to play: ";
  std::cin >> userInput;
while (userInput == 'C' || userInput == 'c') {


  std::cout << "1) ✊\n";
  std::cout << "2) 🖐\n";
  std::cout << "3) ✌\n";

  std::cout << "SHOOT! ";

  std::cin >> user;

  if (user == 1) {
    std::cout << "You choose ✊!\n";
  }
  else if (user == 2) {
    std::cout << "You choose 🖐!\n";
  }
  else if (user == 3) {
    std::cout << "You choose ✌!\n";
  }
  else if (user > 3 || user <= 0) {
    std::cout << "Are you blind ?! Choose either 1 (rock), 2 (paper), or 3 (scissors)!";
  }
  else {
    std::cout << "Can you even count to 10 lol? Input number 1-3!\n";
  }

  if (user > 3 || user <= 0) {
    std::cout << "\nTry again!\n";
  }
  else if (computer == 1) {
    std::cout << "Computer choose ✊!\n";
  }
  else if (computer == 2) {
    std::cout << "Computer choose 🖐!\n";
  }
  else if (computer == 3) {
    std::cout << "Computer choose ✌!\n";
  }
 
  if (user == computer) {
    std::cout << "\n... It's a tie -_-\n";
  }
  else if ( user == 1 && computer == 2) {
    std::cout << "\nYou lost! Imagine losing to a Computer 💀\n";
  }
  else if (user == 1 && computer == 3) {
    std::cout << "\nYou won! I mean it's a computer bruh! Try beat real person!... If you even have a friend though :)\n";
  }

  else if (user == 2 && computer == 3) {
    std::cout << "\nYou lost! You have no valentine and you lost... idk what to say atp\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "\nYou won! but do you even have a girlfriend though?... \nNo wonder you here playing Rock Paper Scissors with Computer :D\n";
  }
  
  else if (user == 3 && computer == 1) {
    std::cout << "\nYou lost! Yeah keep playing probably you'll win next time... if you even can beat me lmao\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "\nYou won! I doubt you even have someone to celebrate this won though :v\n";
  }
  std::cout << "\nWant to play again? Type C to play or X to quit: ";
  std::cin >> userInput;
  
  if (userInput == 'X' || userInput == 'x') {
    std::cout << "Thanks for playing!\n";
    break;
  }
  else if (userInput == 'C' || userInput == 'c') {
    std::cout << "\nI guess we are playing again lol :)\n\n";
  }
}
  return 0;


}
