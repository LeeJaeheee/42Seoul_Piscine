/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:11:09 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/16 03:11:17 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	check;
	int	result;

	index = 0;
	check = 1;
	result = 0;
	while (str[index] == ' ')
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			check *= -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (check * result);
}
