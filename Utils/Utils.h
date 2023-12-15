#ifndef R6SERVERCHANGE_UTILS_H
#define R6SERVERCHANGE_UTILS_H

#include <string>

class Utils {
public:
    std::string getFileUsername();
    void setServer(std::string server);
    bool isRunning();
    void openR6();
    void closeR6();
};


#endif
