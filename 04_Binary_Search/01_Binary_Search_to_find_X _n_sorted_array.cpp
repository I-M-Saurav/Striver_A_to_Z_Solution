class Solution {
public:

    int fun(vector<int>& a, int t, int i,int j){
        int mid = i+ (j-i)/2;
        if(j<i) return -1;
        if(a[mid] == t){
            return mid;
        }
        else if(a[mid] > t){
            // j = mid-1;
            return fun(a,t,i,mid-1);
        }
        // i = mid+1;
        return fun(a,t,mid+1,j);
    }

    int search(vector<int>& nums, int target) {
        //
        int n=nums.size();
        int i=0, j=n-1, index=-1;
        return fun(nums,target, i, j);
        // iterative solution
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target) {index = mid;break;}
            if(nums[mid]>target) j = mid-1;
            else {i = mid+1;}
            
        }
        return index;
    }
};
