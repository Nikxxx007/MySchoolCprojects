CC		= cc
CFLAGS 	= -Wall -Werror -Wextra
NAME	= do-op
SRCS	= desis.c doop.c operations.c main.c
OBJS	= ${SRCS:.c=.o}
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		
re:		fclean all

.PHONY:	all clean fclean re
