/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:14 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:14 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

/**
 * @brief Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 *
 * @param s1 The string to be trimmed
 * @param set The reference set of characters to trim
 * @return char* The trimmed string.
NULL if the allocation fails
 */
char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*s2;
	size_t last;

	i = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	s2 = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return NULL;
	while (i)
	{

	}
	s2[i] = '\0';
	return (s2);
}

// int main()
// {
// 	char*	string;
// 	char*	set;
// 	char*	result;

// 	string = "hello, world!";
// 	set = "ol";
// 	result = ft_strtrim(string, set);
// 	printf("final string: %s", result);
// }
