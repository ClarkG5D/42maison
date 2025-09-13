/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:07:43 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 12:39:59 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90
			 || str[i] >= 97 && str[i] <= 122)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}else
		{
			return (0);
		}
}

int	main()
{
	ft_str_is_alpha("ss");
	ft_str_is_alpha("SS");
	ft_str_is_alpha("");
}
