/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:11:25 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 18:00:15 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(unsigned int ref)
{
	unsigned int		resto;
	char	base[] = "0123456789abcdef";
	int		base_size;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;

	// if (ref == 0)
	// 	return (0);

	// else if (ref > 0)
	// {
	// 	resto = ref % base_size;
	// 	ref = ref / base_size;
	// }
	// else
	// 	ft_print(ref);
	// write(1, &base[resto], 1);

	resto = (ref / 16) % 16;
	write(1, &base[resto], 1);

	resto = ref % 16;
	write(1, &base[resto], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		ref;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			ref = str[i];
			ft_print(ref);
		}
		else
			write(1, &str[i], 1);
		i++;
	}	
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char src[0xFF + 10];
	int	i;

	i = 1;
	while (i <= 0xFF)
	{
		src[i - 1] = i;
		i++;
	}
	src[i - 1] = 0;

	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable(src);
	write(1, "\n", 1);
}
