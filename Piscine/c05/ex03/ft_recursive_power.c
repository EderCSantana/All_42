/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 01:04:06 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 18:58:04 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a recursive function that returns the value of
// a power applied to a number.
// • A power lower than 0 returns 0.
// • Overflows must not be handled, the function return will be undefined.
// • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
// int ft_recursive_power(int nb, int power);

// #include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
// int        main(void)
// {
// printf("%i", ft_recursive_power(5, 1));
// }
