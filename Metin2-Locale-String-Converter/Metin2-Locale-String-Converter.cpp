#include <iostream>
#include <fstream>
#include <string>
#include <format>
#include <conio.h>

std::ifstream InputFileInit(const std::string& fileName);
std::ofstream OutputFileInit(const std::string& fileName);

int main()
{
    try
    {
        std::ifstream fileList = InputFileInit("file_list.txt");
        std::string fileListLine;

        while (std::getline(fileList, fileListLine))
        {
            if (fileListLine.empty())
                continue;

            std::ifstream inFile = InputFileInit(std::format("./Reference/{}", fileListLine));
            std::ofstream outFile = OutputFileInit(std::format("./Converted/{}", fileListLine));

            std::string line;
            size_t curLineNum {};
            size_t finalLineNum {};

            while (std::getline(inFile, line))
            {
                if (line.empty())
                    continue;

                ++curLineNum;
                if (curLineNum % 2 == 0)
                {
                    ++finalLineNum;
                    std::string filtered;
                    filtered.reserve(line.size());

                    for (const auto& ch : line)
                    {
                        if ('"' == ch || ';' == ch)
                            continue;

                        filtered.push_back(ch);
                    }

                    outFile << finalLineNum << "\t" << filtered << std::endl;
                }
            }

            std::cout << "Processing " << fileListLine << " was successful." << std::endl;

            outFile.close();
            inFile.close();
        }

        fileList.close();

        std::cout << "All available file has been processed successfully. You can close this window.\n";
        std::cout << "Press any key to exit...";
        (void)_getch();
    }
    catch (const std::exception& ex)
    {
        std::cerr << "\nFatal error: " << ex.what() << std::endl;
        std::cerr << "Press any key to exit...";
        (void)_getch();
        return EXIT_FAILURE;
    }
}

std::ifstream InputFileInit(const std::string& fileName)
{
    std::ifstream file (fileName, std::ios::in);
    if (!file.is_open())
        throw std::runtime_error("Failed to open file: " + fileName);

    return file;
}

std::ofstream OutputFileInit(const std::string& fileName)
{
    std::ofstream file (fileName, std::ios::out);
    if (!file.is_open())
        throw std::runtime_error("Failed to write file: " + fileName);

    return file;
}
