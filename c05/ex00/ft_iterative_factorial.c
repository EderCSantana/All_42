/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:59:25 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:59:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create an iterated function that returns a number. This number is the result of a
// factorial operation based on the number given as a parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// int ft_iterative_factorial(int nb);

// #include <stdio.h>
// int        ft_iterative_factorial(int        nb)
// {
// unsigned int        result;
// result = 1;
// while (nb > 0)
// {
// result *= nb;
// nb--;
// }
// if (nb < 0)
// {
// return (0);
// }
// return (result);
// }
// int main (void)
// {
// printf("%i", ft_iterative_factorial(3));
// }