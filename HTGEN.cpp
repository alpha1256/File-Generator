#include <fstream>
#include <iostream>
#include <string>
//#include <boost/algorithm/string.hpp>
#include "HTGEN.h"

void HTMLGen()
{
    std::string filename;
    std::ofstream outfile;
    std::cout << "Enter the name of the HTML file that you want to generate :";
    std::cin >> filename;
    std::string outputname = filename + ".html";
    outfile.open(outputname.c_str());
    outfile << "<HTML>\n<HEAD>\n<TITLE>\n\n</TITLE>\n\n</HEAD>\n<BODY>\n\n</BODY>\n</HTML> ";
    outfile.close();
}

void cheaders()
{
    std::string filename;
    std::ofstream outfile;
    std::cout << "Enter the name of the C++ header file that you want to generate :";
    std::cin >> filename;
    std::string outputname = filename + ".h";
    outfile.open(outputname.c_str());
    for (int i =0; i < filename.size(); i++ )
        filename.at(i) = toupper(filename.at(i));

    outfile << "#ifndef " << filename << "_H_INCLUDED" <<std::endl;
    outfile << "#define " << filename << "_H_INCLUDED" <<std::endl;
    outfile << "\n#endif " <<std::endl;

}


