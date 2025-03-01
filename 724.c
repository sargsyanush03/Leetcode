int pivotIndex(int* nums, int numsSize) {
    int total_sum = 0;
	int left_sum = 0;
    for (int i = 0; i < numsSize; ++i) {
        total_sum += nums[i];
    }
	int right_sum = 0;
	for (int i = 0; i < numsSize; ++i) {
		right_sum = total_sum - left_sum - nums[i];
		if (right_sum == left_sum) {
			return (i);
		} else {
			left_sum += nums[i];
		}
	}
    return (-1);
}
/*#include <stdio.h>
int main() {
	int nums[] = {2, -1, 1};
	printf("%d\n",pivotIndex(nums, sizeof(nums)/sizeof(nums[0])));
}*/
