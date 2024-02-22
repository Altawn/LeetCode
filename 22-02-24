int* countBits(int n, int* returnSize) 
{
    *returnSize = n + 1;
    int* count = malloc(*returnSize * sizeof(int));

    for (int i = n; i >= 0; i--)
    {
        int nbr = i;
        count[i] = 0;

        while (nbr != 0)
        {
            int nbru = nbr % 2;
            if (nbru != 0)
                count[i] += 1;
            nbr = nbr / 2; 
        }
    }

    return count;
}
