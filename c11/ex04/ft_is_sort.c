/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:04:13 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/15 18:09:29 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_increase(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;

	i = 0;
	while (i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);
		if (result > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_decrease(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;

	i = 0;
	while (i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);
		if (result < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_decrease(tab, length, f) || ft_increase(tab, length, f))
		return (1);
	return (0);
}
