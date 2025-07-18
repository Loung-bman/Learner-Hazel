#pragma once
#ifdef HZ_PLAYFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
int main(int argc,char** argv)
{
	//SandBox* sandbox = new SandBox();
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif // HZ_PLAYFORM_WINDOWS

