/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:20:50 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/06 21:43:09 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	if (dlen >= size)
		return (slen + size);
	while (size > i + 1 && *src)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
