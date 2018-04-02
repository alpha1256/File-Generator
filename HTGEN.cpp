#include <fstream>
#include <iostream>
#include <string>
#include "HTGEN.h"

///HTML
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

///C++ headers
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

///JAVA
void javaGen()
{
    std::string filename;
    std::ofstream outfile;
    std::cout << "Enter the name of Java file that you want to generate :";
    std::cin >> filename;
    std::string outputname = filename + ".java";
    outfile.open(outputname.c_str());
    outfile << "import.java.util.scanner " <<std::endl;
    outfile << "class " <<filename<< "{ " <<std::endl;
    outfile << "\tpublic static void main(String[] argv){\n" <<std::endl;
    outfile << "\t}\n}" <<std::endl;
}


