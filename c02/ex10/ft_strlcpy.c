/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:10:20 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/06 04:13:05 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (*src && i + 1 < size)
		{
			*dest++ = *src++;
			i++;
		}
		*dest = '\0';
	}
	while (*src++)
		i++;
	return (i);
}
