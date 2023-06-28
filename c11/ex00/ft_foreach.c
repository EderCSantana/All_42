/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:47:16 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:47:16 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create the function ft_foreach which, for a given ints array, applies a function on
// all elements of the array. This function will be applied following the array’s order.
// • Here’s how the function should be prototyped :
// void ft_foreach(int *tab, int length, void(*f)(int));
// • For example, the function ft_foreach could be called as follows in order to display
// all ints of the array :
// ft_foreach(tab, 1337, &ft_putnbr);

// void        ft_foreach(int *tab, int length, void (*f)(int))
// {
// int        i;
// i = 0;
// while (i < length)
// {
// f(tab[i]);
// i++;
// }
// }