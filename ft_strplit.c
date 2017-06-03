/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:54:02 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/02 14:47:10 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int num_delims;
	char *new_string;

	num_delims = ft_strcount(s, c);
	new_string = ft_newstr(ft_strlen(s) - num_delims);
}
