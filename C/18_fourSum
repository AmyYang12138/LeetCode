int cmp(const void* a, const void* b) {
    return *(int*)a > *(int*)b?1 : -1;
}

//思路同15.三数之和
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes){
    int** ret= (int**)malloc(numsSize*numsSize*sizeof(int*));
    *returnSize = 0;
    *returnColumnSizes = (int*)malloc(numsSize*numsSize*sizeof(int));
    qsort(nums, numsSize, sizeof(int), cmp);
    if(nums == NULL || numsSize < 4 )
        return NULL;
    for (int i = 0; i < numsSize; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1 ; j < numsSize; j++) {
            if (j != i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = numsSize - 1;
            while (left < right) { //双指针夹逼
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    ret[*returnSize] = (int*)malloc(sizeof(int) * 4);
                    ret[*returnSize][0] = nums[i];
                    ret[*returnSize][1] = nums[j];
                    ret[*returnSize][2] = nums[left];
                    ret[*returnSize][3] = nums[right];
                    (*returnColumnSizes)[*returnSize] = 4;
                    (*returnSize)++;
                    while (left < right && nums[left] == nums[++left]);
                    while (left < right && nums[right] == nums[--right]);
                } else if (sum < target) left++;
                  else right--;
            }
        }
    }
    return ret;
}
