#include <string.h>
#include <stdlib.h>

char    *ft_strnew(int len);
int	ft_strlen(const char *str);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *result;

    i = 0;
    result = ft_strnew(ft_strlen(s));
    if (!s)
		return (NULL);
	if (!result)
        return (NULL);
    while (*(s + i))
    {
        *(result + i) = f(i, *(s + i));
        i++;
	}
	return(result);
}
