/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allfunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:58:36 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/25 18:58:36 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char c)
{
	if (c == '\0')
		return (0);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_isdigit(char c)
{
	if (c == '\0')
		return (1);
	return (c >= '0' && c <= '9');
}

int	ft_isascii(char c)
{
	return (c >= ('0' - 48) && c <= ('0' + 79));
}

int	ft_isprint(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ' || c == '\x7f');
}

int	ft_strlen(const char *str)
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

void	ft_memcpy(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux;
	unsigned char	*source;

	i = 0;
	aux = (unsigned char *) dest;
	source = (unsigned char *) org;
	while (i < num)
	{
		aux[i] = source[i];
		i++;
	}
}

void	ft_memmove(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux_dest;
	unsigned char	*aux_org;

	i = 0;
	aux_dest = (unsigned char *) dest;
	aux_org = (unsigned char *) org;
	if (aux_dest < aux_org)
	{
		while (i < num)
		{
			aux_dest[i] = aux_org[i];
			i++;
		}
	}
	else
	{
		i = num + 1;
		while (i >= 0)
		{
			aux_dest[i] = aux_org[i];
			i--;
		}
	}
}

// size_t strlcpy(char *dest, const char *org, size_t num)
// {
// 	int	i;

// 	i = 0;

// }

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
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (char *)&s[i];
}

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
	{
		i--;
	}
	return (char *)&s[i];
}

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
			return(str1[i] == str2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char	d[] = "batata";
	char	dest[] = "Hello World!";
	char	dest2[] = "Hello World!";

	ft_memcpy(dest, d, 10);
	printf("the valur is %s\n", dest);
	ft_memmove(d, dest2, 5);
	printf("the valur is %s\n", d);


	char	*c;

	c = "batata";
	ft_memset(d, 'A', sizeof(d) - 1);
	printf("the value is %s \n", d);
	printf("the value is %s %d\n", c, ft_strlen(c));
	ft_bzero(d, 3);
	printf("the value is %s\n", d);
	ft_memcpy(dest, d, 10);
	printf("the valur is %s\n", dest);

	printf("the value is t_strncmp %d\n", ft_strncmp(dest, dest2, 8));

	return (0);
}
