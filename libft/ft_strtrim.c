/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:04:05 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:12:17 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnew(int len);
int ft_strlen(const char *str);

#include <string.h>
char	*ft_strtrim(char const *s)
{
	int num_spaces;
	int i;
	int len;
	char *new_string;

	len = ft_strlen(s);
	i = 0;
	num_spaces = 0;
	while (i++ < len - 1)
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			num_spaces++;
	new_string = ft_strnew(len - num_spaces);
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			*new_string++ = *s;
		s++;
	}
	return (new_string);
}	
