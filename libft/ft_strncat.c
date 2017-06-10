/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:18:49 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/07 06:34:33 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;
	char *ptr;

	ptr = s1;
	len = ft_strlen(s1);
	while (*s2 && n--)
	{
		s1[len++] = *s2++;
	}
	s1[len] = '\0';
	return (ptr);
}



