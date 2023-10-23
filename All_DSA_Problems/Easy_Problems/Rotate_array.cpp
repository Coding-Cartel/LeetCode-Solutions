class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for the case where k>=n
        k = k%nums.size();

        // reverse the whole array (0 to n-1)
        reverse(nums.begin(), nums.end());

        // reverse the first k elements (0 to k-1)
        reverse(nums.begin(), nums.begin()+k);

        // now the reveser the remaining ones (k to n-1)
        reverse(nums.begin()+k, nums.end());
    }
};
