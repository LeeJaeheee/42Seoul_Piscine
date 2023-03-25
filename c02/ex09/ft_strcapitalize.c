/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:33:36 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/07 14:15:13 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num_or_alpha(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		while (*str && !is_num_or_alpha(*str))
			str++;
		if (!*str)
			return (temp);
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
		while (*str && is_num_or_alpha(*str))
		{
			if (*str >= 'A' && *str <= 'Z')
				*str += 32;
			str++;
		}
	}
	return (temp);
}
