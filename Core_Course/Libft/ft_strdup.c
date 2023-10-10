/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:40 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:40 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>
/**
 * @brief Allocates a block of memory with same size as the parameter,
 * copy it there and returns a pointer to the duplicated
 *
 * @param str A pointer to the string to be duplicated
 * @return char* A pointer to a newly allocated string that is a
 *  duplicate of the string pointed to by str.
 *  If the allocation fails, returns NULL
 */
char *ft_strdup(const char *str)
{
	int	i;
	char* dup;

	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(i * sizeof(char));
	dup = str;
	return &dup;
}
