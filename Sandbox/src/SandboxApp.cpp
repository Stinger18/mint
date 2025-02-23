#include <Mint.h>

class Sandbox : public Mint::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox() 
	{

	}
};

Mint::Application* Mint::CreateApplication()
{
	return new Sandbox();
}