SOURCES = main.cpp \
		  Weapon.cpp \
		  HumanA.cpp \
		  HumanB.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
