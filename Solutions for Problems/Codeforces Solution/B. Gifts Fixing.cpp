
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> candies(n);
        vector<int> oranges(n);

        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> oranges[i];
        }

        int minCandies = *min_element(candies.begin(), candies.end());
        int minOranges = *min_element(oranges.begin(), oranges.end());

        long long int moves = 0;

        for (int i = 0; i < n; i++)
        {
            int candiesDiff = candies[i] - minCandies;
            int orangesDiff = oranges[i] - minOranges;
            moves += max(candiesDiff, orangesDiff);
        }

        cout << moves << endl;
    }

    return 0;
}
