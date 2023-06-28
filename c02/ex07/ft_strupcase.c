/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:38:34 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:38:34 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that transforms every letter to uppercase.
// • Here’s how it should be prototyped :
// char *ft_strupcase(char *str);

// #include <stdio.h>
char        *ft_strupcase(char *str)
{
int        i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; //charaters upper are 32 positions lower
}
i++;
}
return (str);
}
// int        main()
// {
// char str[] = "abc";
// printf("%s", ft_strupcase(str));
// }

