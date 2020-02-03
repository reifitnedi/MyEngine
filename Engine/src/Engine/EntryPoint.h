#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::BaseEngineApp *Engine::CreateApplication();

int main(int argc, char **argv) {
  Engine::Log::Init();
  ENGINE_CORE_WARN("Engine");
  ENGINE_CORE_INFO("Client");

  auto app = Engine::CreateApplication();
  app->Run();
  delete app;
}

#else
#error Engine operates only on Windows (yet)!
#endif