// Narita Chadha Internship Test
// Task 02

/* idea: using the idea of stack and matching ()
*/

int maxSubArraySum(int nums[], int size) {
    int maxSum = nums[0]; 
    int currentSum = nums[0];
    for (int i = 1; i < size; i++) {
        if (currentSum + nums[i] > nums[i]) {
            currentSum += nums[i];
        } else {
            currentSum = nums[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    return maxSum;
}

int main(void) {
    return 0;
}