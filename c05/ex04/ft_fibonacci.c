/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 01:04:43 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 01:04:43 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_fibonacci that returns the n-th element of the Fibonacci
// sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
// sequence starts like this: 0, 1, 1, 2.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// int ft_fibonacci(int index);
// • Obviously, ft_fibonacci has to be recursive.
// • If the index is less than 0, the function should return -1

// #include <stdio.h>
// int        ft_fibonacci(int index)
// {
// if (index < 0)
// return (-1);
// if (index < 2)
// return (index);
// return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
// }
// int        main(void)
// {
// printf("%i", ft_fibonacci(7));
// }