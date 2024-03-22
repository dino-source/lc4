#include "solution.h"

#include <iostream>
#include <vector>


int main() {
    [[maybe_unused]] Solution sol;
    std::vector<int> a {1, 2};
    std::vector<int> b {3, 4};
    auto res {sol.findMedianSortedArrays(a, b)};
    std::cout << res << '\n';
}
