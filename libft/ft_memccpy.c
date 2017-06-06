/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 10:57:02 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/06 11:56:39 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char i;
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = (unsigned char)c;
	while (n--)
	{
		if (i == *source)
		{
			*dest = *source;
			return (dest+1);
		}
		else
		{
			*dest++ = *source++;
		}
	}

	return (NULL);
}
