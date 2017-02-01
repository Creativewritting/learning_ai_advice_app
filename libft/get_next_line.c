/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:07:17 by jcone             #+#    #+#             */
/*   Updated: 2017/01/16 14:52:24 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		combine_read(char **nl, char **stored_line, t_list **cu)
{
	char	*temp_line;
	int		r_v;
	char	*prev_buff;

	prev_buff = (char *)(*cu)->content;
	while (((r_v = read((*cu)->id, *nl, BUFF_SIZE)) > 0) && !ft_strchr(*nl, C))
	{
		if (*stored_line[0] && !prev_buff)
		{
			temp_line = *stored_line;
			*stored_line = ft_strjoin(temp_line, *nl);
			ft_strdel(&temp_line);
		}
		else if (!prev_buff)
			*stored_line = ft_strcpy(*stored_line, *nl);
		else
		{
			ft_strdel(stored_line);
			*stored_line = ft_strjoin(prev_buff, *nl);
			ft_strdel(&prev_buff);
		}
		ft_strclr(*nl);
	}
	(*cu)->content = prev_buff;
	return (r_v);
}

void	valid_read_1(char **prev_buff, char **next_line, char **stored_line)
{
	char	*temp_line;
	int		len;

	temp_line = ft_strnew(BUFF_SIZE);
	len = 0;
	if (ft_strchr(*next_line, C))
	{
		if (*prev_buff != NULL)
			*stored_line = ft_strcpy(*stored_line, *prev_buff);
		else
			*prev_buff = ft_strnew(BUFF_SIZE);
		*prev_buff = ft_strcpy(*prev_buff, ft_strchr(*next_line, C) + 1);
		if (*next_line[0] != C)
		{
			temp_line = ft_strncpy(temp_line, *next_line,
					ft_strlenc(*next_line, &len, C));
			ft_strdel(next_line);
			*next_line = *stored_line;
			*stored_line = ft_strjoin(*next_line, temp_line);
		}
	}
	ft_strdel(&temp_line);
}

int		after_reading(char **prev_buff, int read_val, char **sl, char **nl)
{
	int		j;
	int		len;
	char	*temp_line;

	j = 1;
	len = 0;
	temp_line = ft_strnew(BUFF_SIZE);
	if (read_val < 0 || 10000000 <= BUFF_SIZE)
		j = -1;
	else if (read_val)
		valid_read_1(prev_buff, nl, sl);
	else if (read_val == 0)
	{
		if (*sl[0] == '\0' && *prev_buff != NULL)
		{
			*sl = ft_strcpy(*sl, *prev_buff);
			ft_strdel(prev_buff);
		}
		if (*sl[0] == '\0' && !(j = 0))
			ft_strdel(sl);
	}
	ft_strdel(&temp_line);
	return (j);
}

void	for_large_buffer_size(char **prevb, char **sl)
{
	char	*temp_line;
	int		len;

	len = 0;
	temp_line = *prevb;
	*sl = ft_strncpy(*sl, temp_line, ft_strlenc(*prevb, &len, C));
	*prevb = ft_strnew(BUFF_SIZE);
	*prevb = ft_strcpy(*prevb, ft_strchr(temp_line, C) + 1);
	ft_strdel(&temp_line);
}

int		get_next_line(const int fd, char **line)
{
	char			*next_line;
	char			*stored_line;
	static t_list	*prev_buff_start = NULL;
	t_list			*current;
	int				j;

	if (fd < 0 || line == NULL)
		return (-1);
	current = ft_lstexpandif(fd, NULL, BUFF_SIZE, &prev_buff_start);
	next_line = ft_strnew(BUFF_SIZE);
	stored_line = ft_strnew(BUFF_SIZE);
	j = 1;
	if (current->content && ft_strchr((char *)current->content, C))
		for_large_buffer_size((char **)&current->content, &stored_line);
	else
		j = after_reading((char **)&current->content, combine_read(&next_line,
						&stored_line, &current), &stored_line, &next_line);
	*line = stored_line;
	ft_putendl(*line);
	if (j == 0)
		ft_lstremoveone(&prev_buff_start, &current);
	ft_strdel(&next_line);
	return (j);
}
