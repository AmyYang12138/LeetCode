//暴力法
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *num = malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++) {
        for(int j=i+1;j<numsSize;j++) {
            if((nums[i]+nums[j])==target) {
                num[0]=i;
                num[1]=j;
                *returnSize = 2;
                return num;
            }
        }
    }
    return -1;
}
