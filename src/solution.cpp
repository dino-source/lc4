#include "solution.h"

#include <set>

double Solution::findMedianSortedArrays(arr<int> &nums1, arr<int> &nums2) {
    double result {};

    std::multiset<int> ms(nums1.begin(), nums1.end());
    ms.insert(nums2.begin(), nums2.end());
    nums1.clear();
    nums1.insert(nums1.end(), ms.begin(), ms.end());
    if (std::size_t idx {nums1.size() / 2}; nums1.size() % 2) {
        result = nums1[idx];
    }
    else {
        result = (nums1[idx - 1] + nums1[idx]) / 2.0;
    }

    return result;
}
