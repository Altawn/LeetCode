bool isPowerOfTwo(int n) 
{
    int x = 0;
    
    if(n!=1)
    {
        for(int i = 0; i < 32; i++)
        {
            if((pow(2, i) > n)||(n%2 != 0))
                return false;

            else if(pow(2, i) == n)
                return true;
        }
    }
    return true;
}
