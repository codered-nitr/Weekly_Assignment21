bool ispar(string x)
{
    stack<char> s;
    char c;

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            s.push(x[i]);
        }

        if (s.empty())
            return false;

        switch (x[i])
        {
        case ')':
            c = s.top();
            s.pop();
            if (c == '{' || c == '[')
                return false;
            break;

        case '}':
            c = s.top();
            s.pop();
            if (c == '(' || c == '[')
                return false;
            break;

        case ']':
            c = s.top();
            s.pop();
            if (c == '(' || c == '{')
                return false;
            break;
        }
    }
    return (s.empty());
}