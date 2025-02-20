/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:52:53 by wailas            #+#    #+#             */
/*   Updated: 2024/11/07 11:34:18 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	taille;

	taille = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			taille++;
		i++;
	}
	return (taille);
}
