#include<bits/stdc++.h>
using namespace std;
//  Question :-
//  746. Min Cost Climbing Stairs
//
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int first = cost[0];
        int second = cost[1];
        for (int i = 2; i < n; ++i) {
            int next = min(first, second) + cost[i];
            first = second;
            second = next;
        }
        return min(first, second);
    }