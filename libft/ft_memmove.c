/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:13:27 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/09 17:01:04 by kcoetzee         ###   ########.fr       */
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
		{
			//printf("DEST <= SOURCE\n");
			// Dest won't interfere with source so do a blind copy
			*dest++ = *source++;
		}
		else if (source <= dest)
		{
			//printf("SOURCE <= DEST\n");
			*(dest+len) = *(source+len);
		}
	}
	return (dest);
}
/*
int main(void)
{
	char test[] = "This is a big house";
	char *source = test+1;
	char *dest = test;
	ft_memmove(dest, source, 4);
}*/

