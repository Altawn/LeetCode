int singleNumber(int* nums, int numsSize) 
{
    int y = 0; int i = -1;

    while(y < numsSize+1)
    {
        i += 1;

        if(i == numsSize)
            return nums[y];

        if((nums[i] == nums[y])&&(y != i))
        {
            y += 1;
            i = -1;
        }
    }

    return nums[y]; 
}
