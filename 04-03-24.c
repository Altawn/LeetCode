bool isLongPressedName(char* name, char* typed) 
{
    int y = 0,i=0;
    int compteur = 0;

    if(strcmp(name, typed) == 0)
        return true;

    for(i = 0 ; i < strlen(name) ; i++)
    {
        if(typed[y] != name[i])
            return false;

        while((name[i] == typed[y])&&(y < strlen(typed)))
        {
            y++;
            if((name[i]==name[i+1])&&(name[i]==typed[y]))
                i++;
        }
    }

    if(typed[y] != name[i])
            return false;

    return true;    
}
