//
// Created by Bright on 2022/3/25.
//
#include <vector>

using namespace  std;

int countRange(const vector<int> nums, int len, int start, int end) {
    if (len <= 0)
        return -1;

    int count = 0;
    for (auto ele : nums)
        if (ele >= start && ele <= end)
            count++;

    return count;
}

int getDuplication(const vector<int> nums, int len) {
    if (len <= 0) {
        return -1;
    }

    int start = 1;
    int end = len -1;

    while (start <= end) {
        int middle = ((end - start)>>1) + start;

        int count = countRange(nums, len, start, middle);

        if (start == end) {
            if (count > 1)
                return start;
            else
                return -1;
        }

        if (count > (middle - start + 1))
            end = middle;
        else
            start = middle + 1;
    }

    return -1;
}
