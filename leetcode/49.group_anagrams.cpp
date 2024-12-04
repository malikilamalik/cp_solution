
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*

Given an array of strings strs, group the 
anagrams
 together. You can return the answer in any order.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]

 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        for (int i = 0; i < strs.size(); i++){
            vector<int> countChat(26);
            for (int j = 0; j < strs[i].size(); j++){
                countChat[strs[i][j] - 'a']++;
            }
            string key = to_string(countChat[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(countChat[i]);
            }
            anagramMap[key].push_back(strs[i]);
        }
        vector<vector<string>> result;

        for(const auto& a: anagramMap){
            result.push_back(a.second);
        }
        return result;
    }
};