class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = -1;
        int smax = -1;
   
        for(int i= 0; i <arr.size(); i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        for(int i =0; i<arr.size(); i++){
            if(smax <arr[i] and max != arr[i]){
                smax = arr[i];
            }
        }
            return smax;
    }
};