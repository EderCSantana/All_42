/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:57:06 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 12:57:06 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief 
 *
 * @param str
 * @param num
 */
void	ft_bzero(void *str, size_t num)
{
	unsigned char	*aux;

	aux = (unsigned char *) str;
	ft_memset(aux, '0', num);
}
