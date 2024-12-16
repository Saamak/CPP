SOURCES = main.cpp \
		  AMateria.cpp \
		  Character.cpp \
		  MateriaSource.cpp \
		  Ice.cpp \
		  Cure.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME = Amateria

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
