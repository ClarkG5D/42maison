/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:17:58 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/10 14:46:23 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	int	nombre;

	nombre = 42;
	*nbr = nombre;
}

int	main(void)
{
	int	nombre;

	nombre = 52;
	ft_ft(&nombre);
	printf("%d", nombre);
}
