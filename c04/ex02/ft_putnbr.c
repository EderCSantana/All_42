/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:54:11 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:54:11 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that displays the number entered as a parameter. The function
// has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
// void ft_putnbr(int nb);

#include <unistd.h>
void        ft_putchar(char c)
{
write(1, &c, 1);
}
void        ft_putnbr(int nb)
{
if (nb == -2147483648) //min number in int
{
ft_putchar('-');
ft_putchar('2');
ft_putnbr(147483648);
}
else if (nb < 0)
{
ft_putchar('-'); //converts to positive and prints -
nb = -nb;
ft_putnbr(nb);
}
else if (nb > 9)
{
ft_putnbr(nb / 10); //here the recursion takes the positions of the number
ft_putnbr(nb % 10);
}
else
ft_putchar(nb + 48); //here the value is printed
}
// int main (void)
// {
// 	ft_putnbr(-436);
// }