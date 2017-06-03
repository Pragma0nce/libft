/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 11:57:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/02 12:03:54 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int len;
	char *join;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_newstr(len);
	if (join == NULL)
		return (NULL);
	while (*s1)
		*join++ = *s1++;
	while (*s2)
		*join++ = *s2++;
	return (join);
}
