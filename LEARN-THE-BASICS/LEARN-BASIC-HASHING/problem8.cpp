// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.

// Please note that this section might seem a bit difficult without prior knowledge on what hashing is, we will soon try to add basics concepts for your ease! If you know the concepts already please go ahead to give a shot to the problem. Cheers!

// Example 1

// Input: nums = [1, 2, 2, 3, 3, 3]

// Output: 3

// Explanation: The number 3 appears the most (3 times). It is the most frequent element.

// Example 2

// Input: nums = [4, 4, 5, 5, 6]

// Output: 4

// Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter an array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int maxFreq = 0;
    int answer = 0;

    for (auto it : mpp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            answer = it.first;
        }
        else if (it.second == maxFreq)
        {
            answer = min(answer, it.first);
        }
    }

    cout << "Most frequent element: " << answer << endl;
    cout << "Frequency: " << maxFreq << endl;
}