class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int curr_sum = 0, sum = 0, n = arr.size();
        for (int i = n - k; i < n; i++) sum += arr[i];
        curr_sum = sum;
        for (int i = 0; i < k; i++) {
            curr_sum -= arr[n - k + i];
            curr_sum += arr[i];
            sum = max(curr_sum, sum);
        }

        return sum;
    }
};