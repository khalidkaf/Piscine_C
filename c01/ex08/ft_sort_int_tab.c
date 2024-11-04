/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:07:44 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/07/01 17:55:54 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < size -1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				tmp = tab[i];
				tab[i] = tab[i +1];
				tab[i +1] = tmp;
			}
			i++;
		}
		j++;
	}
}
