#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int maxArea(vector<int>& height) {
        int lo = 0, hi = height.size() - 1, m = 0, dist = hi - lo;
        while (lo < hi) {
            if (height[lo] < height[hi]) {
                m = max(m, dist * height[lo]);
                lo++;
            } else {
                m = max(m, dist * height[hi]);
                hi--;
            }
            dist--;
        }
        return m;
    }
};