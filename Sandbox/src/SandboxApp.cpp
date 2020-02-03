#include <Engine.h>

class Sandbox : public Engine::BaseEngineApp {
 public:
  Sandbox() {}

  ~Sandbox() {}
};

Engine::BaseEngineApp* Engine::CreateApplication() { return new Sandbox(); }
