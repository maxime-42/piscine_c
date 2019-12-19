/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:02:07 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/03 14:58:49 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	j = size;
	while (++i < j)
	{
		tmp = tab[i];
		tab[i] = tab[--j];
		tab[j] = tmp;
	}
}