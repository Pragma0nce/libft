#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);

char    *ft_strnew(size_t size)
{
    char *str;

    str = (char *)malloc(sizeof(char) * (size+1);
    if (str == NULL)
        return (NULL);
    ft_bzero(str, size + 1);
    return (str);
}
