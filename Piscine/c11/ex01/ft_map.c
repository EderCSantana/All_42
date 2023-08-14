/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:47:42 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:47:42 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create the function ft_map which, for a given ints array, applies a function on all
// elements of the array (in order) and returns a array of all the return values.
// • This function will be applied following the array’s order.
// • Here’s how the function should be prototyped :
// int *ft_map(int *tab, int length, int(*f)(int));

// #include <stdlib.h>
// int        *ft_map(int *tab, int length, int (*f)(int))
// {
// int        i;
// int        *res;
// int        *d;
// d = (res = malloc(length * sizeof(int)));
// if (!d)
// return (0);
// i = 0;
// while (i < length)
// {
// res[i] = (*f)(tab[i]);
// i++;
// }
// return (res);
// }