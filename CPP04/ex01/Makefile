SOURCES = main.cpp \
		  animal.cpp \
		  dog.cpp \
		  cat.cpp \
		  brain.cpp \
		  WrongCat.cpp \
		  WrongAnimal.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME = Polymorphisme

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
