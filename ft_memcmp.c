/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:40:50 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 14:48:27 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n--)
	{
		if (str1 != str2)
			return (*str1 - *str2);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char one[] = "dog";
	char two[] = "cat";
	int result = ft_memcmp(one,two,3);
	printf("Result: %d\n", result);
}
