/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:48:36 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 16:44:47 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		i++;
	}
	if (str[i] == '\0')
	{
	return (1);
	} else
	{
	return (0);
	}
}

int main()
{
	ft_is_printable();
	ft_is_printable();
	ft_is_printable();
}
