// I can gave only function to solve the problem, I can not give main function because it is not allowed in leetcode submission.

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int resultSize = nums1Size + nums2Size;
    int result [resultSize];
    float outputIndex;

    int i = 0, j = 0, k = 0;
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] < nums2[j]){
            result[k++] = nums1[i++];
        }
        else{
            result[k++] = nums2[j++];
        }
    }
    // if i present
    if(i<nums1Size){
        while(i<nums1Size){
            result[k++] = nums1[i++];
        }
    }
    // if j present
    if(j<nums2Size){
        while(j<nums2Size){
            result[k++] = nums2[j++];
        }
    }
    // if result size odd
    if(resultSize%2 == 1){
        outputIndex = result[((resultSize-1)/2)];
    }
    else{
        outputIndex = (result[((resultSize-1)/2)] + result[(resultSize/2)])/2.0 ;
    }

    return outputIndex;
}