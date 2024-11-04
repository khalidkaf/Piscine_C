/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:15:32 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/12 01:14:53 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int format(char c)
{
	if(c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
	{
		return (0);
	}
	else if(c == '-')
	{
		return (1);
	}
	else if(c >= '0' && c <= '9')
	{
		return (2);
	}
	else
	{
		return (3);
	}
}

int ft_atoi(char *str)
	//if \ \ \  \ \ or space, just skip to the next char
	//if - impair nb == -
	//
{
	int i;
	int sign;
	int total;

	i = 0; 
	sign = 1;
	total = 0;
	while (format(str[i]) == 0)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (format(str[i]) == 1)
			sign *= -1;
		i++;
	}
	while(format(str[i]) == 2)
	{
		total = total * 10 + str[i] - 48;
		i++;
	}
	return (total * sign);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_atoi("-- 12i12"));
	printf("%i", atoi("--12"));
	return(0);
}
