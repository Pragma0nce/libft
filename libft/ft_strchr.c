/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:25:35 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/09 13:57:15 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *s, int c)
{
	char to_find;
	//const char *result;

	
	to_find = (char)c;
	while (*s)
	{
		if (*s++ == to_find)
		{
			return (--s);
		}
	}
	if (c == 0 && *s == 0)
		return (s);
	return (NULL);
}
