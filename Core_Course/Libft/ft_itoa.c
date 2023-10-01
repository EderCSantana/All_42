/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:13 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:13 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_deccount(int n)
{
    int count;

	if (n == INT_MIN)
    {
        return (11);
    }
    count = 1;
	if (n < 0)
	{
		n /= -1;
		count++;
	}
    if (n/10 == 0)
    {
        return (count);
    }
	else
	{
		while (n/10)
        {
            n /=10;
            count++;
        }
	}
    return count;
}
/**
 * @brief Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
 *
 * @param n the integer to convert.
 * @return char* The string representing the integer.
NULL if the allocation fails.
 */
char *ft_itoa(int n)
{
    int i;
    int sign;
    int size;
    char *str;

    size = ft_deccount(n);
    sign = 1;
    if (n < 0)
    {
        sign = -1;
    }
    str = malloc((size + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
	if (sign == -1)
	{
		str[0] = '-';
	    n *= sign;
	}
	i = 0;
    while (n != 0)
    {
        str[size - i - 1] = n % 10 + '0';
        n /= 10;
        i++;
    }
    str[size] ='\0';
    printf("o tamanho é: %d", size);
    return (str);
}

int main()
{
    int test_values[] = {123, -456, 7890, 0, -987654321, -1};

    for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        int num = test_values[i];
        char *result = ft_itoa(num);

        if (result != NULL)
        {
            printf("Integer: %d, String: %s\n", num, result);
            free(result); // Don't forget to free the allocated memory
        }
        else
        {
            printf("Memory allocation failed for integer: %d\n", num);
        }
    }

    return 0;
}
