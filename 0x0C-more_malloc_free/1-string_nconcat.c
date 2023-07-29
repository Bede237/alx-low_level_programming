#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;

	p = malloc (sizeof(char *) + n);

	if (p == NULL)
		return (NULL);

	i = concat_s1(p, s1);

	concat_s2(p, s2, n, i);

	return (p);
}

int concat_s1(char *p, char *s1)
{
	int i = 0;

	if (s1 == NULL)
		s1 = '\0';

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	return (i);
}

char *concat_s2(char *p, char *s2, unsigned int n, int i)
{
	int m = 0;
	int j = 0;

	 if (s2 == NULL)
		 s2 = '\0';

	while (s2[m] != '\0')
	{
		m++;
	}

	if (n >= m)
	{
		while (j <= m)
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	else
	{
		while (j < n)
		{
			p[i] = s2[j];
			i++;
			j++;
		}
		p[i] = '\0';
	}	
	
	return (p);
}
