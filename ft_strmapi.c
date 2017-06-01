#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char));

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *result;
    int i;

    i = 0;
    result = ft_strnew(ft_strlen(s));
    if (!result)
        return (NULL);
    while (*s)
    {
        *result = f(i, *s);
        s++;
        result++;
        i++;
    }
    
}
