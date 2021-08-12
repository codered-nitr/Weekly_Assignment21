class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        map<int, char> m;
        for (int i = 0; i < order.length(); i++)
        {
            m[i] = order[i];
        }
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                if (j >= words[i + 1].length())
                    return false;

                if (words[i][j] != words[i + 1][j])
                {
                    int currentWord = words[i][j] - 'a';
                    int nextWord = words[i + 1][j] - 'a';
                    if (m[currentWord] > m[nextWord])
                        return false;
                    else
                        break;
                }
            }
        }
        return true;
    }
};
