#include <iostream>
#include <string>

using namespace std;
struct employee
{
    char name[10]={'s','o'};
    int age;
    double salary;

};
employee display(employee e2)
{
    e2.age=555;
    return e2;

}

int main()
{
    employee e1,e2,e3;
    //e2.name="faisallll";
    e2.age=20;
    e2.salary=41.2;
    e3=display(e2);
    e1.age=50;
    cout<<e3.name<<" "<<e3.age<<"  "<<e3.salary<<endl;

    e1.salary=11.0f;
    cout<<e1.name<<" "<<e1.age<<"  "<<e1.salary<<endl;
    return 0;
}
