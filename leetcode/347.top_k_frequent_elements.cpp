/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> countMap;
        for(const auto& n : nums){
            countMap[n]++;
        }
        vector<pair<int, int>> arr;
        for (const auto& p : countMap) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(arr[i].second);
        }
        return res;
        return {};
    }
};