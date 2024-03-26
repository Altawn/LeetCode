bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) 
{
    int count1 = 0;

    if(n == 0)
        return true;

    if(flowerbedSize == 1 && flowerbed[0] == 0)
        return true;
    
    for(int i = 0 ; i < flowerbedSize ; i++)
    {
        if(i == 0 || i == flowerbedSize-1)
        {
            if(i == 0)
            {
                if(flowerbed[i] == 0 && flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }

            if(i == flowerbedSize-1)
            {
                if(flowerbed[i] == 0 && flowerbed[i-1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        else
        {
            if(flowerbed[i] == 0)
            {   
            if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        if(n == 0)
            return true;
    }

    return false;
}
