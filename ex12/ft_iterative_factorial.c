/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:35:19 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/15 16:40:52 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb >= 1)
	{
		result *= nb;
		--nb;
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(-4));
}*/
