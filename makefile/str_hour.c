



int str_hour(char *str)
{
    int i = 0;

    int hour = 0;


    while(str[i] != ':')
    {
        if(str[i] <= '9' && str[i] >= '0')
        {
            if(str[i-1] <= '9' && str[i-1] >= '0')
            {
                hour = hour * 10 + (str[i] - '0');
            }

            else
            {
                hour = str[i] - '0';
            }
            i++;
        }

        else
        {
            i++;
        }
    }
    return hour;
}