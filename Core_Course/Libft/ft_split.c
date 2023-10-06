/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:35 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:35 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	count;
	char** matrix;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	matrix = malloc(count * sizeof(char *));
	i = 0;
	while (i < count)
	{
		matrix[i] = malloc(i * sizeof(char));
		i++;
	}

	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[j] != c)
		{
			matrix[i][j] = s[i];
			j++;
		}
		if (s[i] == c)
			i++;
		i++;
	}

}
