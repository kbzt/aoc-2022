#include <iostream>
#include <fstream>
#include <string>

const int a1[3][3] = {
  {0, 3, 6},
  {3, 6, 0},
  {6, 0, 3},
};

int main() {
  std::ifstream f ("input.txt");
  std::string line;
  char opp, hero;

  if (!f.is_open()) return 1;

  int score = 0;

  while (f) {
    std::getline(f, line);
    if (line.length()) {
      opp = line.at(0); hero = line.at(2);
    }



  }
  return 0;
}
