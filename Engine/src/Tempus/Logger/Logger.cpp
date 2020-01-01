#include "tppch.h"
#include "Logger.h"

namespace Tempus {

	const char* Logger::s_Pattern;

	Logger::Logger(const char* name)
		: m_Name(name)
	{
		s_Pattern = "";
	}


	Logger::~Logger()
	{
	}

	std::shared_ptr<Logger> Logger::create(const char* name)
	{
		return std::make_shared<Logger>(name);
	}

	void Logger::setPattern(const char * pattern)
	{
		s_Pattern = pattern;
	}

	void Logger::setLevel(LogLevel level)
	{
		m_Level = level;
	}

	template<typename... Args>
	void Logger::trace_full(const char* file, int line, Args... args) const
	{
		if (m_Level > LogLevel::trace) return;
		std::printf(format(args));
	}


	template<typename... Args>
	void Logger::info_full(const char* file, int line, Args... args) const
	{
		if (m_Level > LogLevel::info) return;
		std::printf(format(args));
	}

	template<typename... Args>
	void Logger::warn_full(const char* file, int line, Args... args) const
	{
		if (m_Level > LogLevel::warn) return;
		std::printf(format(args));
	}

	template<typename... Args>
	void Logger::error_full(const char* file, int line, Args... args) const
	{
		if (m_Level > LogLevel::error) return;
		std::printf(format(args));
	}

	template<typename... Args>
	void Logger::fatal_full(const char* file, int line, Args... args) const
	{
		if (m_Level > LogLevel::fatal) return;
		std::printf(format(args));
	}

	template<typename... Args>
	const char* Logger::format(Args... args)
	{
		std::string out = Logger::s_Pattern;
		std::string toConvert = args[0];
		std::vector<const char*> m_args;
		for (auto arg : args) m_args.push_back(arg);

		int i = 0;
		int pos = 0;
		while (pos = toConvert.find("{" + i + "}") != std::string::npos)
		{
			if (i >= m_args.size()) break;
			toConvert = toConvert.substr(0, pos) + m_args + toConvert.substr(pos + 1);
		}

		std::time_t result = std::time(nullptr);
		std::tm* time_ptr = std::localtime(&result);

		/*char tmp = 0;
		for (char c : out) {
			if (c != '%') continue;
			else
			{

			}
		}*/

		return toConvert;
	}

}