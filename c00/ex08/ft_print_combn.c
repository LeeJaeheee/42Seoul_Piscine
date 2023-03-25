/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:49:18 by jaeheele          #+#    #+#             */
/*   Updated: 2022/08/29 11:13:55 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(int n, int index, char *c)
{
	if (index == n)
	{
		write(1, c, n);
		if ((c[n - 1] == '9') && (c[0] - '0' == 9 - (n - 1)))
			return ;
		write(1, ", ", 2);
		return ;
	}
	if (index != 0)
		c[index] = c[index - 1] + 1;
	while (c[index] <= '9')
	{
		comb(n, index + 1, c);
		c[index]++;
	}
}

void	ft_print_combn(int n)
{
	char	c[10];

	c[0] = '0';
	comb(n, 0, c);
}
