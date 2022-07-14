NAME = account

SRCS = ./Account.cpp \
	   ./tests.cpp \

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

HEADER = ./Account.hpp

MAKE = make
 
all: $(NAME)

$(NAME): $(OBJS)
		@g++ ${FLAGS} $(OBJS) -I ${HEADER} -o ${NAME}

.cpp.o: $(SRCS)
	@g++ ${FLAGS} -I ${HEADER} -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re