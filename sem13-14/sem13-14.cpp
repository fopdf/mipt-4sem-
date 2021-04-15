// sem13-14.cpp
/*Deleting comments*/


#include <cstdio>
#include <iostream>

FILE* in, * out;

void in_comment(void)
{
    int c, d;
    c = fgetc(in);
    d = fgetc(in);
    while (c != '*' || d != '/')
    {   
        c = d;
        d = fgetc(in);
    }
}


void in_short_comment(void)
{
    int c;
    c = fgetc(in);
    while (c != '\n')
        c = fgetc(in);
    fputc('\n', out);
}


void find_comment(int c)
{
    int d;
    if (c == '/')
        if ((d = fgetc(in)) == '*')
            in_comment();
        else if (d == '/')
            in_short_comment();
        else
        {
            fputc(c, out);
            fputc(d, out);
        }
    else
        fputc(c, out);
}



using namespace std;

int main()
{
    int c;
    char file_name[20];
    char out_file_name[20];

    cout << "Enter input filename: ";
    cin >> file_name;
    in = fopen(file_name, "r");
    if ((in = fopen(file_name, "r")) == NULL)
    {
        return 1;
    }
    cout << "Enter output filename: ";
    cin >> out_file_name;
    out = fopen(out_file_name, "w");
    while ((c = fgetc(in)) != EOF)
    {
        find_comment(c);
    }
    fclose(in);
    fclose(out);
    return 0;
}

