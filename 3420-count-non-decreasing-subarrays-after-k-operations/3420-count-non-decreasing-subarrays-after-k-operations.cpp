class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> val(n), count(n);
        int head = 0, tail = -1;
        int j = n - 1;
        long long cost = 0, res = 0;

        for (int i = n - 1; i >= 0; --i) {
            int x = 1;
            while (tail >= head && val[tail] < nums[i]) {
                cost += (long long)(nums[i] - val[tail]) * count[tail];
                x += count[tail];
                --tail;
            }
            ++tail;
            val[tail] = nums[i];
            count[tail] = x;

            while (cost > k) {
                cost -= val[head] - nums[j];
                if (--count[head] == 0) ++head;
                --j;
            }
            res += j - i + 1;
        }
        return res;
    }
};