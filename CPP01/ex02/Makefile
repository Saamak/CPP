SOURCES = main.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

NAME = Zombie

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
