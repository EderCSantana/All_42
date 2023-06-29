/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 01:00:12 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 18:54:32 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a recursive function that returns the factorial of
// the number given as a
// parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// int ft_recursive_factorial(int nb);

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
// int        main(void)
// {
// printf("%i", ft_recursive_factorial(9));
// }
