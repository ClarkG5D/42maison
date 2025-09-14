/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:04:42 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 17:46:59 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] >= 97 && str[i] <= 122)
	{
		i - 35;
		i++;
	}
	if(str[i] = '\0')
	{
		return (str);
	}
}

int main()
{
	ft_strupcase();
	ft_strupcase();
	ft_strupcase();
}
