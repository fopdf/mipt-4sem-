#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

#include <stdio.h>
#include <time.h>
#include <boost/circular_buffer.hpp>


// Get current date/time, format is DD-MM-YYYY hh:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y %X", &tstruct);

    return buf;
}


int main()
{
	
    while(1)
    {
        boost::circular_buffer< std::string> cb(3);
        std::string a;
        std::cout << "Enter your email:";
        getline(std::cin, a);
        //std::cout << "-" << currentDateTime() << std::endl;
        std::string s{ currentDateTime() };
        s.c_str();
        a.c_str();
        cb.push_back(a + s);
    }
}

