/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 11:51:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/02 11:57:11 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_string;

	new_string = ft_newstr(len);
	if (new_string == NULL)
		return (NULL);
	while (*s)
	{
		*new_string++ = *s++;
	}
	return (new_string);
}
