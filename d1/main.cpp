#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::ifstream file("input.txt");
  std::string line;

  if (!file.is_open()) return 1;

  auto calories = 0;
  std::vector<int> list;

  while (file) {
    std::getline(file, line);
    if (!line.size()) {
      list.push_back(calories);
      calories = 0;
      continue;
    }
    calories += std::stoi(line);
  }

  std::sort(list.begin(), list.end());

  std::cout << "max cals: " << list.back() << std::endl;
  std::cout << "top 3 cals added: " << (list[list.size() - 1] + list[list.size() - 2] + list[list.size() - 3]) << std::endl;

  file.close();
  return 0;
}
