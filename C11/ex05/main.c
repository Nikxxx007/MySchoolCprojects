/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:08:26 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/03 12:20:06 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int a;
	int b;
	int res;
	int check;

	check = 0;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		check++;
	if (argv[2][0] == '-' && argv[2][1] == '\0')
		check++;
	if (argv[2][0] == '/' && argv[2][1] == '\0')
		check++;
	if (argv[2][0] == '*' && argv[2][1] == '\0')
		check++;
	if (argv[2][0] == '%' && argv[2][1] == '\0')
		check++;
	if (check > 0)
		res = operations(a, b, argv);
	else
		write(1, "0\n", 2);
	return (0);
}
