/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:44:03 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 14:48:07 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strcat (man strcat). (concatenate)
// • Here’s how it should be prototyped :
// char *ft_strcat(char *dest, char *src);

// #include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int        main()
// {
// char src[] = "Batata";
// char dest[] = "duas  ";
// printf("%s", ft_strcat(dest, src));
// }
