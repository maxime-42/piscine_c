/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:00:56 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 20:16:33 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	s;

	n = 0;
	s = 1;
	while ((*str && *str >= 9 && *str <= 13) || *str == 32)
		str++;
	while ((*str && *str == '-') || *str == '+')
	{
		s *= (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + *str - 48;
		str++;
	}
	return (n * s);
}