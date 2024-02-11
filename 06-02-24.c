/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    *returnSize = 2;
    int * nombres_sortie = malloc(*returnSize * sizeof(int));

    for(int i = 0; i < numsSize-1; i++)
    {   
        for(int j = i+1; j < numsSize; j++)
        {
                if(nums[i] + nums[j] == target)
                {
                    nombres_sortie[0] = i;
                    nombres_sortie[1] = j;
                    return nombres_sortie;
                }
        }
    }    
    return -1;
}
