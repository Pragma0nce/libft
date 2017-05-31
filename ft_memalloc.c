/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:23:36 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 13:40:59 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *memory;
	memory = malloc(size);
	if (memory == NULL)
		return (NULL);
	bzero(memory, size);
	return (memory);
}

#include <stdio.h>
int main(void)
{
	//int *ptr = (int*)ft_memalloc(1);
	int *ptr = (int*)malloc(20);
	*ptr = 1000000;
	printf("%d\n", sizeof(*ptr));
	return (0);
}
