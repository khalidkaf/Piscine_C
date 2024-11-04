/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:30:57 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/10 17:36:52 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	str_len = 0;
	while (src[str_len])
		str_len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_len);
}
/*
#include <stdio.h>
int main()
{
	char source[] = "khalid";
	char dest[10];
	printf("%i", ft_strlcpy(dest, source, 0));
	printf("%s", dest);
}*/
