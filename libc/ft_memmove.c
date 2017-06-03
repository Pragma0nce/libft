/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:13:27 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/29 14:29:50 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;
	char *temp;
	int i;

	i = 0;
	temp = (char*)malloc(sizeof(char*) * (len+1));
	dest = (char*)dst;
	source = (char*)src;
	while (i++ < len-1)
		temp[i] = source[i];
	i = 0;
	while (i++ < len-1)
	{
		dest[i] = temp[i];
	}
	return (dst);
}
#include <stdio.h>
int	main(void)
{
	char source[] = "test";
	char dest[] = "This is mah swamp!";
	ft_memmove(dest, source, 3);
	printf("%s\n", dest);

}
