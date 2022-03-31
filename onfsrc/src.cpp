#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string ag1(argv[1]);
    string ag2(argv[2]);

    if (ag1 == "--getrepo") {
        cout << "cloneing repo...." << endl;
        string cmd = "git clone " + ag2 + " -odir repo";
        system(cmd.c_str());
        cout << "installing and cleaning up!" << endl;
        system("basePkg repo/*.cfg");
        system("sudo rm repo -r");
    }   

    return 0;
}