/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:17:36 by svan-nie          #+#    #+#             */
/*   Updated: 2019/05/20 10:18:41 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
