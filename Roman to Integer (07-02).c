int romanToInt(char* s) 
{
    int number = 0;
    int i = strlen(s)+1;
    
    do
    {
    i--;

        if(s[i] == 'I')
            number += 1;

        else if(s[i] == 'V')
        {
            if(i != 0)
            {
                if(s[i-1] != 'I')
                    number += 5;

                else
                {
                    number += 4;
                    i--;
                }    
            }

            else 
                number += 5;
        }
            
        
        else if(s[i] == 'X')
        {
            if(i != 0)
            {
                if(s[i-1] != 'I')
                    number += 10;

                else
                {
                    number += 9;
                    i--;
                }   
            }

            else 
                number += 10;
        }
        

        else if(s[i] == 'L')
        {
            if(i != 0)
            {
                if(s[i-1] != 'X')
                    number += 50;

                else
                {
                    number += 40;
                    i--;
                }   
            }

            else 
                number += 50;
        }

        else if(s[i] == 'C')
        {
            if(i != 0)
            {
                if(s[i-1] != 'X')
                    number += 100;

                else
                {
                    number += 90;
                    i--;
                }   
            }

            else 
                number += 100;
        }

        else if(s[i] == 'D')
        {
            if(i != 0)
            {
                if(s[i-1] != 'C')
                    number += 500;

                else
                {
                    number += 400;
                    i--;
                }   
            }

            else 
                number += 500;
        }
        
        else if(s[i] == 'M')
        {
            if(i != 0)
            {
                if(s[i-1] != 'C')
                    number += 1000;

                else
                {
                    number += 900;
                    i--;
                }   
            }

            else 
                number += 1000;
        }

    }while(i!=0);

    return number;    
}
