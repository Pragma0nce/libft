/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:25:35 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 08:37:47 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *s, int c)
{
	char to_find;
	const char *result;

	
	to_find = (char)c;
	while (*s)
	{
		if (*s++ == to_find)
		{
			return (--s);
		}
	}
	if (
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char test[] = "this is mah swamp";
	printf("%s\n", ft_strchr(test, '\0'));
}
