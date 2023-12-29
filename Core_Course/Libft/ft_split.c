/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:35 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:35 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_cut_number(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count ++;
			i++;
		}
	}
	return (count);
}

static size_t	ft_strs(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = malloc((ft_cut_number(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			matrix[i] = ft_substr(s, i - ft_strs(s, c), ft_strs(s, c));
			if (!matrix[i])
				return (0);
			i++;
		}
		else
			i++;
	}
	matrix[i] = '\0';
	return (matrix);
}

// void imprimir_matriz_char(char **matriz)
// {
// 	int linhas = 0;
// 	int colunas = 0;

//   // Encontre o número de linhas e colunas da matriz
// 	for (int i = 0; matriz[i] != NULL; i++) {
//     linhas++;
//     colunas = ft_strlen(matriz[i]);
// 	}

//   // Imprima a matriz
// 	for (int i = 0; i < linhas; i++) {
//     for (int j = 0; j < colunas; j++) {
// 	printf("%c ", matriz[i][j]);
//     }
//     printf("\n");
// 	}
// }
// int main()
// {
// 	char* string = "chupa que a cana eh doce meu filho";
// 	char remove = ' ';
// 	char** matriz;

// 	matriz = ft_split(string, remove);
// 	if (matriz == NULL) {
// 		printf("Erro ao alocar memória para a matriz de strings\n");
// 		return 1;
// 	}
// 	imprimir_matriz_char(matriz);
// 	for (int i = 0; matriz[i] != NULL; i++) {
// 		free(matriz[i]);
// 	}
// 	free(matriz);
// 	return 0;
// }
