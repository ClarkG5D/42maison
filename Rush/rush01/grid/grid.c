/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:03:19 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/13 16:32:02 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_makegrid(char *str)
{
	int	rows;
	int colums;
	int **grid;// est egal a *grid[]
	int i;

	rows = 4;
	colums = 4;
	i = 1;

	grid = malloc(rows * sizeof(int *));// ici la fonction malloc multiplie la rows par la taille en octet du pointer d'un int (int *)
	grid[0] = malloc(rows * colums * sizeof(int));// 8 octet pour int * ou lieu de 4 pour un simple octet
	while (i < rows - 1)
	{
		grid[i] = grid[0] + i * colums;
		i++;
	}

	return (**grid);
}
