/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_explode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:38:59 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 14:30:48 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (TRUE);
	return (FALSE);
}

int	count_words(char *str)
{
	int	i;
	int	j;
	int	c_wrd;

	i = 0;
	j = 0;
	c_wrd = 0;
	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		j = 0;
		while (!is_space(str[i]) && str[i])
		{
			if (j == 0)
				c_wrd++;
			j++;
			i++;
		}
	}
	return (c_wrd);
}

char	*ft_cpy_wrd(char *str)
{
	int		i;
	int		len;
	char	*wrd;

	i = 0;
	len = 0;
	while (!is_space(str[len]) && str[len])
		len++;
	wrd = malloc(sizeof(char) * len + 1);
	if (!wrd)
		return (NULL);
	while (i < len)
	{
		wrd[i] = str[i];
		i++;
	}
	wrd[i] = '\0';
	return (wrd);
}

char	**ft_explode(char *str)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * count_words(str) + 1);
	if (!arr)
		return (NULL);
	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		if (str[i])
		{
			arr[j] = ft_cpy_wrd(&str[i]);
			j++;
			while (!is_space(str[i]) && str[i])
				i++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

int	main(int ac, char **av)
{
	char	**arr;

	if (ac != 2)
		return (0);
	arr = ft_explode(av[1]);
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	// Print all words in the array
	for (int i = 0; arr[i] != NULL; i++)
	{
		printf("Word %d: %s\n", i, arr[i]);
		free(arr[i]); // Don't forget to free each word
	}
	free(arr); // Free the array itself
	return (0);
}
