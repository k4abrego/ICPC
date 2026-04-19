#include <iostream>
#include <string>
#include <vector>

using namespace std;

string
powerOfTen(const string &s)
{
    return "10^{" + to_string(s.size() - 1) + "}";
}

string
greatInt(const string &s)
{
    string res;
    res =+ s.at(0);
    int si = stoi(s);
    int i = 0;

    while (si % 10 == 0)
    {
        si /= 10;
        i++;
    }

    string pot = to_string(si);

    if (pot.size() == 1)
    {
        return res + "\\cdot" + "10^{" + to_string(i) + "}";
    }

    res += ".";
    for (size_t j = 1; j < pot.size(); j++)
    {
        res += pot.at(j);
        i++;
    }

    return res + "\\cdot" + "10^{" + to_string(i) + "}";
}

string
formatStr(const string &s)
{
    string sn = " ";
    sn += s;
    vector<string> words;
    int inicio = 0, fin = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            inicio = i;
            for (size_t j = i; j < s.size(); j++)
            {
                if (s[i] == ' ')
                {
                    fin = j;
                    try
                    {
                        stoi(s.substr(inicio,fin));
                    }
                    catch
                    {
                        
                    }
                }
            }
        }
    }
}

int
main ()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);ios_base::sync_with_stdio(false);

    int nLines = 0;
    vector<string> lines;

    cin >> nLines;

    for (int i = 1; i <= nLines; i++)
    {
        string line;
        getline(cin, line);
        lines.push_back(formatStr(line));
    }

    

    //cout << greatInt(lines) << "\n";
    
    return 0;
}
