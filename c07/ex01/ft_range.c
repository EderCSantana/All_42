/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:22:11 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:22:11 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_range which returns an array ofints. This int array should
// contain all values between min and max.
// • Min included - max excluded.
// • Here’s how it should be prototyped :
// int *ft_range(int min, int max);

// #include <stdlib.h>
// #include <stdio.h>
// int        *ft_range(int min, int max)
// {
// int                range;
// int                index;
// int                *buffer;
// int                *d;
// if (min >= max)
// return (0);
// range = max - min;
// d = (buffer = malloc(range * sizeof(int)));
// if (!d)
// return (0);
// index = 0;
// while (index < range)
// {
// buffer[index] = min + index;
// index++;
// }
// return (buffer);
// }
// int                main(void)
// {
// int        min;
// int        max;
// int        *tab;
// int        i = 0;
// int        size;
// min = 5;
// max = 10;
// size = max - min;
// tab = ft_range(min, max);
// while(i < size)
// {
// printf("%d, ", tab[i]);
// i++;
// }
// }
