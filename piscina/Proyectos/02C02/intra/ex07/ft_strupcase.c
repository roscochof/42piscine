/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:20 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/28 13:15:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
