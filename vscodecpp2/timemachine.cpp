#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    string str;
    int jan=31,feb=0,mar=31,apr=30,may=31,june=30,july=31,aug=31;
    
    if(year>=1919)
    {
        if(year % 400==0 || (year%4==0 && year%100!=0))
        {
            feb=29;
        }
        else {
            feb=28;
        }
        int total=jan+feb+mar+apr+may+june+july+aug;
        total=256-total;
    
        str=to_string(total)+".09."+to_string(year);
        return str;
    }
    else if(year==1918)
    {
        feb=14;
        int total=jan+feb+mar+apr+may+june+july+aug;
        total=256-total;
    
        str=to_string(total)+".09."+to_string(year);
        return str;
    }
    else {
        if(year % 4==0)
        {
            feb=29;
        }
        else {
            feb=28;
        }
        int total=jan+feb+mar+apr+may+june+july+aug;
        total=256-total;
    
        str=to_string(total)+".09."+to_string(year);
        return str;
    }
    
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
