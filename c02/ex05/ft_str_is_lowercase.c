/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:37:02 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 13:44:24 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
	{
		i++;
	}
	if (str[i] == '\0')
	{
	return (1);
	} else
	{
	return	(0);
}

int main()
{
	ft_str_is_uppercase();
	ft_str_is_uppercase();
	ft_str_is_uppercase();
}
