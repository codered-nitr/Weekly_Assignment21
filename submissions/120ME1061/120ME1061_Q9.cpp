#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<char,int> m;

bool checkWords(string word1, string word2)
{
    if (word2 == word1.substr(0, word2.size()))
        return false;
    int limit = (word1.size() > word2.size()) ? word2.size() : word1.size();
    for (int i = 0; i < limit; i++)
        if (m[word1[i]] < m[word2[i]])
            return true;
        else 
            break;
    return false;
}

bool isValid(vector<string> words, string order)
{
    for (int i = 0; i < words.size() - 1; i++)
        if (checkWords(words[i], words[i + 1]) == false)
            return false;
    return true;
}

int main()
{
    vector<string> words = {"word","world","row"};
    string order = "worldabcefghijkmnpqstuvxyz";

    //Initialise the map
    for (int i = 0; i < order.length(); i++)
        m.insert(pair<char,int> (order[i], i));

    if (isValid(words, order) == true) cout << "true";
    else cout << "false";
    return 0;
}