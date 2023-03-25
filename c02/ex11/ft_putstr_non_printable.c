/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:31:57 by jaeheele          #+#    #+#             */
/*   Updated: 2022/08/29 04:10:17 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)*str / 16], 1);
			write(1, &hex[(unsigned char)*str % 16], 1);
		}
		else
			write(1, &*str, 1);
		str++;
	}
}
