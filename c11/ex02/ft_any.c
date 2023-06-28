/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:48:29 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:48:29 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function ft_any which will return 1 if, passed to the function f, at least
// one element of the array returns something else than 0. Else, it should return 0.
// • This function will be applied following the array’s order.
// • Here’s how the function should be prototyped :
// int ft_any(char **tab, int(*f)(char*));
// • The array will be delimited with a null pointer

// int        ft_any(char **tab, int (*f)(char*))
// {
// int        i;
// i = 0;
// while (tab[i] != '\0')
// {
// if (f(tab[i]))
// return (1);
// i++;
// }
// return (0);
// }