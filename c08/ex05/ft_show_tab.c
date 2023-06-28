/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:44:01 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:44:01 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays the content of the array created by the previous
// function.
// • Here’s how it should be prototyped:
// void ft_show_tab(struct s_stock_str *par);
// • The structure will be the same as the previous exercise and will be defined in the
// ft_stock_str.h file
// • For each element, we’ll display:
// ◦ the string followed by a ’\n’
// ◦ the size followed by a ’\n’
// ◦ the copy of the string (that could have been modified) followed by a ’\n’
// • We’ll test your function with our ft_strs_to_tab (previous exercise). Make it
// work according to this !

// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H
// typedef struct s_stock_str
// {
// int                        size;
// char                *str;
// char                *copy;
// }                                t_stock_str;
// #endif


// #include <unistd.h>
// #include "ft_stock_str.h"
// void        ft_putchar(char c)
// {
// write(1, &c, 1);
// }
// void        ft_putstr(char *str)
// {
// while (*str)
// {
// write(1, str, 1);
// str++;
// }
// }
// void        ft_putnbr(int nb)
// {
// if (nb == -2147483648)
// {
// ft_putchar('-');
// ft_putchar('2');
// ft_putnbr(147483648);
// }
// else if (nb < 0)
// {
// ft_putchar('-');
// nb = -nb;
// ft_putnbr(nb);
// }
// else if (nb > 9)
// {
// ft_putnbr(nb / 10);
// ft_putnbr(nb % 10);
// }
// else
// ft_putchar(nb + 48);
// }
// void        ft_show_tab(struct s_stock_str *par)
// {
// int        index;
// index = 0;
// while (par[index].str != 0)
// {
// ft_putstr(par[index].str);
// ft_putstr("\n");
// ft_putnbr(par[index].size);
// ft_putstr("\n");
// ft_putstr(par[index].copy);
// ft_putstr("\n");
// index++;
// }
// }