/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:18:50 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 13:51:22 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int	ft_is_space(const char let)
{
	if (let == ' ' || let == '\t' || let == '\n'
			|| let == '\r' || let == '\f' || let == '\v')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int result;
	int num_digits;
	int i;
	int sign;

	result = 0;
	num_digits = 0;
	i = 0;
	sign = 1;
	while (str[i] && ft_is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (ft_isdigit(str[i])))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
