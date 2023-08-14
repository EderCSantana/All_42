/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:49:32 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:49:32 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_is_sort which returns 1 if the array is sorted and 0 if it isn’t.
// • The function given as argument should return a negative integer if the first argument
// is lower than the second, 0 if they’re equal or a positive integer for anything else.
// • Here’s how the function should be prototyped :
// int ft_is_sort(int *tab, int length, int(*f)(int, int));

// #include <stdio.h>
// #include <stdlib.h>
// int        ft_is_sort(int *tab, int length, int(*f)(int, int))
// {
// int        i;
// int        sorted;
// i = 0;
// sorted = 1;
// while (i < length - 1 && sorted)
// {
// if ((*f)(tab[i], tab [i + 1]) < 0)
// sorted = 0;
// i++;
// }
// if (sorted != 1)
// {
// sorted = 1;
// i = 0;
// while (i < length - 1)
// {
// if ((*f)(tab[i], tab[i + 1]) > 0)
// return (0);
// i++;
// }
// }
// return (1);
// }
// int        ft_tri(int a, int b)
// {
// return (a - b);
// }
// int        main(void)
// {
// static int    tabx[] = { 7, 6, 6, 6, 5, 5, 3, 2, 2, 1, 1, 0, 0 };
// int            index;
// int            *tab;
// int            length;
// length = 10;
// printf("%d\n", ft_is_sort(tabx, length, &ft_tri));
// }