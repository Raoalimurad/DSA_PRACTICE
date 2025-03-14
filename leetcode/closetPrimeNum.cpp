class Solution {
    public:
         vector<bool> seiveHelper(int n){
            vector<bool>isPrime(n+1,true);
            isPrime[0] = isPrime[1] =  false;
            for(int i = 2; i*i<=n;i++){
                if(isPrime[i]){
                    for(int j = i*i; j<=n;j+=i){
                        isPrime[j] = false;
                    }
                }
            }
            return isPrime;
         }
        vector<int> closestPrimes(int left, int right) {
            vector<bool>isPrime = seiveHelper(right);
            vector<int>primes;
    
            for(int num = left;num<=right;num++){
                 if(isPrime[num]){
                    primes.push_back(num);
                 }
            }
    
            int minDiff = INT_MAX;
            vector<int> result = {-1,-1};
            for(int i = 1; i<primes.size();i++){
                int diff = primes[i]-primes[i-1];
                if(diff < minDiff){
                      minDiff = diff;
                      result = {primes[i-1],primes[i]};
                }
            }
            return result;
        }
    };