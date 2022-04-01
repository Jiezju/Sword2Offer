//
// Created by Bright on 2022/3/24.
//
#include <vector>

using namespace std;

bool duplicate(vector<int> nums, int len, int& duplicate) {
    // validate
    if (len <= 0)
        return false;

    for (auto ele : nums) {
        if (ele < 0 )
            return false;
    }

    // algorithm
    for (int i = 0; i < len; i++) {
        while (nums[i] != i) {
            if (nums[i] == nums[nums[i]]) {
                duplicate = nums[i];
                return true;
            }

            // swap
            swap(nums[i], nums[nums[i]]);
        }
    }
}

