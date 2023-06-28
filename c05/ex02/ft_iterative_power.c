/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 01:02:45 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 01:02:45 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create an iterated function that returns the value of a power applied to a number.
// • A power lower than 0 returns 0.
// • Overflows must not be handled.
// • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
// int ft_iterative_power(int nb, int power);

// #include <stdio.h>
// int        ft_iterative_power(int nb, int power)
// {
// int        result;
// result = nb;
// while (power > 1)
// {
// result *= nb;
// power--;
// }
// if (power == 0)
// return (1);
// if (power < 0)
// return (0);
// return (result);
// }
// int        main(void)
// {
// printf("%i", ft_iterative_power(3, 4 ));
// }