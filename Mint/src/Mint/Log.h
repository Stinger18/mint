#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Mint
{
	class MINT_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};
} // namespace Mint

// Core log macros
#define MT_CORE_TRACE(...) ::Mint::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MT_CORE_INFO(...)  ::Mint::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MT_CORE_WARN(...)  ::Mint::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MT_CORE_ERROR(...) ::Mint::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MT_CORE_FATAL(...) ::Mint::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// client log macros
#define MT_TRACE(...) ::Mint::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MT_INFO(...)  ::Mint::Log::GetClientLogger()->info(__VA_ARGS__)
#define MT_WARN(...)  ::Mint::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MT_ERROR(...) ::Mint::Log::GetClientLogger()->error(__VA_ARGS__)
#define MT_FATAL(...) ::Mint::Log::GetClientLogger()->fatal(__VA_ARGS__)

