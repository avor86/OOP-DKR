#include <ctime>
#include "log.h"

using namespace std;

Logger::Logger(const string& fileName)
{
    logFile.open(fileName, ios::app);
}

void Logger::Write(const string& message)
{
    if (logFile.is_open())
    {
        time_t const current = time(nullptr);
        char buffer[26];
        ctime_s(buffer, sizeof(buffer), &current);
        logFile << buffer << message << endl;
    }
}
