/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:59:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 14:32:19 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		has_found;

	i = -1;
	has_found = 1;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (big[++i] && i < len)
	{
		j = 0;
		if (big[i] == *little)
		{
			k = i;
			has_found = 1;
			while (big[k] && little[j] && j < len && k < len)
				if (big[k++] != little[j++])
					has_found = 0;
			if (has_found && !little[j])
				return ((char *)big + i);
		}
	}
	return (NULL);
}
