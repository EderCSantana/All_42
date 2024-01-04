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
#include "libft.h"

static void	ft_jumper(int *num, const char *str)
{
	while ((str[*num] >= 9 && str[*num] <= 13) || str[*num] == ' ')
		(*num)++;
}

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
int	ft_atoi(const char *str)
{
	long	n;
	int		i;
	int		neg;

	i = 0;
	n = 0;
	neg = 1;
	ft_jumper(&i, str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
		if (n > 2147483647 && neg == 1)
			return (-1);
		if (n > 2147483648 && neg == -1)
			return (0);
	}
	return (neg * (int)n);
}
// int main()
// {
// 	char *s = "      	---+--+2147--+-ab567";
// 	int bla = ft_atoi(s);

// 	printf("%d", bla);
// 	return (0);
// }
