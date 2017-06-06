/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:30:12 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/06 12:58:48 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char find;
	unsigned char *str;

	find = (unsigned char)c;
	str = (unsigned char*)s;
	while (n--)
	{
		if (*str++ == find)
			return (--str);
	}
	return (NULL);
}
