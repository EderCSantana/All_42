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
#include "libft.h"

/**
 * @brief used to copy a block of memory from a source location
 *  to a destination location, but handles overlapping
 *
 * @param dest pointer to the destination memory location
 * @param org A pointer to the source memory location from
 * @param num he number of bytes to be copied from the source location
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
		while (i < (int)num)
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
