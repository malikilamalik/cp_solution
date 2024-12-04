
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*

https://leetcode.com/problems/contains-duplicate/description/

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dupSet;
        for (int num : nums){
            if (dupSet.count(num) > 0){
                return true;
            }
            dupSet.insert(num);
        }
        return false;
    }
};

int main(int argc, char *argv[])
{
    vector<int> nums = {1, 2, 3, 1}; // Example input

    Solution sol; // Create an instance of the Solution class
    bool hasDuplicate = sol.containsDuplicate(nums);

    if (hasDuplicate) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array contains all unique elements." << endl;
    }
    return 0;
}

