#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Find the sum of two numbers of the vector that equal target
        vector<int> solution;

        for (int i = 0; i < nums.size(); i++)
        {
            int prime = nums[i];

            for (int j = 0; j < nums.size(); j++)
            {
                if (prime+nums[j] == target && i != j)
                {
                    solution.push_back(i);
                    // solution.push_back(j);
                    break;
                }
                
            }
            
        }
        
        return solution;
        
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15};
    vector<int> solution = sol.twoSum(nums, 9);

    for (auto &&sol : solution)
    {
        cout << sol << endl;
    }
    

    return 0;
}