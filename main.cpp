#include "rps.hpp"
#include <iostream>

int main() {
  char p1, p2;
  std::cout << "player 1 plays [rps]: ";
  std::cin >> p1;

  std::cout << "player 2 plays [rps]: ";
  std::cin >> p2;

  int result{rps_who_wins(p1, p2)};
  switch (result) {
  case 0:
    std::cout << "tie" << std::endl;
    break;
  case 1:
    std::cout << "player 1 wins" << std::endl;
    break;
  case 2:
    std::cout << "player 2 wins" << std::endl;
    break;
  }
}
