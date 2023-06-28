/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:34:38 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:34:38 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_ultimate_range which allocates and assigns an array of ints.
// This int array should contain all values between min and max.
// • Min included - max excluded.
// • Here’s how it should be prototyped :
// int ft_ultimate_range(int **range, int min, int max);

// #include <stdlib.h>
// #include <stdio.h>
// int        ft_ultimate_range(int **range, int min, int max)
// {
// int                bound;
// int                index;
// int                *buffer;
// int                *d;
// if (min >= max)
// {
// *range = 0;
// return (0);
// }
// bound = max - min;
// d = (buffer = malloc(bound * sizeof(int)));
// if (!d)
// {
// *range = 0;
// return (-1);
// }
// *range = buffer;
// index = 0;
// while (index < bound)
// {
// buffer[index] = min + index;
// index++;
// }
// return (bound);
// }
// int                main(void)
// {
// int        min;
// int        max;
// int        *tab;
// int        size;
// int        i = 0;
// min = 5;
// max = 10;
// size = ft_ultimate_range(&tab, min, max);
// while(i < size)
// {
// printf("%d, ", tab[i]);
// i++;
// }
// }