/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:59:17 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/09 15:17:12 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(const char *c);

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int has_found;

	i = 0;
	j = 0;
	has_found = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (big[i] && !has_found)
	{
		while (little[j])
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
