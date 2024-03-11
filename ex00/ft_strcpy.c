/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:18:14 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 16:45:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[4];
// 	char	dest[10];

// 	src [0] = '1';
// 	src [1] = '2';
// 	src [2] = '\0';

// 	dest[0] = 'a';
// 	dest[1] = 'b';
// 	dest[2] = '\0';

// 	printf("%s", ft_strcpy(dest, src));
// 	return (0);
// }
