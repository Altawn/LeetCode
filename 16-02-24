int removeElement(int* nums, int numsSize, int val)
{
    for(int i = 0, y = 0; i < numsSize ; i++)
    {
        if(nums[i] == val)
        {
            nums[i] = 51;
            y = i;

            while(nums[y] != nums[numsSize-1])
            {
                int temp = nums[y+1];
                nums[y + 1] = nums[y];
                nums[y] = temp;

                y += 1;
            }
            numsSize = numsSize - 1;
            i -= 1;
        }
    }
    return numsSize;
}
