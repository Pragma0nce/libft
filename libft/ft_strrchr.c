/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:47:40 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 08:58:10 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(char *s, int c)
{
	char to_find;
	char *ptr;

	to_find = (char) c;
	*ptr = NULL;
	while (*s)
	{
		if (*s++ == to_find)
			ptr = s;
	}
	if (*s == '\0')
		return (s);
	else
		return (NULL);
}
