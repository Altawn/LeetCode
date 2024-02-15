char* firstPalindrome(char** words, int wordsSize) 
{
    for(int i = 0 ; i < wordsSize ; i++)
    {
        int palindrome = 0, yi = 0;
        int compteur = strlen(words[i]) -1;

        while((yi < compteur)&&(palindrome == 0))
        {
            if(words[i][yi] != words[i][compteur])
                palindrome = 1;
            yi = yi + 1;
            compteur = compteur - 1;
        }

        if(palindrome == 0)
            return words[i];
    }    
    return "";
}
