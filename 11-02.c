char* longestCommonPrefix(char** strs, int strsSize) 
{
    if(strsSize == 0)
        return "";

    for(int i = 0 ; i < strlen(strs[0]) ; i++)
    {
        for(int y = 1 ; y < strsSize ; y++)
        {
            if((strs[y][i] != strs[0][i]) || (i == strlen(strs[y])))
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];   
}
