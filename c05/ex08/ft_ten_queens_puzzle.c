/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:58:23 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/10 18:04:00 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	int		n;

	n = nb;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			c = (n % 10) + '0';
			ft_putnbr(n / 10);
			write(1, &c, 1);
		}
		else
		{
			c = n + '0';
			write(1, &c, 1);
		}
	}
}

void	putarr(int rslt[])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putnbr(rslt[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	is_available(int candidate[], int len, int row)
{
	int	i;
	int	col;

	i = 0;
	col = len;
	while (i < col)
	{
		if (candidate[i] == row || candidate[i] - row == col - i
			|| candidate[i] - row == i - col)
			return (0);
		i++;
	}
	return (1);
}

void	dfs(int col, int *candidate, int *count)
{
	int	row;

	if (col == 10)
	{
		putarr(candidate);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_available(candidate, col, row))
		{
			candidate[col] = row;
			dfs(col + 1, candidate, count);
			candidate[col] = '\0';
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	candidate[10];
	int	count;

	count = 0;
	dfs(0, candidate, &count);
	return (count);
}
