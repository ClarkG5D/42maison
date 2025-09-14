/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:53:02 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 13:01:20 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
	{
	i++;
	}
	if ( str[i] = '\0')
	{
		return (1);
	} else
		{
			return(0);
		}
}

int	main()
{
	ft_str_is_lowercase("HH");
	ft_str_is_lowercase("hh");
	ft_str_is_lowercase("");
}
