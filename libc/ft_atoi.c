/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:18:50 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 12:35:01 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_isdigit(int c);

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
	// TODO: Check for negative numbers
	result = 0;
	num_digits = 0;
	i = 0;
	while (!ft_isdigit(str[i]))
	{
		i++;
		printf("Skipped a character thats not a digit\n");
	}
	while (ft_isdigit(str[i]))
	{
		printf("Counted a digit[%c]: %d\n", str[i],num_digits);
		i++;
		num_digits++;
	}
	i -= num_digits;
	while (str[i] && ft_isdigit(str[i]))
	{
		result += ((str[i]) - '0') * ft_power(10, num_digits-- -1);
		i++;
	}
	return (result);
}

int main(void)
{
	char test_string[] = "asdf625as";
	int power = ft_atoi(test_string);
	printf("Result: %d\n", power);
}

