SOURCES = main.cpp \
		  Harl.cpp


OBJECTS = $(SOURCES:.cpp=.o)

NAME = Harl

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
