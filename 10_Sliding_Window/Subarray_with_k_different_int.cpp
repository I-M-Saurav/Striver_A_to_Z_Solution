class Solution {
public:
    int solve(int n, vector<int>& nums, int k) {
        int i = 0, j = 0, ct = 0, ans = 0;
        vector<int> freq(n + 1);
        while (j < n) {
            freq[nums[j]]++;
            if (freq[nums[j]] == 1)
                ct++;
            while (ct > k) {
                freq[nums[i]]--;
                if (freq[nums[i]] == 0) {
                    ct--;
                }
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        ans = solve(n, nums, k) - solve(n, nums, k - 1);
        return ans;
    }
};
