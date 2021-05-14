int cmp(const void* a, const void* b) {
    return *(int*)a > *(int*)b ? 1 : -1;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int** ret= (int**)malloc(numsSize*numsSize*sizeof(int*));
    *returnSize = 0;
    *returnColumnSizes = (int*)malloc(numsSize*numsSize*sizeof(int));
    //num升序快排(避免出现重复三元组)
    qsort(nums, numsSize, sizeof(int), cmp);

    //排除几种常见明显3sum不等于0的情况
    //1.nums中个数小于3
    //2.nums中第一位大于0,则第2、3位必大于0
    //3.nums前三个最小数相加大于0
    if(nums == NULL || numsSize < 3 || nums[0] > 0 || nums[0] + nums[1] + nums[2] > 0)
        return NULL;

    for (int i = 0; i < numsSize; i++) {        
        if (i > 0 && nums[i] == nums[i - 1]) continue; //选择的元素与上次不相等的元素b，否则会出现重复三元组
        int left = i + 1, right = numsSize - 1;
        while (left < right) { //双指针夹逼
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                ret[*returnSize] = (int*)malloc(sizeof(int) * 3);
                ret[*returnSize][0] = nums[i];
                ret[*returnSize][1] = nums[left];
                ret[*returnSize][2] = nums[right];
                //返回数组当前行的列数为3
                (*returnColumnSizes)[*returnSize] = 3;
                //数组的行数自加1
                (*returnSize)++;
                //选择的元素与上次不相等的元素a、c，否则会出现重复三元组
                while (left < right && nums[left]  == nums[++left]);
                while (left < right && nums[right] == nums[--right]);
            } else if (sum < 0) left++;
              else right--;
        }
    }
    return ret;
}
