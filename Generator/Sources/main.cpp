/**
 * @Author: Victor Sousa <vicostudio>
 * @Email:  victor.sousa@epitech.eu
 * @Date:   14/04/2018 18:09:05
 *
 * @Last modified by:   vicostudio
 * @Last modified time: 06/05/2018 23:07:08
 */

#include <Logger/Manager.h>
#include <Logger/Logger.h>
#include <MainClass.h>

#define PROJECT_NAME std::string("Generator")

int main(int argc, char *argv[]) {
    Log::Manager::setDefaultLevel(Log::Log::eDebug);
    Log::Config::Vector configList;
    Log::Config::addOutput(configList, "OutputConsole");
    Log::Manager::configure(configList);
    Log::Logger logger("Main.cpp");

    MainClass main(argc, argv);
    return main.AMain::Run();
}
