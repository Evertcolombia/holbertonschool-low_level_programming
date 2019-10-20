char *cap_string(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == 9)
                str[i] = (str[i] + 23);
      
        else if (str[i] == 10)
        {
            i++;
            if (str[i] >= 97 && str[i]<= 122)
                str[i] = (str[i] - 32);
            i--;
        }

        else if (str[i] ==  46 && str[i + 1] >= 97 && str[i + 1] <= 122)
        {
            i++;
            str[i] = (str[i] - 32);
            i--;
        }
        else if (str[i] == 32)
        {
            i++;
            if (str[i] >= 97 && str[i]<= 122)
                str[i] = (str[i] - 32);
            i--;
        }
        i++;    
    } return (str);   
}
