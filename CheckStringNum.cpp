#include<iostream>

using namespace std;

bool CheckStringNum(string value)
    {
        char *end;
        strtol( value.c_str(), &end, 10 );
        if ( *end == '\0' )
        {
        return true;
        }
        else
        {
        return false;   
        }
    }