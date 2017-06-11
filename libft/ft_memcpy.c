/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 10:49:32 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:18:43 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *destination;
	char *source;

	destination = (char *)dst;
	source = (char*)src;
	while (n--)
	{
		*destination++ = *source++;
	}
	return (dst);
}
