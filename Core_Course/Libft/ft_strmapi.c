/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:04 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:04 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * @brief Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character
 * @return char* The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int	i;
	char* result;

	i = 0;
	result = malloc(ft_strlen(*s) * sizeof(char));
}
