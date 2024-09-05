/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:09:27 by sdaban            #+#    #+#             */
/*   Updated: 2024/08/31 11:20:29 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (0);
	}
	if (index < 2)
	{
		return (2);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
