
#include<fstream>
#include<iostream>
#include<string>
int main()
{

    std::fstream outfile;
    outfile.open("rough.txt",std::ios::app);
    if(!outfile)
        std::cout<<"file does't exist"<<std::endl;
    else
    {
        std::string str="";
        std::cout<<"enter data to be inserted in file"<<std::endl;
        std::getline(std::cin,str);
        outfile<<str;
        outfile.close();

    }

    return 0;
}
