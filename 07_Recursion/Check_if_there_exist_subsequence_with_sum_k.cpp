class Solution{
    public:
    bool solve(vector<int>& a, int k, int n, int i,int sum) {
        if(i==n){
            if(sum==k) return true;
            return false;
        }
        sum+=a[i];
        if(solve(a,k,n,i+1,sum)) return true;
        sum-=a[i];
        return solve(a,k,n,i+1,sum);
    }

    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return solve(nums,k,nums.size(),0,0);
    }
};
