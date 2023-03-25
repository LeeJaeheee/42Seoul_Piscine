/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:19:09 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/11 04:19:03 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	nbr;

	nbr = (long long)nb;
	if (nbr <= 0)
		return (0);
	i = 1;
	while (i * i < nbr)
		i++;
	if (i * i == nbr)
		return ((int)i);
	return (0);
}
