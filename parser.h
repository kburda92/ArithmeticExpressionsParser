#include "expression.h"
#include <string>

class Parser
{
public:
	Expression Parse(const std::string& expression);
}
