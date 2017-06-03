/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:09:43 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 10:17:57 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1++ || *s2++) && n--)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
	}
	if (n == 0)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (0);
	}
	return (0);
}
