class Solution {
    double calc(double x, int n) {
        if(n==0) return 1.0;
        double half = calc(x, n/2.0);

        if(n%2==0) {
            return half*half;
        }
        return x*half*half;
    }
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N<0) {
            return 1.0/calc(x, -N);
        }

        return calc(x, N);
    }
};