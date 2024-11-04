/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:43:39 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/01 15:06:22 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	tmp;

	i = 0;
	k = size - 1;
	j = size / 2;
	if (size > 0)
	{
		while (i < k)
		{
			tmp = tab[i];
			tab[i] = tab[k];
			tab[k] = tmp;
			k--;
			i++;
		}
	}
}
