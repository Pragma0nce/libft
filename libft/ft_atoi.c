/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:18:50 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/10 02:10:01 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c);
static	int ft_is_space(const char let)
{
	if (let == ' ' || let == '\t' || let == '\n' || let =='\r' || let == '\f' || let == '\v')
		return (1);
	else
		return (0);
}
static	int ft_power(int base, int power)
{
	int result;

	result = 1;
	while (power-- > 0)
	{
		result = result * base;
	}	
	return (result);
}
int	ft_atoi(const char *str)
{
	int result;
	int num_digits;
	int i;
	int sign;
	result = 0;
	num_digits = 0;
	i = 0;
	sign = 1;
	while (str[i] && !ft_isdigit(str[i]))
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		i++;
		num_digits++;
	}
	i -= num_digits;
	if (str[i-1] == '-')
		sign = -1; 
	while (str[i] && (ft_isdigit(str[i]) || ft_is_space(str[i])))
	{
		result += ((str[i]) - '0') * ft_power(10, num_digits-- -1);
		i++;
	}
	return (result * sign);
}

int main(void)
{
	char test[] = "\e06050";
	int result = ft_atoi(test);
	printf("%d\n", result);
}
