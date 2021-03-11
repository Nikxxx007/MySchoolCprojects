/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   desis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:07:58 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/03 12:20:51 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		operations(int a, int b, char **str)
{
	int (*ptr[5])(int, int);
	int res;

	ptr[0] = plus;
	ptr[1] = minus;
	ptr[2] = division;
	ptr[3] = multi;
	ptr[4] = modi;
	if (str[2][0] == '+' && str[2][1] == '\0')
		res = ptr[0](a, b);
	if (str[2][0] == '-' && str[2][1] == '\0')
		res = ptr[1](a, b);
	if (str[2][0] == '/' && str[2][1] == '\0')
		res = ptr[2](a, b);
	if (str[2][0] == '*' && str[2][1] == '\0')
		res = ptr[3](a, b);
	if (str[2][0] == '%' && str[2][1] == '\0')
		res = ptr[4](a, b);
	return (res);
}
