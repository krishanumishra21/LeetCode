class Solution {
public:
    
    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }

    vector<int> getPrimeFactors(int x) {
        vector<int> factors;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                factors.push_back(i);

                while (x % i == 0)
                    x /= i;
            }
        }

        if (x > 1)
            factors.push_back(x);

        return factors;
    }

    int minJumps(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            vector<int> factors = getPrimeFactors(nums[i]);

            for (int p : factors) {
                mp[p].push_back(i);
            }
        }

        queue<int> q;
        vector<int> vis(n, 0);

        q.push(0);
        vis[0] = 1;

        int steps = 0;

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                int i = q.front();
                q.pop();

                if (i == n - 1)
                    return steps;

                if (i - 1 >= 0 && !vis[i - 1]) {
                    vis[i - 1] = 1;
                    q.push(i - 1);
                }

                if (i + 1 < n && !vis[i + 1]) {
                    vis[i + 1] = 1;
                    q.push(i + 1);
                }

                if (isPrime(nums[i])) {

                    int p = nums[i];

                    for (int idx : mp[p]) {
                        if (!vis[idx]) {
                            vis[idx] = 1;
                            q.push(idx);
                        }
                    }

                    mp[p].clear();
                }
            }

            steps++;
        }

        return -1;
    }
};