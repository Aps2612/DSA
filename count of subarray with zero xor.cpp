#include<bits/stdc++.h>

class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int n=nums.size();
         long long int result = 0;
          map<long long int, int> freq;
        long long int sum = 0;
        freq[0]++;
        for(int i = 1; i <= n; i++){
            sum = (sum^nums[i-1]);
            freq[sum]++;
            result += freq[sum] - 1;
        }
    return result;
    }
};