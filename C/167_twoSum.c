//暴力法
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int* ret = (int*) malloc(sizeof(int) * 2);
    for(int i = 0; i < numbersSize ; i++) {
        for(int j = i+1 ; j < numbersSize ; j++) {
            if((numbers[i] + numbers[j]) == target) {
                ret[0] = i + 1; ret[1] = j + 1;
                break;
            }
        }
    } 
    return ret;
}

//双指针
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int* ret = (int*) malloc(sizeof(int) * 2);
    int low = 0, high = numbersSize - 1;
    while (low < high) {
            if ((numbers[low] + numbers[high]) == target) {
                ret[0] = low + 1, ret[1] = high + 1;
                break;
            } else if ((numbers[low] + numbers[high]) < target) ++low;
              else --high;
        }
    return ret;    
}
