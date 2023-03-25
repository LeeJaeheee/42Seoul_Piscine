/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:20:34 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/06 20:33:31 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (1)
			{
				if (to_find[j] == '\0')
					return (str + i);
				if (!(str[i + j] == to_find[j]))
					break ;
				j++;
			}
		}
		i++;
	}
	return (0);
}
