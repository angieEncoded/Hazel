#include "Hazel.h"



// Skeleton class that is a Hazel application
class Sandbox : public Hazel::Application {
public:
	Sandbox() {};
	~Sandbox() {};

};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}