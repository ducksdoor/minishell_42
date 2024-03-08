DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m

NAME = minishell

CC = gcc

CFLAGS = -Wall -Wextra -Werror
CCLANG = -lreadline

SOURCE = main.c utils2.c \
		 simple_children.c \
		 token/tokenizar.c\
		 token/redirect.c \
		 token/new_token_list.c \
		 lib_utils/protect.c \
		 lib_utils/ft_strchr.c \
		 lib_utils/last_char.c \
		 lib_utils/ft_strncmp.c \
		 lib_utils/ft_strlen.c \
		 lib_utils/ft_split.c \
		 lib_utils/ft_strjoin.c \
		 lib_utils/ft_substr.c \
		 lib_utils/ft_strdup.c \
		 lib_utils/ft_strnstr.c \
		 lib_utils/ft_lstnew.c \
		 lib_utils/ft_lstlast.c \
		 lib_utils/ft_lstaddback.c \
		 lib_utils/ft_strtrim.c \
		 lib_utils/ft_strchrplus.c \
		 lib_utils/ft_compare_last_char.c \
		 show.c \
#token/tenten.c \

%.o: %.c
				@echo "${BLUE} ◎ $(YELLOW)Compiling   ${RED}→   $(GREEN)$< $(DEF_COLOR)"
#	$(CFLAGS) -------->lo he sacado de la linea de abajo para hacer pruebas, pero no se esta usando ahora mismo 
				@${CC} -c $< -o $@


OBJS = ${SOURCE:.c=.o}

all: ${NAME}
	
${NAME}: ${OBJS}
#	$(CFLAGS) -------->lo he sacado de la linea de abajo para hacer pruebas, pero no se esta usando ahora mismo 
				@$(CC) $(OBJS) -o $(NAME) ${CCLANG}
				@echo "\n$(GREEN) Created $(NAME) ✓$(DEF_COLOR)\n" 
				@echo "    _       _       _" | lolcat
				@echo " __(.)<  __(.)>  __(.)=    Cuak!"  | lolcat
				@echo " \___)   \___)   \___)"  | lolcat

clean:
				@${RM} ${OBJS}
				@echo "\n${GRAY} ◎ $(RED)All objects cleaned successfully ${GRAY}◎$(DEF_COLOR)\n"

fclean:
				@${RM} ${NAME}
				@${RM} ${OBJS} 
				@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

re: fclean all 

.PHONY: all clean fclean re 