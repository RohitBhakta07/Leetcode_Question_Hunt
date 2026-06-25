// I can gave only function to solve the problem, I can not give main function because it is not allowed in leetcode submission.

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*) malloc(2 * sizeof(int));  // for return,two speace available 
    for(int i = 0; i < numsSize; i++){
        for(int j =i+1; j<numsSize; j++){
            if(nums[i]+nums[j]== target){
                result[0]= i;
                result[1]= j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
    
}