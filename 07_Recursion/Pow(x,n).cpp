class Solution {
public:
    double po(double x, long long n) {
        if (n == 0)
            return 1;
        double ans = po(x, n / 2);
        if (n & 1)
            return x * ans * ans;
        return ans * ans;
    }

    double myPow(double x, int n) {
        if (n >= 0) {
            return po(x, n);
        }
        long long z = n;
        return 1.0 / po(x, abs(z));
    }
};
