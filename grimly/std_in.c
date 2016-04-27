/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 12:01:11 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/27 15:34:32 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_input.h"

#define LEN 1024

char		*get_stdin(int argc, char **argv)
{
	char		*input;
	int			i;
	int			fd;

	i = 0;
	fd = 0; 

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
        input = malloc(sizeof(char*) * LEN);
		while (argv[i] != '\0')
			i++;
		i = 0;
		read(fd, input, LEN);
		while (input[i] != '\0')
			i++;
		write(1, "\n", 1);
		return (0);
	}
    return (input);
}
