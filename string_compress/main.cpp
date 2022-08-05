#include <string>
#include <vector>
#include <iostream>


int solution(std::string s) 
{
    int answer = s.length();
    int min = s.length();

    for (int str_size = 1; str_size <= s.length(); i++)
    {
        for(int pos = 0; pos < s.length(); pos++)
        {
            std::string pivot_str;
        }
    }

    return answer;
}




























































int main()
{
    std::string input1 = "aabbaccc";
    int result;


    result = solution(input1);
    std::cout << result << "\n";
    // 7
}