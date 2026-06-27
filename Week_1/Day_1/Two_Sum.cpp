#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store the numbers we've seen and their indices
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // If the complement is in our map, we found the solution
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Otherwise, add the current number and its index to the map
            seen[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found 
        // (though the problem guarantees exactly one solution)
        return {};
    }
};
