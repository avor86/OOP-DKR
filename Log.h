#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class Logger
{
    std::ofstream logFile;

public:
    Logger(const std::string&);
    void Write(const std::string&);
};

#endif
