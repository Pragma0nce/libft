/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:54:41 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 15:02:28 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

char *strdup(const char *s1)
{
	int len;
	char *result;

	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len+1));
	if (result == 0)
		return (NULL);
	while (*s1)
	{
		*result++ = *s1++;
	}
	return (result);
}
