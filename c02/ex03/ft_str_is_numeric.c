/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:42:42 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/12 11:48:03 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric()
{
	int i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57
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
	printf("result comm" )
}
