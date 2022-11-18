/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:45:55 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 11:48:28 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	long int	num;
	int			n;

	n = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -1;
		str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * n;
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}
/*
int main(void)
{
    printf("%d\n", atoi("tutorialspoint.com"));
    printf("--------\n");

    printf("%d\n", atoi("  ---+--+--+6451-1ab567"));
    printf("--------\n");

    printf("%d\n", ft_atoi("-123"));
    printf("%d\n", atoi("-123"));
    printf("--------\n");
    printf("%d\n", ft_atoi("98993489"));
    printf("%d\n", atoi("98993489"));
    printf("--------\n");

}
*/