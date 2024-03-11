/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:49:04 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/18 11:55:44 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = "salut, comMent tu vas ? 42mots quarAnte-deux; cinquante+et+uN e.puntOs";
	char cpy[100];
	char *ret;
	strcpy(cpy, str);

	printf("%s\n", ft_strcapitalize(cpy));

	ret = ft_strcapitalize(cpy);
	printf("Same string returned? %i\n", ret == cpy);
}
