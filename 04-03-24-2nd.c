int arrangeCoins(int n) 
{
    int etage = 0;

    while(1)
    {
        n = n - etage;

        if(n == 0)
            return etage;
        
        if(n < 0)
            return etage-1;

        etage++;
    }   
}
