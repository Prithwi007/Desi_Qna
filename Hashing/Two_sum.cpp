/*
Algorithm: 
Fist look the approach using hashing. 
1. take unordered_map and one vector two store the returned output.
2. for 0 to size of the given vector.
2.1   value=target- value of given vector. i.e if 9 is target and get value 2 then 9-2=7
2.2   now check value is present or not in the Map. i.e 7 is present or not
2.3   if present then 
         store the index of positions
      else
          store the value of given vector into the map
  
T.C - O(n*m)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
    vector<int> answer;
    for (int i = 0; i < nums.size(); i++)
    {
        int value = target - nums[i];
        if (mpp.find(value) != mpp.end())
        {
            answer.push_back(i);
            answer.push_back(mpp[value]);
            return answer;
        }
        mpp[nums[i]] = i;
    }

    return {-1, -1};
    }
};
