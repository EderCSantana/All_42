/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:42:07 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 14:28:13 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strcmp (man strcmp).
// (returns 0 if they are equal, and another number if different,
// according to which one is 1st)
// • Here’s how it should be prototyped :
// int ft_strcmp(char *s1, char *s2);

// #include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// int        main()
// {
// printf("%d", ft_strcmp("Batata", "Batata1"));
// printf("\n%d", ft_strcmp("Batata", "Ba"));
// printf("\n%d", ft_strcmp("Ba", "Batata"));
// printf("\n%d", ft_strcmp("Batata", "Batata"));
// }
