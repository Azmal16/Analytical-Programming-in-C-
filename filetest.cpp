#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile;                   // declaration of file pointer named outfile
    outfile.open("filename", ios::out); // opens file named "filename" for output
    outfile << "Hello\n";               //saves "Hello" to the outfile with the insertion operator
    outfile << "Peter\n";
    outfile.close(); // closes file; always do this when you are done using the file
    return 0;
}