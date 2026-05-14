int removeDuplicates(int* nums, int numsSize) {
    int j = 2;
    if(numsSize==1){
        return 1;
    }
    if(numsSize==2){
        return 2;
    }
    for(int i = 2;i<numsSize;i++){
        if(nums[i]==nums[j-2]){
            continue;
        }
        else{
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}