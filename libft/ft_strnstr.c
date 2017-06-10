/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:59:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/09 15:44:04 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(const char *c);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	int has_found;

	i = 0;
	j = 0;
	has_found = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (big[i] && !has_found && i < len)
	{
		while (little[j] && j < len && i < len)
		{
			if (little[j] == big[i])
			{
				j++;
				i++;
				if (little[j] == '\0')
				{
					has_found = 1;
					return ((char*)(&big[i-j]));
				}
			}
			else
				break;
		}
		i -= j;
		j = 0;
		i++;
	}
	return (NULL);
}
