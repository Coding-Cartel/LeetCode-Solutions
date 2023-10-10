#include<bits/stdc++.h>
using namespace std;
//  Question :-
//  34. Find First and Last Position of Element in Sorted Array
//
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                s=i;
                break;
            }
        }
        if(s==-1){
            return {-1,-1};
        }
        for(int j=nums.size()-1;j>=0;--j){
            if(nums[j]==target){
                e=j;
                break;
            }
        }
        return {s,e};
    }