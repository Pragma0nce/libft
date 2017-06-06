/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:59:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 09:35:58 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(const char *c);

char	*ft_strstr(const char *big, const char *little)
{
	int len_needle;
	int i;

	len_needle = ft_strlen(little)-1;
	i = 0;
	if (*little == '\0')
		return (big);
	while (*big++)
	{
		while (i < len_needle)
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
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	char stack[] = "This is a very big haystack";
	char needle[] = "\0";
	printf("%s\n", ft_strstr(stack, needle));
}
