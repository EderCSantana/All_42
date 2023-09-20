/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:06 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:06 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memcpy(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux;
	unsigned char	*source;

	i = 0;
	aux = (unsigned char *) dest;
	source = (unsigned char *) org;
	while (i < num)
	{
		aux[i] = source[i];
		i++;
	}
}
