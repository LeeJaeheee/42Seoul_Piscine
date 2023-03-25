/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:03:50 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/16 03:08:41 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			result += 1;
		i++;
	}
	return (result);
}
