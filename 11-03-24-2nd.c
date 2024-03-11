char* capitalizeTitle(char* title) 
{  
    if(strlen(title) < 3)
    {
        for(int i = 0 ; i < strlen(title) ; i++)
            title[i] = tolower(title[i]);
        
        return title;
    }

    if(title[1] != ' ' && title[2] != ' ')
    {
        title[0] = toupper(title[0]);
    }
    else
        title[0] = tolower(title[0]);

    for(int i = 1 ; i < strlen(title) ; i++)
    {
        if((islower(title[i])&&title[i-1]==' '))
            title[i] = toupper(title[i]);

        if((isupper(title[i])&&title[i-1]!=' '))
            title[i] = tolower(title[i]);

        if(((i < strlen(title)-2)&&(title[i+1] == ' ' || title[i+2] == ' '))||(i >= strlen(title) - 2))
        {
            title[i] = tolower(title[i]);
        }

    }
    return title; 
}
