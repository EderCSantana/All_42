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
	int	j;
	char	*s2;

	i = 0;
	if (!s1)
	return (NULL);
	s2 = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
	while (s1[i] != '\0')
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
			{
				j++;
			}
			else
			s2[i] = s1[i];
		}
		i++;
	}
	return (s2);
}

int main()
{
	char*	string;
	char*	set;
	char*	result;

	string = "hello, world!";
	set = "ol";
	result = ft_strtrim(string, set);
	printf("final string: %s", result);
}
