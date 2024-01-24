class Solution {
public:
    // Given an array of integers nums, you start with an initial positive value startValue.
    // In each iteration, you calculate the step by step sum of startValue plus elements in nums (from left to right).
    // Return the minimum positive value of startValue such that the step by step sum is never less than 1.
    int minStartValue(vector<int>& nums) {
        int startValue = 1;
        int sum = startValue;
        int i = 0;
        
        while (i < nums.size()) {
            printf("for loop iteration i = %d with startValue = %d\n", i, startValue);
            sum += nums[i];
            printf("sum = %d\n", sum);
            // check if sum dips below 1 after adding every element
            if (sum < 1) {
                // reset loop with bigger startValue
                startValue++;
                sum = startValue;
                i = -1;
            }
            i++;
        }
        return startValue;
    }
};
