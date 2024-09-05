/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:48:11 by sdaban            #+#    #+#             */
/*   Updated: 2024/09/04 15:10:15 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(total_length(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i++ < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
