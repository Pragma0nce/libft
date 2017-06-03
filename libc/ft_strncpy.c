/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:05:41 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 15:10:56 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < len - 1 && str[i])
	{
		dst[i] = src[i];
		i++:
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}	
	return (dst);
}

