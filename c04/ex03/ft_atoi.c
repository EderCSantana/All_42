/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:57:10 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:57:10 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that converts the initial portion of the string pointed by str to its int
// representation
// • The string can start with an arbitray amount of white space (as determined by isspace(3))
// • The string can be followed by an arbitrary amount of + and - signs, - sign will change
// the sign of the int returned based on the number of - is odd or even.
// • Finally the string can be followed by any numbers of the base 10.
// • Your function should read the string until the string stop following the rules and return
// the number found until now.
// • You should not take care of overflow or underflow. result can be undefined in that case.
// • Here’s an example of a program that prints the atoi return value:
// $>./a.out " ---+--+1234ab567"
// -1234
// • Here’s how it should be prototyped :
// int ft_atoi(char *str);

// #include <stdio.h>
// int        whitespaces(char *str, int *ptr_i)
// {
// int        count;
// int        i;
// i = 0;
// count = 1;
// while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
// i++;
// while ((str[i] == 43 || str[i] == 45))
// {
// if (str[i] == 45)
// count *= -1;
// i++;
// }
// *ptr_i = i;
// return (count);
// }
// int        ft_atoi(char *str)
// {
// int        sign;
// int        result;
// int        i;
// result = 0;
// sign = whitespaces(str, &i);
// while (str[i] && str[i] >= 48 && str[i] <= 57)
// {
// result *= 10;
// result += str[i] - 48;
// i++;
// }
// result *= sign;
// return (result);
// }
// int main(void)
// {
// char *s = "   ---+--+01234506789ab567";
// printf("%d", ft_atoi(s));
// }