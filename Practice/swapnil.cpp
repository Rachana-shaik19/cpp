#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <regex>

int main(int argc, char* argv[]) {

if (argc != 4) {
std::cerr << "Usage: ./program inputfile extracteddatadilename pcapfilename" << std::endl;
return 1;
}



std::ifstream file(argv[1]);
std::ofstream outfile(argv[2], std::ios::app);


if (!file.is_open()) {
std::cerr << "Failed to open the input file." << std::endl;
return 1;
}


if (!outfile.is_open()) {
std::cerr << "Failed to open the output file." << std::endl;
return 1;
}



std::string line;
while (std::getline(file, line)) {
if (line.find("0000:") != std::string::npos || line.find("0010:") != std::string::npos) {
line.erase(std::remove(line.begin(), line.end(), '-'), line.end());


size_t start = line.find('[');
size_t end = line.find(']');
if (start != std::string::npos && end != std::string::npos && start < end) {
line.erase(start, end - start + 1);
}


line = std::regex_replace(line, std::regex("\\s+"), " ");

outfile << line << std::endl;
}
}



file.close();
outfile.close();


std::string command = "\"C:\\Program Files\\Wireshark\\text2pcap.exe\" -e 0x0800 \"" + 
                    std::string(argv[2]) + "\" \"" + std::string(argv[3]) + "\"";


int result = std::system(command.c_str());


if (result == 0) {
    std::cout << "Packet Processing and Conversion text to pcap completed successfully." << std::endl;
    } else {
    std::cerr << "Conversion failed." << std::endl;
}
return 0;
}
