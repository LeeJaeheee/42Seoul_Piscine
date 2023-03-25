/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:03:10 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/13 03:40:09 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	int		len;
	char	*arr;

	len = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*arr;
	int			i;
	char		*s;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < argc)
	{
		s = argv[i];
		arr[i].size = ft_strlen(s);
		arr[i].str = s;
		arr[i].copy = ft_strdup(s);
		i++;
	}
	arr[argc].str = 0;
	return (arr);
}
