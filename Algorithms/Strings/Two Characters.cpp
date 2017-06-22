#include<iostream>
#include<map>
using namespace std;

int main(){
    int len;
    cin>>len;
    string s;
    cin>>s;
     int longestSolution = 0;
        for (int i = 0; i < 26; i++)
        {
            for (int j = i + 1; j < 26; j++)
            {
                char c1 = (char)((int)'a' + i);
                char c2 = (char)((int)'a' + j);

                int currentChar = -1;
                int countChar = 0;
                for (int z = 0; z < len; z++)
                {
                    if (s[z] == c1)
                    {
                        if (currentChar == 1)
                        {
                            currentChar = -1;
                            break;
                        }
                        currentChar = 1;
                        countChar++;
                    }
                    else if (s[z] == c2)
                    {
                        if (currentChar == 2)
                        {
                            currentChar = -1;
                            break;
                        }
                        currentChar = 2;
                        countChar++;
                    }
                }

                if (currentChar != -1 &&
                    countChar > 1 &&
                    countChar > longestSolution)
                {
                    longestSolution = countChar;
                }
            }
        }
    cout<<longestSolution;
}