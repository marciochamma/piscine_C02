/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:45:07 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/17 16:31:18 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			result = 0;
		str++;
	}
	return (result);
}
