#include <iostream>

int main() {
  char p1, p2;
  std::cout << "player 1 plays [rps]: ";
  std::cin >> p1;

  std::cout << "player 2 plays [rps]: ";
  std::cin >> p2;

  if (p1 == p2) {
    std::cout << "tie" << std::endl;
  } else if (
      (p1 == 'r' && p2 == 'p') ||
      (p1 == 'p' && p2 == 's') ||
      (p1 == 's' && p2 == 'r')
    ) {
    std::cout << "p2 wins" << std::endl;
  } else {
    std::cout << "p1 wins" << std::endl;
  }

}
