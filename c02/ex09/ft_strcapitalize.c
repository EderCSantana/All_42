/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:40:16 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:40:16 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that capitalizes the first letter of each word and transforms all
// other letters to lowercase.
// • A word is a string of alphanumeric characters.
// • Here’s how it should be prototyped :
// char *ft_strcapitalize(char *str);
// • It should return str.

// #include <stdio.h>
// char        *ft_strlowcase(char *str)
// {
// int        i;
// i = 0;
// while (str[i] != '\0')
// {
// if (str[i] >= 'A' && str[i] <= 'Z')
// str[i] += 32;
// i++;
// }
// return (str);
// }
// char        *ft_strcapitalize(char *str)
// {
// int                i;
// int                i1;
// i = 0;
// i1 = 1;
// ft_strlowcase(str);
// while (str[i] != '\0')
// {
// if (str[i] >= 'a' && str[i] <= 'z')
// {
// if (i1 == 1)
// str[i] -= 32;
// i1 = 0;
// }
// else if (str[i] >= '0' && str[i] <= '9')
// i1 = 0;
// else
// i1 = 1;
// i++;
// }
// return (str);
// }
// int        main()
// {
// char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
// printf("%s", ft_strcapitalize(str));
// printf("\n%s", ft_strcapitalize(str1));
// }