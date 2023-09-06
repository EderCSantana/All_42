/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:24:47 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/25 09:24:47 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	else
		return (c);
}

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' || s[i] != c)
	{
		i++;
	}
	return (&s[i]);
}

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0 || s[i] != c)
	{
		i--;
	}
	return (&s[i]);
}



int main(void)
{

}
