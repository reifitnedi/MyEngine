#pragma once

#include "Core.h"

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
