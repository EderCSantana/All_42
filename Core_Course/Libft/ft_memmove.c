/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:09 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:09 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief 
 *
 * @param dest
 * @param org
 * @param num
 */
void	ft_memmove(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux_dest;
	unsigned char	*aux_org;

	i = 0;
	aux_dest = (unsigned char *) dest;
	aux_org = (unsigned char *) org;
	if (aux_dest < aux_org)
	{
		while (i < num)
		{
			aux_dest[i] = aux_org[i];
			i++;
		}
	}
	else
	{
		i = num + 1;
		while (i >= 0)
		{
			aux_dest[i] = aux_org[i];
			i--;
		}
	}
}
