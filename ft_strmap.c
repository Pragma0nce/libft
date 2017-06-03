#include <string.h>
#include <stdlib.h>
#include <"libc.h">

char    *ft_strmap(char const *s, char (*f)(char))
{
    char *result;

    if (!f)
        return;
    result = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (result == NULL)
        return (NULL);
    while (*s)
    {
        *result = f(*s);
        s++;
        result++;
    }
    return (result);
}
