#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

	int main(int argc, char ** argv) {
		int a = 5;
		printf("Hazel Engine\n");
		Hazel::Log::Init();
		HZ_CORE_WARN("Initialized Core Log");
		HZ_CLIENT_ERROR("Hello! Var={0}", a);
		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#endif



