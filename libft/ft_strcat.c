/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:11:12 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:32:16 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
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
