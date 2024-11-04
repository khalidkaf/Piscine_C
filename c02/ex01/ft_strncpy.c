/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:43:50 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/10 19:25:19 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (dest);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	char str1[] = "ecoleecolecole";
	char str2[] = "khalid";
	printf("%s", ft_strncpy(str1, str2, 6));
//	printf("%s\n", str1);
//	write(1, &str1[9], 1);
}*/
