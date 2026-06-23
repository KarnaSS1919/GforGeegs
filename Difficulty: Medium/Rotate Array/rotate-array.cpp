class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        if(d==0) return ;
        
        int j = d-1;
        for(int i = 0; i<j ; i++){
            swap(arr[i], arr[j]);
            j--;
        }
        int k = n-1;
        for(int i = d; i< k ; i++){
            swap(arr[i], arr[k]);
            k--;
        }
        int m =n-1;
        for(int i= 0; i <m; i++){
            swap(arr[i],arr[m]);
            m--;
        }
        
    }
};