#include <gtest/gtest.h>
#include "../src/solution.h"


TEST(TestTopic, lc4_test_1) {
    [[maybe_unused]] Solution sol;
    std::vector<int> nums1 {1, 2};
    std::vector<int> nums2 {3, 4};
    auto actual_result {sol.findMedianSortedArrays(nums1, nums2)};
    auto expected_result {2.5};

    EXPECT_FLOAT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc4_test_2) {
    [[maybe_unused]] Solution sol;
    std::vector<int> nums1 {10, 20, 30};
    std::vector<int> nums2 {13, 14, 55, 99};
    auto actual_result {sol.findMedianSortedArrays(nums1, nums2)};
    auto expected_result {20.0};

    EXPECT_FLOAT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc4_test_3) {
    [[maybe_unused]] Solution sol;
    std::vector<int> nums1 {3};
    std::vector<int> nums2 {4};
    auto actual_result {sol.findMedianSortedArrays(nums1, nums2)};
    auto expected_result {3.5};

    EXPECT_FLOAT_EQ(actual_result, expected_result);
}