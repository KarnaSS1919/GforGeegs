class Solution {
  public:
    long long sumOfDivisors(long long n) {
        int sum = 0;
        int div ;
        int num;
        for( int i=1;i<=n ;i++){
                for(int j=1;j<=i ;j++){
                    num = i%j;
                    if(num==0)
                    sum = sum + j;
            }
        }
        return sum;
    }
};