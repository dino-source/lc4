#ifndef DINO_SOURCE_LC4_H
#define DINO_SOURCE_LC4_H

#include <vector>


class Solution {
public:
    template<typename T>
    using arr = std::vector<T>;

    double findMedianSortedArrays(arr<int> &nums1, arr<int> &nums2);
};

#endif // DINO_SOURCE_LC4_H
