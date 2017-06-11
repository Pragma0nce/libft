#include <string.h>
#include <stdlib.h>

int	ft_strlen(const char *str);
char *ft_strnew(int len);

char    *ft_strmap(char const *s, char (*f)(char))
{
    char *result;
	int i;

    if (!s)
        return (NULL);
    result = ft_strnew(ft_strlen(s));
    if (!result)
        return (NULL);
    i = -1;
	while (*(s + ++i))
        *(result + i) = f(*(s + i));
    return (result);
}
