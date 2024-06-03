/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:27:54 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/14 12:43:16 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		i;

	array = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i < 20)
	{
		printf("%d", ft_range(0, 20)[i]);
		printf("\n");
			i++;
	}
}*/
