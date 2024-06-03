/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:07:01 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/14 18:24:21 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <stdio.h>
void print(int num) 
{
    printf("%d ", num);
}

int main() 
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = sizeof(tab) / sizeof(tab[0]);
    ft_foreach(tab, length, print);
    return 0;
}*/
