#pragma once

#include "Core.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Engine {
class ENGINE_API Log {
public:
  static void Init();

  inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() {
    return s_coreLogger;
  }
  inline static std::shared_ptr<spdlog::logger> &GetClientLogger() {
    return s_clientLogger;
  }

private:
  static std::shared_ptr<spdlog::logger> s_coreLogger;
  static std::shared_ptr<spdlog::logger> s_clientLogger;
};
} // namespace Engine

#define ENGINE_CORE_TRACE(...)                                                 \
  ::Engine::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define ENGINE_CORE_DEBUG(...)                                                 \
  ::Engine::Log::GetCoreLogger()->debug(__VA_ARGS__);
#define ENGINE_CORE_INFO(...) ::Engine::Log::GetCoreLogger()->info(__VA_ARGS__);
#define ENGINE_CORE_WARN(...) ::Engine::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define ENGINE_CORE_ERROR(...)                                                 \
  ::Engine::Log::GetCoreLogger()->error(__VA_ARGS__);
#define ENGINE_CORE_CRITICAL(...)                                              \
  ::Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__);

#define APP_CORE_TRACE(...)                                                    \
  ::Engine::Log::GetClientLogger()->trace(__VA_ARGS__);
#define APP_CORE_DEBUG(...)                                                    \
  ::Engine::Log::GetClientLogger()->debug(__VA_ARGS__);
#define APP_CORE_INFO(...) ::Engine::Log::GetClientLogger()->info(__VA_ARGS__);
#define APP_CORE_WARN(...) ::Engine::Log::GetClientLogger()->warn(__VA_ARGS__);
#define APP_CORE_ERROR(...)                                                    \
  ::Engine::Log::GetClientLogger()->error(__VA_ARGS__);
#define APP_CORE_CRITICAL(...)                                                 \
  ::Engine::Log::GetClientLogger()->fatal(__VA_ARGS__);
