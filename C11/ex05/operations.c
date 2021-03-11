/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:07:50 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/03 11:41:00 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		plus(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
	return (a + b);
}

int		minus(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
	return (a - b);
}

int		division(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	ft_putnbr(a / b);
	write(1, "\n", 1);
	return (a / b);
}

int		multi(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
	return (a * b);
}

int		modi(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(a % b);
	write(1, "\n", 1);
	return (a % b);
}
