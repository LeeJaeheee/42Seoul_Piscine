/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:02:53 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/16 03:08:11 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	i = 0;
	result = malloc(sizeof(int) * length);
	if (!(result))
		return (0);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
