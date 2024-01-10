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
#include "libft.h"

static size_t	ft_cut_number(const char *s, char c);
static size_t	ft_strsize(const char *s, char c);

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
char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**matrix;

	if (!s)
		return (NULL);
	i = 0;
	matrix = malloc((ft_cut_number(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			matrix[i] = ft_substr(s, 0, ft_strsize(s, c));
			if (!matrix[i])
				return (NULL);
			s += ft_strsize(s, c);
			i++;
		}
		else
			s++;
	}
	matrix[i] = NULL;
	return (matrix);
}

static size_t	ft_cut_number(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 1;
	count = 0;
	while (*s)
	{
		if (*s == c)
			i = 1;
		else if (i == 1)
		{
			i = 0;
			count ++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_strsize(const char *s, char c)
{
	size_t	count;

	count = 0;
	while ((s[count] != '\0') && s[count] != c)
		count++;
	return (count);
}



// static	size_t	ft_count(char const *string, char c);
// static size_t	ft_wordlen(char const *string, char c);

// char	**ft_split(char const *s, char c)
// {
// 	char	**array;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	array = malloc((ft_count(s, c) + 1) * sizeof(char *));
// 	if (!array)
// 		return (NULL);
// 	while (*s)
// 	{
// 		if (*s != c)
// 		{
// 			array[i] = ft_substr(s, 0, ft_wordlen(s, c));
// 			if (!array[i])
// 				return (NULL);
// 			s += ft_wordlen(s, c);
// 			i++;
// 		}
// 		else
// 			s++;
// 	}
// 	array[i] = NULL;
// 	return (array);
// }

// static	size_t	ft_count(char const *string, char c)
// {
// 	size_t	check;
// 	size_t	number_of_words;

// 	check = 1;
// 	number_of_words = 0;
// 	while (*string)
// 	{
// 		if (*string == c)
// 			check = 1;
// 		else if (check == 1)
// 		{
// 			check = 0;
// 			number_of_words++;
// 		}
// 		string++;
// 	}
// 	return (number_of_words);
// }

// static size_t	ft_wordlen(char const *string, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while ((string[i] != '\0') && string[i] != c)
// 	{
// 		i++;
// 	}
// 	return (i);
// }
