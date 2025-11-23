#include "PosixPx4Common.h"

std::string ExtractLastPathComponent(std::string const &pathname)
{
	struct MatchPathSeparator {
		bool operator()(char ch) const
		{
			return ch == '/';
		}
	};
	
	return std::string(std::find_if(pathname.rbegin(), pathname.rend(), MatchPathSeparator()).base(), pathname.end());
}
