/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:24:48 by sdaban            #+#    #+#             */
/*   Updated: 2024/08/21 11:49:34 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	upper;
	int	lower;
	int	reversed;

	upper = 0;
	lower = size - 1;
	while (upper < (size / 2))
	{
		reversed = tab[lower];
		tab[lower] = tab[upper];
		tab[upper] = reversed;
		upper++;
		lower--;
	}
}
