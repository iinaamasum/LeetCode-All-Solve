class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> st;
            if (s.size() < 2) return false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(') st.push(s[i]);
                if (s[i] == '{') st.push(s[i]);
                if (s[i] == '[') st.push(s[i]);
                if (!st.empty())
                {
                    if (s[i] == ')')
                    {
                        cout << st.top();
                        if (st.top() != '('
                            or st.empty()) return false;
                        else st.pop();
                    }

                    if (s[i] == '}')
                    {
                        if (st.top() != '{'
                            or st.empty()) return false;
                        else st.pop();
                    }

                    if (s[i] == ']')
                    {
                        if (st.top() != '['
                            or st.empty()) return false;
                        else st.pop();
                    }
                }
                else return false;
            }
            cout << st.size();
            if (st.size() > 0) return false;
            return true;
        }
};