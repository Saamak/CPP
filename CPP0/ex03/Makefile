CXX = g++

OUT = Bank

SRC = Account.cpp \
	  tests.cpp 

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT) *.o

fclean: clean

re: fclean all
