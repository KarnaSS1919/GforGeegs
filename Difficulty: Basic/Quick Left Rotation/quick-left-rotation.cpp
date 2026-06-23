class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        int n=arr.size();
        k =k % n ;
        if(k==0) return;
        
        int l=k-1;
        for(int i=0; i<l;i++){
            swap(arr[i],arr[l]);
            l--;
        }
        int j= n-1;
        for(int i=k; i < j ; i++){
            swap(arr[i],arr[j]);
            j--;
        }
        int m = n-1;
        for(int i = 0; i < m; i++){
            swap(arr[i],arr[m]);
            m--;
        }
        
    }
};