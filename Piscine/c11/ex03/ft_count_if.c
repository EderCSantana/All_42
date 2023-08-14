/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:48:52 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:48:52 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_count_if which will return the number of elements of the
// array that return does not return 0 when passed to the function f.
// • This function will be applied following the array’s order.
// • Here’s how the function should be prototyped :
// int ft_count_if(char **tab, int length, int(*f)(char*));

// int        ft_count_if(char **tab, int length, int (*f)(char*))
// {
// int        i;
// int        count;
// count = 0;
// i = 0;
// while (i < length)
// {
// if ((*f)(tab[i]))
// count++;
// i++;
// }
// return (count);
// }