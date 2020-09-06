#pragma once
#include "Application.h"
#include <stdio.h>

#ifdef SE_PLATFORM_WINDOWS

extern se::Application* se::CreateApplication();

int main(int argc, char** argv)
{
	auto app = se::CreateApplication();
	printf("Spengine is a go!");
	app->Run();
	delete app;
}

#endif