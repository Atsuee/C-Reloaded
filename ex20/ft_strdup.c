/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:51:36 by wailas            #+#    #+#             */
/*   Updated: 2024/11/06 11:18:03 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		taille;
	char	*dest;

	taille = 0;
	while (src[taille])
		taille++;
	dest = (char *)malloc(sizeof(char) * (taille + 1));
	if (!dest)
		return (NULL);
	taille = 0;
	while (src[taille])
	{
		dest[taille] = src[taille];
		taille++;
	}
	dest[taille] = '\0';
	return (dest);
}
