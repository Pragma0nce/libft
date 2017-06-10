/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:47:40 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/09 14:22:22 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
	}
	return (NULL);
}
