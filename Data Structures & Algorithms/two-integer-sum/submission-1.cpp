class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   for (int x = 0; x < nums.size(); x++) {
            int m = target - nums[x];

            auto k = find(nums.begin(), nums.end(), m);

            if (k != nums.end()) {
                int foundIndex = distance(nums.begin(), k);
                if (foundIndex != x) {
                    vector<int> res = {x, foundIndex};
                    sort(res.begin(), res.end());  // ensures sorted order
                    return res;
                }
            }
        }
        return {};
    }
};
