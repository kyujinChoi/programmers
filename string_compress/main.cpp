#include <string>
#include <vector>
#include <iostream>


std::string solution(std::string s) 
{
    int answer = s.length();
    int min = s.length();
    std::string ret_str;
    for (int str_size = 1; str_size <= s.length(); str_size++)
    {
        std::string pivot_str = s.substr(0, str_size);
        int find_idx = str_size;
        int same_cnt = 1;
        while(1)
        {
            if(find_idx > s.length() / 2)
                return ret_str;

            std::string find_str = s.substr(find_idx, str_size);

            if(pivot_str == find_str)
            {
                same_cnt++;
                pivot_str = s.substr(find_idx + str_size, str_size);

            }
            else
            {

            }
            find_idx += str_size;
        }
        std::cout << "ret_str : " << ret_str << std::endl;
    }

    return ret_str;
}


int main()
{
    std::string input1 = "aabbaccc";
    std::string result;

    std::cout << "input : " << input1 << std::endl;
    result = solution(input1);
    std::cout << result << "\n";
    // 7
}