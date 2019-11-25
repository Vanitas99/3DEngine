#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace SimpleEngine {
	class SE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger(){ return s_ClientLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){ return s_CoreLogger; };
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger; 

	};


}

/* Core Log Macros */
#define SE_CORE_ERROR(...)	::SimpleEngine::Log::GetCoreLogger()->error(__VA_ARGS__);
#define SE_CORE_WARN(...)	::SimpleEngine::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define SE_CORE_INFO(...)	::SimpleEngine::Log::GetCoreLogger()->info(__VA_ARGS__);
#define SE_CORE_FATAL(...)	::SimpleEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__);
#define SE_CORE_TRACE(...)	::SimpleEngine::Log::GetCoreLogger()->trace(__VA_ARGS__);

/* Client Log Macros */
#define SE_ERROR(...)	::SimpleEngine::Log::GetClientLogger()->error(__VA_ARGS__);
#define SE_WARN(...)	::SimpleEngine::Log::GetClientLogger()->warn(__VA_ARGS__);
#define SE_INFO(...)	::SimpleEngine::Log::GetClientLogger()->info(__VA_ARGS__);
#define SE_FATAL(...)	::SimpleEngine::Log::GetClientLogger()->fatal(__VA_ARGS__);
#define SE_TRACE(...)	::SimpleEngine::Log::GetClientLogger()->trace(__VA_ARGS__);