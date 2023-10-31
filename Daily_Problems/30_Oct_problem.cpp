#include<bits/stdc++.h>
using namespace std;
//  Question :-
//  1356. Sort Integers by The Number of 1 Bits
//
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        for(int i=0;i<arr.size();i++){
            int x= arr[i];
            int count=0;
            while(x!=0){
                if(x%2!=0){
                    count++;
                }
                x/=2;
            }
            res.push_back({count,arr[i]});
        }
        sort(res.begin(),res.end());
        vector<int> ans;
        for(int i=0;i<res.size();i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }