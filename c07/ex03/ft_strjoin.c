/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:17:40 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/15 04:10:40 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char s[])
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_getsize(int size, char **s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(s[i++]);
	return (len);
}

char	*ft_nullstr(void)
{
	char	*str;

	str = (char *)malloc(1);
	str[0] = '\0';
	return (str);
}

void	ft_makestr(char **strs, char *str, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j] != '\0')
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	if (size <= 0)
		return (ft_nullstr());
	len = ft_getsize(size, strs);
	len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ft_makestr(strs, str, sep, size);
	return (str);
}
