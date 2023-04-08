#include "library.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    const int MAX_LINE_LENGTH = 100; 
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH]; 

    ifstream file1("file1.txt"); 
    ifstream file2("file2.txt"); 

    int line_number = 1; 

    while (file1.getline(line1, MAX_LINE_LENGTH) && file2.getline(line2, MAX_LINE_LENGTH)) 
    {
        if (strcmp(line1, line2) != 0)
        {
            cout << "Line " << line_number << ":" << endl; 
            cout << "File 1: " << line1 << endl;
            cout << "File 2: " << line2 << endl; 
            break; 
        }

        line_number++; 
    }

    file1.close(); 
    file2.close(); 

    return 0;
}