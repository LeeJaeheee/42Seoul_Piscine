/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:20:05 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/06 20:30:45 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*src && nb-- > 0)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}
