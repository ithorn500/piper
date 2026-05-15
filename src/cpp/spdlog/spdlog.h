#pragma once

namespace spdlog {
namespace level {
enum level_enum {
  debug
};
} // namespace level

inline bool should_log(level::level_enum) { return false; }

template <typename... Args>
inline void debug(const char*, Args&&...) {}

template <typename... Args>
inline void info(const char*, Args&&...) {}

template <typename... Args>
inline void warn(const char*, Args&&...) {}

template <typename... Args>
inline void error(const char*, Args&&...) {}

} // namespace spdlog
