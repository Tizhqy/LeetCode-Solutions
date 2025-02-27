    void moveZeroes(int* nums, int numsSize) {
        int beg=0;
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i]!=0)
            {
                nums[beg++]=nums[i];
            }
            
        }
        while (beg < numsSize)
        {
            nums[beg++]=0;
        }
        
        
    }//bunu dusunemedik :(