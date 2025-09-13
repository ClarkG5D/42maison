/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:27:04 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 15:49:54 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;

	int end;

	end = size - 1;
	int begin;

	begin = *tab;
	begin = temp;
	begin = end;
	end = temp;
	printf("%d", tab[size]);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 6);
}
