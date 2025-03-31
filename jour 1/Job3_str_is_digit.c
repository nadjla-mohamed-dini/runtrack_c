int char_is_digit(char c);

int str_is_digit(char *str)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!char_is_digit(str[i]))
            return 0;
    }
    return 1;  
}