#include <vector>
#include <algorithm>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        
        
        for (int cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                std::swap(nums[lastNonZeroFoundAt], nums[cur]);
                lastNonZeroFoundAt++;
            }
        }
    }
};
