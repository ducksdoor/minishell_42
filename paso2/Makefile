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

SOURCE = main.c utils.c easter_eggs.c

%.o: %.c
				@echo "${BLUE} ◎ $(YELLOW)Compiling   ${RED}→   $(GREEN)$< $(DEF_COLOR)"
#	$(CFLAGS) -------->lo he sacado de la linea de abajo
				@${CC} -c $< -o $@


OBJS = ${SOURCE:.c=.o}

all: ${NAME}
	
${NAME}: ${OBJS}
#	$(CFLAGS) -------->lo he sacado de la linea de abajo
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