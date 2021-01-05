//
// Problem 1468M
//

#include <cstdint>
#include <vector>
#include <set>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>

int main() {
  std::uint32_t t{0};
  std::vector<std::vector<std::set<std::uint32_t>>> data; // matrix of sets

  std::cin >> t;

  std::uint32_t n{0};
  std::uint32_t k{0};
  std::string tmp{};

  for (std::uint32_t i = 0; i < t; ++i) {
    data.push_back(std::vector<std::set<std::uint32_t>>(0));
    std::cin >> n;
    std::cin.ignore();

    for (std::uint32_t j = 0; j < n; ++j) {
      data[i].push_back(std::set<std::uint32_t>());

      std::getline(std::cin, tmp);
      std::istringstream iss(tmp);

      while (std::getline(iss, tmp, ' ')) {
        k = std::stoi(tmp);
        data[i][j].insert(k);
      }
    }
  }

  // analyze
  std::string to_print{};
  std::set<uint32_t> intersect{};
  char buff[100];

  for (auto const& test : data){
    to_print = "-1";

    for (size_t idx_s = 0; idx_s < test.size(); ++idx_s) {
      for (size_t idx_i = idx_s+1; idx_i < test.size(); ++idx_i) {
        std::set_intersection(test[idx_s].begin(), test[idx_s].end(),
                              test[idx_i].begin(), test[idx_i].end(),
                              std::inserter(intersect, intersect.begin()));

        if (intersect.size() > 1 && to_print == "-1") {
          snprintf(buff, sizeof(buff), "%d %d",
                   static_cast<int>(idx_s)+1,
                   static_cast<int>(idx_i)+
                   static_cast<int>(idx_s)+1);
          to_print = buff;
        }
      }
    }

    std::cout << to_print << "\n";
  }

  return 0;
}
