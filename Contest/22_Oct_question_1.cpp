#include<bits/stdc++.h>
using namespace std;
//  Question :-
//  2908. Minimum Sum of Mountain Triplets I
//
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int minSum = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] < nums[j]) {
                    for (int k = j + 1; k < n; k++) {
                        if (nums[j] > nums[k]) {
                            minSum = min(minSum, nums[i] + nums[j] + nums[k]);
                        }
                    }
                }
            }
        }
        if (minSum == INT_MAX) {
            return -1;
        }
        return minSum;
    }