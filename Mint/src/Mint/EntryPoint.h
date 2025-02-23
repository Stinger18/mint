#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Mint::Application* Mint::CreateApplication();

int main(int argc, char** argv) 
{
	Mint::Log::Init();
	MT_CORE_WARN("Initialized Log!");
	int a = 5;
	MT_INFO("Hello! Var={0}", a);

	auto app = Mint::CreateApplication();
	app->Run();
	delete app;
}

#endif
