/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:32:52 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:32:52 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief used to allocate and initialize a block of memory
 *  for an array of elements
 * 
 * @param num_elements The number of elements to allocate space 
 * for in the array
 * @param element_size The size (in bytes) of each individual 
 * element in the array
 * @return void* Non-null pointer: If memory allocation is successful, 
 * the function returns a pointer to the start of the allocated memory block.
 * NULL (null pointer): If memory allocation fails
 */
void *ft_calloc(size_t num_elements, size_t element_size)
{
    int i;

    i = 0;
}