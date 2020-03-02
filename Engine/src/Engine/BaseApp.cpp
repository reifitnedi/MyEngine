#include "BaseApp.h"
#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Engine {

BaseEngineApp::BaseEngineApp() {}

BaseEngineApp::~BaseEngineApp() {}

void BaseEngineApp::Run() {
  WindowResizeEvent e(1280, 720);
  if (e.IsInCategory(EventCategoryApplication)) {
    ENGINE_CORE_TRACE(e);
  }
  if (e.IsInCategory(EventCategoryInput)) {
    ENGINE_CORE_TRACE(e);
  }

  while (true) {
  }
}

} // namespace Engine
