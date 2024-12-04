
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
Given two strings s and t, return true if t is an 
anagram
 of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        vector<int> vecAnagram(26);
        for(int i = 0; i < s.length(); i++){
            vecAnagram[s[i] - 'a']++;
            vecAnagram[t[i] - 'a']--; 
        }

        for (int num : vecAnagram){
            if (num != 0){
                return false;
            }
        }
        return true;
    }
};