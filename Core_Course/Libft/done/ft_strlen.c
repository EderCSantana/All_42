/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:11 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:11 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief The strlen function calculates the length of the string str
 *
 * @param str A pointer to the string to be measured
 * @return int The length of the string, not including the 
 * terminating null character.
 */
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
