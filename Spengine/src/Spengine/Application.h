#pragma once
#include "Core.h"

namespace se {

	class SPENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

} // namespace se