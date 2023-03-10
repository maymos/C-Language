#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif // WINDOWS

#include <iostream>
using namespace std;

std::string get_current_dir()
{
    char buff[FILENAME_MAX];    //Create String buffer to hold path
    GetCurrentDir(buff, FILENAME_MAX);
    string current_working_dir(buff);
    return current_working_dir;
}

int main()
{
    cout<<get_current_dir()<<endl;
}
