/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:03:13 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 15:24:58 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strcpy(char *dst, const char *src)
{
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = *src;
	return (dst);
}
