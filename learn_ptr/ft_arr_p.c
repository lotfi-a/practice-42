/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:59:38 by laanikid          #+#    #+#             */
/*   Updated: 2025/01/29 10:09:05 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	n = 5;
	int 	*arr = malloc(n * sizeof(int));

	if(arr == NULL)
	{
		printf("ERROR MEMORY ALLOCATION");
		return (1);
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = i * 2;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}

	free(arr);
	return (0);
}
