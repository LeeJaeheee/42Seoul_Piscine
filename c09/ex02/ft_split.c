/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:38:24 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/15 00:16:52 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_cnt(char *str, char *charset)
{
	int	i;
	int	old_i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		old_i = i;
		while (!is_sep(str[i], charset) && str[i])
			i++;
		if (old_i < i)
			cnt++;
	}
	return (cnt);
}

void	str_cpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = 0;
}

char	**put_words(char **res, char *str, char *charset)
{
	int		i;
	char	buf[16384];
	int		str_idx;
	int		j;

	i = 0;
	str_idx = 0;
	j = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		j = 0;
		while (!is_sep(str[i], charset) && str[i])
			buf[j++] = str[i++];
		if (j > 0)
		{
			buf[j] = '\0';
			res[str_idx] = (char *)malloc(sizeof(char) * j);
			str_cpy(res[str_idx], buf);
			str_idx++;
		}
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**res;

	len = get_cnt(str, charset);
	i = 0;
	res = (char **)malloc(sizeof(char *) * (len + 1));
	res[len] = 0;
	res = put_words(res, str, charset);
	return (res);
}
