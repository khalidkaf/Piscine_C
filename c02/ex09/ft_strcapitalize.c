/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:58:11 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/10 17:07:40 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	format(char c)
{
	if (c <= 122 && c >= 97)
		return (0);
	else if (c <= 90 && c >= 65)
		return (1);
	else if (c <= 57 && c >= 48)
		return (2);
	else
		return (3);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (format(str[i - 1]) == 3 && format(str[i]) == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[]= "salut, ComMent tu vAs ? 42MOts quarante-#deux; cinquaNte+et+uN"; 
	ft_strcapitalize(str);
	printf("%s", str);
		
}*/
