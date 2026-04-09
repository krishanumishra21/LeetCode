class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;

        // Step 1: Find max
        for (int c : candies) {
            maxCandies = max(maxCandies, c);
        }

        vector<bool> result;

        // Step 2: Compare for each kid
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};