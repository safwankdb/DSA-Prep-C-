// https://leetcode.com/problems/find-k-th-smallest-pair-distance/submissions/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int countPairs(vector<int>& nums, int x) {
        int left, right, n = nums.size(), count = 0;
        for (right = 1; right < n; right++) {
            while (nums[right] - nums[left] > x)
                left++;
            count += right - left;
        }
        return count;
    }

    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int lo = 0, hi = nums.back() - nums[0], mid;
        while (lo < hi) {
            mid = (hi + lo) / 2;
            if (countPairs(nums, mid) >= k)
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
};