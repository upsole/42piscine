/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:55:01 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/23 10:17:06 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	val;

	i = 0;
	while (s1[i] && s2[i])
	{
		val = (s1[i] - s2[i]);
		if (val)
			return (val);
		i++;
	}
	return (s1[i] - s2[i]);
}
