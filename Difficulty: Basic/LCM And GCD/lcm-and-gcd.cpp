class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int dividend = a;
        int divisor = b;
        while(divisor!=0){
            int remainder; 
            remainder = dividend % divisor;
            dividend = divisor;// dividend will be answer 
            divisor = remainder;
        }
        int gcd = dividend;
        int lcm = (a/dividend)*b;
        return { lcm , gcd};
    }
    
};