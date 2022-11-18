/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:22:31 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 12:23:33 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

char	*ft_strdup(const char *str)
{
	char	*twin;
	size_t	i;

	twin = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!twin)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		twin[i] = str[i];
		i++;
	}
	twin[i] = '\0';
	return (twin);
}
/*
int main()
{
    char source[] = "rabia";
    char* target = ft_strdup(source);

    printf("%s", target);
    return 0;
}
*/