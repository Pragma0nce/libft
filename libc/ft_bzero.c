/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 10:44:37 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 10:49:11 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	bzero(void *s, size_t n)
{
	char *str;

	str = (char *)s;
	while (n--)
	{
		*str++ = '\0';
	}
}

#include <stdio.h>
int main(void)
{
	char test[] = "This is mah swamp";
	bzero(test,5);
	printf("%s\n", test);
}
