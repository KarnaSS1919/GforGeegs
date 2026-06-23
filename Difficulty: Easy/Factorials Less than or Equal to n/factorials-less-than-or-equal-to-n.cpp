// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
       vector<long long> result;
       long long fact =1;
       for(long long i=1; i<=n; i++){
           fact= fact*i;
       if(fact<=n){
           result.push_back(fact);
        }
        else{
            break;
        }
    }
    return result;
    }
};