/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:43:12 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:43:12 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that takes an array of string as argument and the size of this
// array.
// • Here’s how it should be prototyped:
// struct s_stock_str *ft_strs_to_tab(int ac, char **av);
// • It will transform each element of av into a structure.
// • The structure will be defined in the ft_stock_str.h file that we will provided, like
// this:
// typedef struct s_stock_str
// {
// int size;
// char *str;
// char *copy;
// } t_stock_str;
// ◦ size being the length of the string;
// ◦ str being the string;
// ◦ copy being a copy of the string;
// • It should keep the order of av.
// 10
// C Piscine C 08
// • The returned array should allocated in memory and its last element’s str set to 0,
// this will mark the end of the array.
// • It should return a NULL pointer if an error occurs.
// • We’ll test your function with our ft_show_tab (next exercise). Make it work according to this !


// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H
// typedef struct s_stock_str
// {
// int                        size;
// char                *str;
// char                *copy;
// }                                t_stock_str;
// #endif