#include <fstream>
#include <iostream>
#include <string>

void file_replace_all(const char *filename, std::string find, std::string replace)
{
    std::string copy_filename = filename;
    std::string line;
    std::ifstream file;
    std::ofstream copy;

    file.open(filename);
    if (!file.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return;
    }

    copy_filename.append(".replace");
    copy.open(copy_filename.c_str());
    if (!copy.is_open())
    {
        file.close();
        std::cerr << "Error opening file" << std::endl;
        return;
    }

    while (std::getline(file, line))
    {
        while (line.find(find) != std::string::npos)
        {
            int pos = line.find(find);
            line.erase(pos, find.length());
            line.insert(pos, replace);
        }
        copy << line << std::endl;
    }
    file.close();
    copy.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cerr << "Usage: ./replace <filename> <find> <replace>" << std::endl;
    else
        file_replace_all(argv[1], argv[2], argv[3]);
}