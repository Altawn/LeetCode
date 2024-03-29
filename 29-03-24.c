char* modifyString(char* s) 
{
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int y;
    int lenght = strlen(s);

    if(lenght == 1)
    {
        if(s[0] == '?')
            s[0] = 'a';
        
        return s;
    }

    for(int i = 0 ; i < lenght ; i++)
    {
        y = 0;

        if(s[i] == '?')
        {
            if(i == 0)
            {
                do
                {
                    s[i] = letters[y];
                    y++;
                }while(s[i] == s[i+1]);
            }

            if(i == lenght-1)
            {
                do
                {
                    s[i] = letters[y];
                    y++;
                }while(s[i] == s[i-1]);

            }

            if(i > 0 && i < lenght-1)
            {
                do
                {
                    s[i] = letters[y];
                    y++;
                }while((s[i] == s[i+1])||(s[i] == s[i-1]));
            }
        }
    }    
    return s;
}
