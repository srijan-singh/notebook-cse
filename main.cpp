#include <iostream>
#include <fstream>

using namespace std;

class CodeGenerator{

    int index;
    string line;

    bool has_key(string line, string key)
    {
        bool value = false;
        int line_size = line.size();
        int key_size = key.size();


        for(int i=0; i<line_size; i++)
        {
            if(line[i] == key[0])
            {
                if (line_size >= i+key_size)
                {
                    for(int j=i; j<i+key_size; j++)
                    {
                        if(line[j] == key[j-i])
                        {                    
                            value = true;
                            index = i;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    break;
                }
            }
        }
        return value;
    }

    public:

    void add(string source, string code)
    {
        ifstream read;
        ofstream write;

        read.open(source);
        write.open(source, ios::app);

        if(read.is_open())
        {
            write<<"";
        }

        read.close();
        write.close();
    }

    void write(string source, string destination, string keyword = "")
    {
        ifstream read(source);
        ofstream write(destination);

        bool value = true;

        if(read && write)
        {
            while (getline(read, line))
            {
                if(value)
                {
                    write<<line<<'\n';
                }

                if(keyword!="" and has_key(line, keyword))
                {
                    cout<<"works!"<<endl;
                    value = !value;

                    if(value) // To write the skipped keyword
                    {
                        write<<line<<'\n';
                    }

                }
            }
        }
        
        else
        {
            cout<<"Unable to read";
        }

    }

    void replace(string source, string destination, string find, string replace)
    {
        ifstream read(source);
        ofstream write(destination);

        if(read && write)
        {
            while (getline(read,line))
            {
                if(has_key(line, find))
                {
                    line.replace(index, find.size() ,replace);
                }

                write<<line<<endl;
            }
            
        }

        else
        {
            cout<<"Error replace!!!\n";
        }

        read.close();
        write.close();
    }

};

int main()
{
    string source = R"(C:\Users\Srijanverse\Documents\Semester 6\Website\Semester 6\sem6home.html)";
    string dest = R"(trial.html)";

    string find = "Sub1";
    string replace = "Sub2";

    CodeGenerator cg;
    //cg.replace(source, dest, find, replace); //Works!
    //cg.write(source, dest, "center"); //Works!
    
    return 0;
}