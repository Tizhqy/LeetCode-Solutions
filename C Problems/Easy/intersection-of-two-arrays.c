int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result=(int*)malloc(2 * sizeof(int));
    if (result==NULL){
        *returnSize=0;
        return NULL;
    }
    int i = 0, j = 0,k=0;
    while (i<nums1Size && j<nums2Size)
    {
        if (nums1[i]==nums2[j])
        {
            if (k==0 || result[k-1] !=nums1[i])
            {
                result[k++]=nums1[i];
            }
            i++;
            j++;
        }else if (nums1[i]<[nums2[j]])
        {
            i++;
        }else j++;
    }

    *returnSize = k;
    return result;
}//olmadi ..
