#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data {
	int i;
	std::string name;
};

class Serializer{
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private :
		Serializer();
		~Serializer();
};

#endif
