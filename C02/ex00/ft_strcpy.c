/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:11:59 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/20 16:12:03 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int letter;

	letter = 0;
	while (src[letter] != '\0')
	{
		dest[letter] = src[letter];
		letter++;
	}
	dest[letter] = '\0';
	return (dest);
}
