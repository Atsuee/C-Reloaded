/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:08:30 by wailas            #+#    #+#             */
/*   Updated: 2024/11/06 14:40:19 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	cpt;
	int	i;

	cpt = 0;
	i = 1;
	while (nb != 0)
	{
		nb -= i;
		i += 2;
		cpt++;
		if (nb < 0)
			return (0);
	}
	return (cpt);
}
