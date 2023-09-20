/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:20 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:20 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t num)
{
	int				i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *) ptr;
	while (i <= num)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}