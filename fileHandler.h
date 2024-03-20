#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
//#include <cstring>
#include <cmath>

class fileHandler
{
private:
    std::string configFile{"dephy.cfg"};
    std::string filename{};
    int fileSizeB{};

    int getFilenameFromConfigFile();
    int create(int size, std::string &filePath);
    int load();
    int write_raw(int address, const std::string &String);
    int read_raw(int address, int length, std::string &String);
    int write(std::string &filePath);
    int list();
    int read(const std::string &filePath);
    int erase();
    void WriteStringToEndOfFile(const std::string &str);
    std::string ReadStringFromEndOfFile(const std::string &fname);

public:
    fileHandler(){};
    fileHandler(const std::string &filename, int fileSizeB)
        : filename(filename), fileSizeB(fileSizeB) {}
    int parseCommandlineArguments(int argc, char *argv[]);
};