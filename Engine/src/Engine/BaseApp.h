#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Engine {

class ENGINE_API BaseEngineApp {
 public:
  BaseEngineApp();
  virtual ~BaseEngineApp();

  void Run();
};

// To be defined by CLIENT.
BaseEngineApp *CreateApplication();

}  // namespace Engine
