/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:37:21 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/06 11:41:43 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    char *str;

    str = (char *)s;
    while (n--)
    {
        *str++ = '\0';
    }
}
