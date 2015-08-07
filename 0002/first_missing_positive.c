void swap(int* l, int* r) {
    *l ^= *r;
    *r ^= *l;
    *l ^= *r;
}

int firstMissingPositive(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        while (nums[i] >= 0 && nums[i] < numsSize && nums[i] != nums[nums[i]-1]) {
            swap(&nums[i], &nums[nums[i]-1]);
        }
    }
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != i+1) {
            break;
        }
    }
    return i+1;
}
