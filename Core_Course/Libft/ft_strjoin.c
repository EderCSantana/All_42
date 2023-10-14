/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:46 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:46 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
 *
 * @param s1 The prefix string
 * @param s2  The suffix string
 * @return char* The new string.
 * NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*s3;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(size * sizeof(char));
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		s3[i + j - 1] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

// int main()
// {
// 	char*	s1;
// 	char*	s2;
// 	char*	s3;

// 	s1 = "Hello,";
// 	s2 = " world";
// 	s3 = ft_strjoin(s1, s2);
// 	printf("%s", s3);
// }
