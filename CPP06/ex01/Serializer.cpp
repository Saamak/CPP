#include "Serializer.hpp"

 // Méthode statique pour sérialiser un pointeur Data en uintptr_t
uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

// Méthode statique pour désérialiser un uintptr_t en pointeur Data
Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
