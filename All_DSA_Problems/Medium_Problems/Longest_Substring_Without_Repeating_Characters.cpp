#include<bits/stdc++.h>
using namespace std;
//   Question :-
//   3. Longest Substring Without Repeating Characters
//
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi = 0;
        unordered_map<char, int> mp;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (mp.count(s[i]) == 0 || mp[s[i]] < j) {
                mp[s[i]] = i;
                maxi = max(maxi, i - j + 1);
            } 
            else {
                j = mp[s[i]] + 1;
                mp[s[i]] = i;
            }
        }
        return maxi;
    }