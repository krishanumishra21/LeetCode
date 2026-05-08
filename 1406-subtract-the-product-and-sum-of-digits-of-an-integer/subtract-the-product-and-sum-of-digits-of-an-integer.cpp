class Solution {
public:
    int sum(int n) {
        int sm = 0;

        while (n > 0) {
            sm += n % 10;
            n /= 10;
        }

        return sm;
    }

    int pr(int n) {
        int p = 1;

        while (n > 0) {
            p *= n % 10;
            n /= 10;
        }

        return p;
    }

    int subtractProductAndSum(int n) {
        return pr(n) - sum(n);
    }
};