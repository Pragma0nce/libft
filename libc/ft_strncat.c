/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:18:49 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 15:30:52 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

char *ft_strcpy(char *s1, const char *s2, size_t n)
{
	int len;

	len = ft_strlen(s1);
	while (*s2 && n--)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
}



