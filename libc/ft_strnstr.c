/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:15:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 09:44:08 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(const char *c);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int len_needle;
	int i;
	int j;

	len_needle = ft_strlen(little)-1;
	i = 0;
	j = 0;
	if (*little == '\0')
		return (big);
	while (*big++ && (j + len_needle < len))
	{
		while (i < len_needle )
		{
			if (little[i] == big[i])
			   i++;	
			else
			{
				i = 0;
				break;
			}
		}
		if (i == len_needle)
			return (big);
		j++;	
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	char stack[] = "This is a very big haystack";
	char needle[] = "\0";
	printf("%s\n", ft_strnstr(stack, needle));
}
