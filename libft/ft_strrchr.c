/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:47:40 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:35:47 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

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
