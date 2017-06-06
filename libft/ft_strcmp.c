# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 10:03:12 by kcoetzee          #+#    #+#              #
/*   Updated: 2017/05/31 10:08:30 by kcoetzee         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1++ || *s2++)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return(-1);
	}
	return (0);
}
