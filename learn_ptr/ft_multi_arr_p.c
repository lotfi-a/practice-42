/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multi_arr_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:10:00 by laanikid          #+#    #+#             */
/*   Updated: 2025/01/29 10:25:31 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	n;
	int	**arr;

	n = 3;
	/*
	 * afin de manipuler un array en 2D il faut commencer par cree le premier arr
	 * ici on cree un array de 3 pointeurs vers int
	*/
	**arr = malloc(n * sizeof(int *));

	//On check bien si l' allocation memoire s'est bien passer
	if (arr == NULL)
	{
		printf("ERROR MEMORY ALLOCATION");
		return (0);
	}
	
	//Allocation de sous array
	for (int i = 0; i < n; i++)
	{
		arr[i] = malloc(5 * sizeof(int));
	}

	//init of array
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("/n");
	}
	// pour un arr 2D free dabord tous les sous arr avant l' array principale
	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	// une fois les sous array free maintenant on peut free l'array principale
	free(arr);
	return (0);
}
