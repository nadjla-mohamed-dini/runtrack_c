#include <stdio.h>


int my_atoi(char *str) {
    int result ;
    int i;
    int n;

    i=0;
    n=0;

	while((str[i] == '\n') || (str[i] == ' '))
           i++;

    if (str[i] == '-')
              n = 1;
    
    if (str[i] == '-')
             i++;
    
    while (str[i] && (str[i] >='0')&& (str[i] <='9'))
    {
        result = result * 10;
        result = result + str[i] - '0';
        i++;
    }
    if (n==1)
            return (-result);
    else
            retrun(result);
}