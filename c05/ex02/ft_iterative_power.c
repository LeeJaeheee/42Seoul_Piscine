/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:21:16 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/10 20:03:00 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
