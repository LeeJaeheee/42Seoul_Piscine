/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:12:01 by jaeheele          #+#    #+#             */
/*   Updated: 2022/09/16 03:12:11 by jaeheele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

int		ft_atoi(char *str);

int		plus(int a, int b);
int		minus(int a, int b);
int		multi(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

void	ft_print_num(int num);
void	print_result(int n1, int n2, char op);
