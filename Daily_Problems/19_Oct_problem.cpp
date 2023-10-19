#include<bits/stdc++.h>
using namespace std;
//  Question :-
//  844. Backspace String Compare
//

    bool backspaceCompare(string s, string t) {
        return check(s) == check(t);
    }
    string check(string str) {
        string ans;
        for (char ch : str) {
            if (ch == '#') {
                if (!ans.empty()) {  // if ans is not empty it will pop the last char. 
                    ans.pop_back();
                }
            }
            else {
                ans.push_back(ch);
            }
        }
        return ans;
    }