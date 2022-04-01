#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 1;
    if (a = 1)
    {
        cout << "Installing" << endl;

        ifstream config(argv[1]);

        cout << "Checking config.." << endl;

        if (!config)
        {
            cout << "UHH WE FOUND ERROR LOL DIR NONO" << endl;
            return -1;
        }

        cout << "Config verfied getting compilation scripts" << endl;

        string configLine;
        string srcDir;
        string compiler;
        string args;
        string name;
        string dir;
        
        while (getline(config, configLine))
        {
            if (configLine == "#bin, prebin")
            {
                cout << "Installing prebuilt binary..." << endl;
                getline(config, name);
                getline(config, dir);
                string incmd = "cp " + dir + "/binarys/" + name + " /usr/bin";
                system(incmd.c_str());
                return 0;
            }

            if (configLine == "#compiler")
            {
                getline(config, configLine);

                if (configLine == "")
                {
                    cout << "CONFIG COMPILE NOTHIN" << endl;
                    return -1;
                }

                compiler = configLine;
            } else if (configLine == "#srcDir")
            {
                getline(config, srcDir);
            } else if (configLine == "#args")
            {
                getline(config, args);
            } else if (configLine == "#outBin")
            {
                getline(config, name);
            }
        }

        cout << "Completed verfiying! installing this may take a while!" << endl;
        string st;
        if (args == "Cmd, self:skip")
        {
            st = compiler + " " + srcDir + " " + "-o " + name;
        } else {
            st = compiler + " " + srcDir + " " + args + "" + "-o " + name;
        }
        const char *str = st.c_str();
        string st2 = "sudo cp " + name + " /usr/bin";
        const char *install = st2.c_str();
        system(str);
        system(install);

        cout << "Installed!" << endl;

    }

    return 0;
}
