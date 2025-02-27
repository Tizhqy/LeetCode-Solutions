int singleNumber(int* nums, int numsSize) {
    for (int i = 0; i < numsSize-1; i++)
    {
        int counter=0;
        int j=0;
        while (j< numsSize)
        {
            if (nums[i]==nums[j])
            {
                counter++;
            }
            j++;
        }
        if (counter == 1)
        {
            return nums[i];
        }
        
    }

}