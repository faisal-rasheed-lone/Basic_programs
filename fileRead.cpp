#include<fstream>
#include<iostream>
#include<string>
int main()
{

    std::ifstream infile;
    infile.open("rough.txt",std::ios::in);
    if(!infile)
        std::cout<<"file does't exist"<<std::endl;
    else
    {
        std::string str="i am in love with c++";
        std::getline(infile,str);
        infile>>str;
        std::cout<<str;

        if(infile.eof())
            std::cout<<"end of file ";
        infile.close();

    }

    return 0;
}
