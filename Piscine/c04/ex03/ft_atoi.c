/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:57:10 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/29 07:33:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that converts the initial portion of
// the string pointed by str to its int
// representation
// • The string can start with an arbitray amount of white space
// (as determined by isspace(3))
// • The string can be followed by an arbitrary amount of + and - signs,
// - sign will change
// the sign of the int returned based on the number of - is odd or even.
// • Finally the string can be followed by any numbers of the base 10.
// • Your function should read the string until the string stop following
// the rules and return
// the number found until now.
// • You should not take care of overflow or underflow.
// result can be undefined in that case.
// • Here’s an example of a program that prints the atoi return value:
// $>./a.out " ---+--+1234ab567"
// -1234
// • Here’s how it should be prototyped :
// int ft_atoi(char *str);

#include <stdio.h>

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
