#ifndef MINI_H
#define	MINI_H

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <termios.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define DELIMS " \t\r\n"
#define READ 0
#define WRITE 1
#define ERROR -1

typedef enum    e_type
{
    T_WORD,
    T_PIPE,
    T_REDIRECT,
    T_HEREDOC, 
    T_DOUBLE_Q,
    T_SINGLE_Q,
    T_SPACE
};

typedef struct  s_token
{
    int     type;
    char    *str;
    int     double_flag;
    int     single_flag;
}   t_token; 


typedef struct s_list
{
	struct  s_list *next;
    char    *content;
}				t_list;


typedef struct s_mini
{
	int     infile;
    int     outfile;
    char    **env;
    
}				t_mini;


/*ft.c*/

void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);




/* bonus */
/* gnl */
int		ft_strchr(char *str, int c);
// char	*ft_substr(char const *s, int start, int len);
char	*data_join(char **data, char *buf);
char	*setting_data(char *str);
char	*devide_line(char **data, int idx);
char	*size_is_zero(char **data, int idx);
char	*read_buf(int fd, char **data, char *buf, int size);
char	*get_next_line(int fd);
/* pipe_bonus */
void	read_gnl(t_mini *pp);
void	fileinit_bonus(int ac, char **av, t_mini *pp);


#endif 