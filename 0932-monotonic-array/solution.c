bool isMonotonic(int* nums, int numsSize) {
    int k=1,l=0;
    while(l<numsSize-1) {
        if(nums[l]==nums[l+1])
            l++;
        else 
            break;
    }
    if(l==numsSize-1) return true;
    if(nums[l]<nums[l+1]) {
        for(int i=1;i<numsSize-1;i++) {
            if(nums[i]>nums[i+1]) {
                k=0;
                return false;
            }
        }
    }
    if(nums[l]>nums[l+1]) {
        for(int i=1;i<numsSize-1;i++) {
            if(nums[i]<nums[i+1]) {
                k=0;
                return false;
            }
        }
    }
    return true;
}
