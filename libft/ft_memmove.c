/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:13:27 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:23:24 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	dest = (char*)dst;
	source = (char*)src;
	if (dest == source)
		return (dest);
	while (len--)
	{
		if (dest < source)
			*dest++ = *source++;
		else if (source <= dest)
			*(dest + len) = *(source + len);
	}
	return (dest);
}
