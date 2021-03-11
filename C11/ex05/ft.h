/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:16:13 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/03 11:16:15 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <unistd.h>

int		plus(int a, int b);
int		minus(int a, int b);
int		division(int a, int b);
int		multi(int a, int b);
int		modi(int a, int b);
int		operations(int a, int b, char **str);
void	ft_putchar(char c);
void	helper(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
#endif
