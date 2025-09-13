/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:03:42 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 10:35:02 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b ;
	*mod = a % b;
}
/*
int	main()
{
	int a = 5;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod );
	printf("%d %d", div, mod);
}*/
