/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:09:54 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/02 09:46:03 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H 
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

int		ft_strchr_gnl(const char *str, char c);
char	*get_next_line(int fd);
char	*ft_line(char *buf);
char	*ft_rest(char *buf);
char	*ft_strjoin_gnl(char *s1, char *s2);
//size_t	ft_strlen(const char *str);

#endif
