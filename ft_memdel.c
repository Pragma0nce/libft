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

#include <stdlib.c>
void ft_memdel(void **ap)
{
	if (ap == 0|| *ap == 0)
		return ;
	
	// The paramter is a pointers->addres


	free(*ap);
	*ap = 0;
}

