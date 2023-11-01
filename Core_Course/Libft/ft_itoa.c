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

#include <libft.h>

static char	ft_first(int n, char *s, size_t size)
{
	if (n == 0)
		s[0] = '0';
	else if (size == 1)
		s[0] = '-';
	else
		return (s);
}

static int	ft_counter(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
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
char	*ft_itoa(int n)
{
	int			size;
	char		*s;
	long int	number;

	number = n;
	size = 0;
	if (number < 0)
	{
		number = number * -1;
		size = 1;
	}
	size = size + ft_counter(n);
	s = malloc(size + 1);
	if (s == 0)
		return (0);
	s[size] = '\0';
	while (number > 0)
	{
		s[size - 1] = number % 10 + '\0';
		number = number / 10;
		size--;
	}

}

// int main()
// {
//     int test_values[] = {123, -456, 7890, 0, -987654321, -1};

//     for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
//     {
//         int num = test_values[i];
//         char *result = ft_itoa(num);

//         if (result != NULL)
//         {
//             printf("Integer: %d, String: %s\n", num, result);
//             free(result); // Don't forget to free the allocated memory
//         }
//         else
//         {
//             printf("Memory allocation failed for integer: %d\n", num);
//         }
//     }

//     return 0;
// }
