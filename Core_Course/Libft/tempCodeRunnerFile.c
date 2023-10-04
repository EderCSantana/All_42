#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void ft_tester(unsigned int i, char *s)
{
	s[i] = ft_toupper(s[i]);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * @brief Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i,s);
	}
}

int main()
{
	char s[] = "hello, world!";

	printf("before: %s\n", s);
	ft_striteri(s, ft_tester);
	printf("after: %s\n", s);
	return 0;
}