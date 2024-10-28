class Solution
{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;
        vector<int> res;

        while (i < n && j < m)
        {

            while (i + 1 < n && a[i] == a[i + 1])
                i++;

            while (j + 1 < m && b[j] == b[j + 1])
                j++;

            if (a[i] < b[j])
                res.push_back(a[i++]);
            else if (b[j] < a[i])
                res.push_back(b[j++]);
            else
            {

                res.push_back(b[j++]);
                i++;
            }
        }

        while (i < n)
        {

            while (i + 1 < n && a[i] == a[i + 1])
                i++;

            res.push_back(a[i++]);
        }

        while (j < m)
        {

            while (j + 1 < m && b[j] == b[j + 1])
                j++;

            res.push_back(b[j++]);
        }

        return res;
    }
};