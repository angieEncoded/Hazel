#pragma once

#include "Core.h"


namespace Hazel {
	// In order to be able to use this in sandbox, we need the declspec export
	class HAZEL_API Application {
	public:
		Application();
		virtual ~Application(); // this class WILL be subclassed, so make this destructor virtual to let CPP know that there might be other destructors that need to be run

		void Run(); // basically just runs the application





	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

