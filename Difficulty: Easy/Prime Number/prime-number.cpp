class Solution {
  public:
    bool isPrime(int n) {
        if(n <= 1) return false;
        int count =0;
        if(n<=1) return false;
        for(int i =1; i<=n ; i++){
            if(n% i ==0){
                count += 1;
            }
        }
            if(count >2  ){
                return false;
            }
            else{
                return true;
            }
        }
        
    
};
 
