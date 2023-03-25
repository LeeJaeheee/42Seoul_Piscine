/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:06:56 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/16 03:14:01 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	s11;
	unsigned char	s22;
	int				i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			s11 = (unsigned char)s1[i];
			s22 = (unsigned char)s2[i];
			return (s11 - s22);
		}
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	char	*cache;
	int		i;
	int		j;

	i = 0;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				cache = tab[i];
				tab[i] = tab[j];
				tab[j] = cache;
			}
			j++;
		}
		i++;
	}
}
