#include "Serializer.hpp"

int main() {
	Data data = {1, "Test"};
	uintptr_t raw = Serializer::serialize(&data);
	Data* deserializedData = Serializer::deserialize(raw);

	if (deserializedData == &data) {
		std::cout << "Serialization and deserialization successful!" << std::endl;
	} else {
		std::cout << "Serialization and deserialization failed!" << std::endl;
	}
	if (deserializedData->i == data.i && deserializedData->name == data.name) {
		std::cout << "Data integrity check successful!" << std::endl;
	} else {
		std::cout << "Data integrity check failed!" << std::endl;
	}
	return 0;
}
