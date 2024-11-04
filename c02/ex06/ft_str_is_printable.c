/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:30:29 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/02 20:49:15 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	charp;
	int	i;

	charp = 32;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *str = "kha\alid";
	return(ft_str_is_printable(str));
}*/
