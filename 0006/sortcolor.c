#include <stdio.h>

void swap(int* l, int* r) {
    *l ^= *r;
    *r ^= *l;
    *l ^= *r;
}

void sortColors(int* nums, int numsSize) {
    int begin = 0;
    int end = numsSize - 1;
    for (int i = 0; i < numsSize; i++) {
        while (nums[i] == 2 && i < end) {
            swap(&nums[i], &nums[end--]);
        }
        while (nums[i] == 0 && i > begin) {
            swap(&nums[i], &nums[begin++]);
        }
    }
}

int main() {
    int nums[] = {0, 1};
    sortColors(nums, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d", nums[i]);
    }
    return 0;
}

