#include "./Account.hpp"
#include <iostream>
#include <ctime>

void Account::_displayTimestamp()
{
    time_t      rawtime;
	struct tm   *timeinfo;
	char buffer [19];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
	return ;
}