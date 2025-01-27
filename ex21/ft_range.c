/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:04:50 by wailas            #+#    #+#             */
/*   Updated: 2024/11/07 11:58:02 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	taille;
	int	*dest;

	taille = 0;
	dest = malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		dest[taille] = min;
		min++;
		taille++;
	}
	return (dest);
}
