class Solution {
  public:
  
    int fun (vector<int>& a, int x,int i,int j){
          int mid = i + (j-i)/2;
          if(i>=j) return i;
          if(mid == 0 && a[mid]>x) return -1;
          if (a[mid] <= x){
              return fun(a,x,mid + 1, j);
          }
          return fun(a,x,i, mid-1);
    }
  
  
    int findFloor(vector<int>& arr, int x) {
        int n=arr.size();
        // need to find first element <= x
        int i = 0, j = n-1;
        int index = fun(arr,x,i,j);
        if(index == -1) return index;
        if(arr[index]<=x) return index;
        return index-1;
        int index = 0;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[mid]>x){
                // index = mid;
                j=mid-1;
            }
            else{
                index = mid;
                i= mid +1;
            }
            
        }
        if(arr[index]<= x) return index;
        // if(index>0) return index -1;
        return -1;
        
        
    }
};
