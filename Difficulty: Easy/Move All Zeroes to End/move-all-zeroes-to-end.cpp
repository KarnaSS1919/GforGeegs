class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j= 0;
        for(int i =0; i<=n-1; i++){
            if(arr[i]!=0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};
