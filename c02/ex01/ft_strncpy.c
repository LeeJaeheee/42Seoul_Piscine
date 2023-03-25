/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:43:49 by jaeheele          #+#    #+#             */
/*   Updated: 2022/08/28 21:28:51 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*tmp;
	unsigned int		i;

	tmp = dest;
	i = 0;
	while (*src && i++ < n)
		*dest++ = *src++;
	while (i++ < n)
		*dest++ = '\0';
	return (tmp);
}
