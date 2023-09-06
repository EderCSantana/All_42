/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:20:34 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/22 09:20:34 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ' || c == '\x7f');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *ptr, int c, size_t num)
{
	int				i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *) ptr;
	while (i <= num)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void *str, size_t num)
{
	unsigned char	*aux;

	aux = (unsigned char *) str;
	ft_memset(aux, '0', num);
}

int	main(void)
{
	char	*c;
	char	d[10];
	char	dest[20];

	c = "batata";
	ft_memset(d, 'A', sizeof(d) - 1);
	printf("the value is %s \n", d);
	printf("the value is %s %d\n", c, ft_strlen(c));
	ft_bzero(d, 3);
	printf("the value is %s\n", d);
	ft_memcpy(dest, d, 10);
	printf("the valur is %s\n", dest);
	return (0);
}
