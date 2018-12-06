/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:38:18 by gdamion-          #+#    #+#             */
/*   Updated: 2018/11/28 14:04:41 by gdamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*in;
	char	*out;

	i = 0;
	in = (char*)src;
	out = dest;
	while (i < n)
	{
		out[i] = in[i];
		i++;
	}
	return (dest);
}
