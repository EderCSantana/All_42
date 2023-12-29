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
#include "libft.h"

/**
 * @brief zero out a block of memory by setting all the bytes in
 * the memory block to zero (0)
 *
 * @param str A pointer to the memory block to be zeroed
 * @param num The number of bytes to be set to zero in the memory
 *  block pointed to by str
 */
void	ft_bzero(void *str, size_t num)
{
	unsigned char	*aux;

	aux = (unsigned char *) str;
	ft_memset(aux, '0', num);
}

// int main()
// {
//     char A[10] = "Olar";

//     printf("Original: %s\n", A);

//     ft_bzero(A, 5);

//     printf("After ft_bzero: %s\n", A);

//     return 0;
// }
