/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:50:17 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/12 12:26:12 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
{
	int i;

	i = 0;
	while (src[i] != '\0' && src[i] <= src[n])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char	dest[] = "jack";
	char	src[] = "daniel";
	unsigned int n = 5;
	printd("%s", ft_strncpy());
}
