/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:54:05 by sdaban            #+#    #+#             */
/*   Updated: 2024/08/29 10:50:58 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int c[] = {8,3,5,4,12};
	ft_sort_int_tab(c, 5);
	int i = 0;
	while(i < 5)
	{
		printf("%d ", c[i]);
		i++;
	}
	//printf("%d %d %d %d %d", c[0], c[1], c[2], c[3], c[4]);
	return 0;
}

