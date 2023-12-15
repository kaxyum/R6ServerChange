#include "Utils.h"
#include <string>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <cstring>
#include <thread>

std::string Utils::getFileUsername()
{
    std::string username;
    for (auto it = std::filesystem::current_path().begin(); it != std::filesystem::current_path().end(); ++it)
    {
        if (*it == "Users" && std::next(it) != std::filesystem::current_path().end())
        {
            username = std::next(it)->string();
            break;
        }
    }
    return username;
}

void Utils::setServer(std::string server)
{
    const std::string path = "C:\\Users\\" + getFileUsername() + "\\OneDrive\\Documents\\My Games\\Rainbow Six - Siege\\c2a5177d-4109-45a9-9b55-d21639583ddf\\GameSettings.ini";
    std::ifstream configFile(path);
    std::ostringstream updatedConfig;
    std::string line;
    while (std::getline(configFile, line))
    {
        if (line.find("DataCenterHint") != std::string::npos)
        {
            if(server != "default") {
                updatedConfig << "DataCenterHint=playfab/" + server + "\n";
            }else{
                updatedConfig << "DataCenterHint=" + server + "\n";
            }
        }else{
            updatedConfig << line << "\n";
        }
    }
    configFile.close();
    std::ofstream updatedConfigFile(path);
    updatedConfigFile << updatedConfig.str();
}

bool Utils::isRunning()
{
    FILE* pipe = _popen("tasklist /FI \"IMAGENAME eq RainbowSix.exe\" 2>&1", "r");
    if (pipe == nullptr)
    {
        return false;
    }
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr)
    {
        if (strstr(buffer, "RainbowSix.exe") != nullptr)
        {
            _pclose(pipe);
            return true;
        }
    }
    _pclose(pipe);
    return false;
}

void Utils::openR6()
{
    std::string feather = R"(C:\Program Files (x86)\Ubisoft\Ubisoft Game Launcher\games\Tom Clancy's Rainbow Six Siege\RainbowSix.exe)";
    std::string command = "start \"\"";
    command += " \"" + feather + "\"";
    std::thread launchGameThread([command]() {
        system(command.c_str());
    });
    launchGameThread.detach();
}

void Utils::closeR6()
{
    system("taskkill /F /IM RainbowSix.exe");
}