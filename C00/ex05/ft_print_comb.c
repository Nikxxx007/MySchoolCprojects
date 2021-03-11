/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:40:56 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/18 12:05:25 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	cs_wr(char d, char e, char f)
{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (d != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				if ((a < b) && (b < c))
					cs_wr(a, b, c);
				c++;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
}
