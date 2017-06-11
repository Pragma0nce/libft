/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:08:46 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/02 12:21:31 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Count how many times a substring appears in a string
 *
*/

int	*ft_strcount(const char *string, const char *to_find)
{
	int i;
	int len;
	int count;
	
	len = ft_strlen(to_find);
	i = 0;
	count = 0;
	while (*string)
	{
		while (i < (len-1))
		{
			if (to_find[i] == string[i])
				i++;
			else
			{
				i = 0;
				break;
			}
		}
		if (i == len_needle)
			count++;
	}
	return (count);
}
