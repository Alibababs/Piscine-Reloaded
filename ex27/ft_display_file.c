/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:32 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/15 16:44:49 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(char *filename)
{
	int			file;
	char		character;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		write (2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(file, &character, 1))
		write(1, &character, 1);
	close(file);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
