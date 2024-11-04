/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:32:30 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/11 14:56:17 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	char	cc;

	if ((c % 16) <= 9)
	{
		cc = c % 16 + 48;
		write(1, &cc, 1);
	}
	else
	{
		cc = c % 16 + 87;
		write(1, &cc, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	c;
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else if (str[i] < 32)
		{
			write(1, "\\", 1);
			c = str[i] / 16 + 48;
			write(1, &c, 1);
			print(str[i]);
		}
		else if (str[i] == 127)
		{
			write(1, "\\7c", 3);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "K\vHA \bLi\tI \nD";
	ft_putstr_non_printable(str);
}*/
