/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:11:12 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 15:18:26 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

char *ft_strcat(char *s1, const char *s2)
{
	int len;

	len = ft_strlen(s1);
	while (*s2)
	{
		s1[len++] = *s2++;
	}
	s1[len] = '\0';
	return (s1);
}

#include <stdio.h>
int main(void)
{
	char dest[100] = "This should work ";
	char add[] = "perfectly!";
	printf("%s\n", ft_strcat(dest, add));
}
