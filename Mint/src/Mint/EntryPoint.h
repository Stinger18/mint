#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Mint::Application* Mint::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Mint::CreateApplication();
	app->Run();
	delete app;
}

#endif
