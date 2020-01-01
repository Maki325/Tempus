#pragma once

#include "tppch.h"

#include "Tempus/Core.h"

namespace Tempus {

	enum LogLevel {
		trace = 0,
		info, warn, error, fatal
	};

	class TEMPUS_API Logger
	{
	private:
		const char* m_Name;
		LogLevel m_Level = LogLevel::trace;
		static const char* s_Pattern;
	public:
		Logger(const char* name);
		~Logger();

		static std::shared_ptr<Logger> create(const char* name);

		static void setPattern(const char* pattern);

		void setLevel(LogLevel level);

		/*template<typename... Args>
		void trace(Args... args) const;

		template<typename... Args>
		void info(Args... args) const;

		template<typename... Args>
		void warn(Args... args) const;

		template<typename... Args>
		void error(Args... args) const;

		template<typename... Args>
		void fatal(Args... args) const;*/

		template<typename... Args>
		void trace_full(const char* file, int line, Args... args) const;

		template<typename... Args>
		void info_full(const char* file, int line, Args... args) const;

		template<typename... Args>
		void warn_full(const char* file, int line, Args... args) const;

		template<typename... Args>
		void error_full(const char* file, int line, Args... args) const;

		template<typename... Args>
		void fatal_full(const char* file, int line, Args... args) const;

	private:
		template<typename... Args>
		const char* format(Args... args);

	};

}