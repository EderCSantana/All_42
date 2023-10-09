/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:00 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:00 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

/**
 * @brief convert a string representation of an integer to an actual int value
 *
 * @param str A pointer to the null-terminated string that you want to convert
 *  to an integer. This string should contain digits,
 * possibly a sign (+ or -), and optional leading white space characters
 *  (spaces, tabs, newline).
 * @return int Converted integer or zero (0): If the string does not contain
 *  a valid integer representation
 */
int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	result;

	a = 0;
	b = 1;
	result = 0;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = (str[a] - '0') + (result * 10);
		a++;
	}
	return (result * b);
}
// int main()
// {
// 	char *s = "      	---+--+2147--+-ab567";
// 	int bla = ft_atoi(s);

// 	printf("%d", bla);
// 	return (0);
// }
