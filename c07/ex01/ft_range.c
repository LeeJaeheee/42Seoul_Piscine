/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:17:15 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/13 16:20:49 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
