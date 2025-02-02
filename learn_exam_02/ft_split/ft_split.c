/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:55:56 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 12:07:03 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	charset_str_len(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (charset[i])
	{
		j = 0;
		while (str[j])
		{
			if (charset[i] == str[j])
				count++;
			j++;
		}
		i++;
	}
	return (count++);
}

void	ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	charset_l;

	i = 0;
	charset_l = charset_str_len(str, charset);
	printf("%d", charset_l);
}

int	main(void)
{
	char	str[] = "lotfii";
	char	charset[] = "io";

	ft_split(str, charset);
}
