/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:16:20 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/07 13:05:07 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_address(unsigned long long addr_point)
{
	char					addr_out[16];
	const char				*hex = "0123456789abcdef";
	unsigned long long		i;

	i = 0;
	while (i < 16)
	{
		addr_out[i] = '0';
		i++;
	}
	i--;
	while (i >= 0 && addr_point > 0)
	{
		addr_out[i] = hex[addr_point % 16];
		addr_point /= 16;
		i--;
	}
	write(1, addr_out, 16);
	write(1, ": ", 2);
}

void	print_hex(char *str)
{
	const char	*hex = "0123456789abcdef";
	int			j;
	int			max;

	max = 40;
	j = 0;
	while (*str && j++ < 8)
	{
		if (*str)
		{
			write(1, &hex[(unsigned char)*str / 16], 1);
			write(1, &hex[(unsigned char)*str % 16], 1);
			str++;
			write(1, &hex[(unsigned char)*str / 16], 1);
			write(1, &hex[(unsigned char)*str % 16], 1);
			write(1, " ", 1);
			str++;
			max = max - 5;
		}
	}
	while (max-- > 0)
		write(1, " ", 1);
}

void	print_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (*str && i < 16)
	{
		j = 0;
		while (j < 2)
		{
			if (*str >= 32 && *str <= 126)
				write(1, &(*str), 1);
			else
				write(1, ".", 1);
			str++;
			i++;
			j++;
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	str = (char *)&addr;
	if (size == 0)
		return (0);
	i = 0;
	while (i <= size / 16)
	{
		ft_address((unsigned long long)&str[i * 16]);
		print_hex(addr + 16 * i);
		print_str(addr + 16 * i);
		write(1, "\n", 1);
		i++;
	}
	return ((void *)addr);
}
