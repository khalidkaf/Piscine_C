/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:52:18 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/02 12:33:40 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	ft_str_is_alpha("khalid");
}*/
