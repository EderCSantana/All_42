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
// #include <libft.h>

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

int	ft_char_counter(char const *s1, char const c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i] < ft_strlen(s1))
	{
		if (s1[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_isin(char const *set, char const c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char const	*ft_slack(char const *s1, char *s2, char *set, int i)
{
	int		last;
	int		start;

	while (i > 0)
	{
		if (ft_isin(set, s1[i]))
			i--;
		else
		{
			last = i;
			i = 0;
		}
	}
	while (i < last)
		i++;
	start = i;
	i = 0;
	while (i < last)
	{
		s2[i] = s1[i + start];
		i++;
	}
	s2[i] = '\0';
	return (s2);
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
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*s2;
	// int last;
	// int	start;

	i = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	s2 = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	// while (i > 0)
	// {
	// 	if (ft_isin(set, s1[i]))
	// 		i--;
	// 	else
	// 	{
	// 		last = i;
	// 		i = 0;
	// 	}
	// }
	s2 = ft_slack(s1, s2, set, i);
	return (*s2);
}

int main()
{
	char*	string;
	char*	set;
	char*	result;

	string = "hello, world!";
	set = "h!";
	result = ft_strtrim(string, set);
	printf("final string: %s", result);
}
