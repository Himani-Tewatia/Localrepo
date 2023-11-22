#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int k = 0;
    string line;
    string find;
    char name[25];
    int id = 0;
    float gpa = 0;

    ofstream myfile;
    myfile.open("data.txt");