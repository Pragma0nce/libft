/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:30:12 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 14:40:22 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char find = c;
	char *str;

	str = (char*)s;
	while (n--)
	{
		if (*str++ == find)
			return (--str);
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char test[] = "This is mah swamp";
	char *ptr = (char*)ft_memchr(test, 'h', 10);
	printf("%s\n", ptr);
}
