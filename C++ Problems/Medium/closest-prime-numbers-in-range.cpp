class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
          
            vector<bool>primes(right+1,true);
            primes[0]=primes[1]=false;

            for (int i =2; i*i <=right; i++) {
                if (primes[i]) {
                    for (int j = i*i; j<=right; j +=i)
                    primes[j] = false;
                }
            }

            vector<int> primeList;
            for (int i =left; i<= right; i++) {
                if (primes[i]) 
                    primeList.push_back(i);
            }
            if (primeList.size() < 2) return {-1, -1};
          
            int minD=INT_MAX;
            pair<int, int>closestPair;
            for (int i = 1; i < primeList.size(); i++){
                int diff=primeList[i]-primeList[i-1];
                if(diff<minD){
                    minD=diff;
                    closestPair={primeList[i-1],primeList[i]};
                }
            }
            return {closestPair.first,closestPair.second};
        }
    };
