#pragma once

#include "Core.h"

namespace Mint
{
	class MINT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

} // namespace Mint
