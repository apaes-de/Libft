/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:30:30 by apaes-de          #+#    #+#             */
/*   Updated: 2021/10/25 15:30:34 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = 0;
	dst = (void *)malloc(count * size);
	tot_size = size * count;
	if (dst == 0)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
