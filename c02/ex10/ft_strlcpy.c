/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbentchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:08:50 by nbentchi          #+#    #+#             */
/*   Updated: 2025/09/11 19:37:39 by nbentchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int size);
{
	int i;

	i = 0;
	while (src[i] != '\0' && src[i] <= src[size])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char	src[] = "daniel";
	char	dest[sizeof(src)] = "jack";
	unsigned int size = 5;
	printd("%s", ft_strlcpy());
}

