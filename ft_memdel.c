/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:41:12 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/05/31 13:56:11 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void    ft_memdel(void **ap)
{
    // **ap is the actual value
    // *ap is the adress of a pointer
    // ap points to the address of the value
    if (ap && *ap)
    {
        free(*ap);
        *ap = NULL;
    }
}
