/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_contain_charset.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:57:48 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/16 11:00:25 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

t_bool	c_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c != charset[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_bool	str_contain_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!c_is_in_charset(str[i], charset))
			return (FALSE);
		i++;
	}
	return (TRUE);
}