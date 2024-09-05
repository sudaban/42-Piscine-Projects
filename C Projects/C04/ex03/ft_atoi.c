/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:42:32 by sdaban            #+#    #+#             */
/*   Updated: 2024/08/29 14:55:35 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_spaces(char *str, int *pointer)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*pointer = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	a;
	int	result;
	int	index;

	result = 0;
	a = check_spaces(str, &index);
	while (str[index] && str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += str[index] - 48;
		index++;
	}
	result *= a;
	return (result);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *c = " -+--45";
	printf("%d", ft_atoi(c));
	return 0;
}
