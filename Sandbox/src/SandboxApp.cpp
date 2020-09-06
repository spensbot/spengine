#include <Spengine.h>

class Sandbox : public se::Application
{
public:
	Sandbox() {}

	~Sandbox() {}
};

se::Application* se::CreateApplication()
{
	return new Sandbox();
}