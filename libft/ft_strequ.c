/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:50:21 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/11 12:50:26 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2);

int ft_strequ(char const *s1, char const *s2)
{
    if (ft_strcmp(s1,s2) == 0)
        return (1);
    else
        return (0);
}
