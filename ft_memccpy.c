/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 10:57:02 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 12:27:12 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char i;
	char *dest;
	char *source;

	dest = (char*)dst;
	source = (char*)src;
	i = c;
	while (n--)
	{
		if (i == *source)
		{
			*dest = *source;
			return (dest);
		}
		else
		{
			*dest++ = *source++;
		}
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	char dest[] = "This is a string";
	char src[] = "Dog city is big city";
	
	ft_memccpy(dest, src, 'o', 3);
	printf("%s\n", dest);
}
