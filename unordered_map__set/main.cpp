#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    vector<int> answer;
    unordered_map<string,set<string> > report_map;
    unordered_map<string, int> reported_cnt;

    for(int i = 0 ; i < report.size(); i++)
    {
        int blank = report[i].find(' ');
        string from, to;
        from = report[i].substr(0,blank);
        to = report[i].substr(blank+1);
        
        report_map[from].insert(to);
    }

    for(auto iter : report_map)
    {
        for(auto item : iter.second)
        {
            reported_cnt[item]++;
        }
    }

    for(auto user : id_list)
    {
        int res = 0;
        for(auto item : report_map[user])
        {
            if(reported_cnt[item] >= k) res++;
        }
        answer.push_back(res);
    }
    
    return answer;
}


// #include <string>
// #include <vector>

// using namespace std;

// int solution(string s) {
//     int answer = 0;
//     return answer;
// }

























int main()
{
    std::vector<std::string> input1;
    std::vector<std::string> input2;
    std::vector<int> result;


    input1.push_back("muzi");
    input1.push_back("frodo");
    input1.push_back("apeach");
    input1.push_back("neo");

    input2.push_back("muzi frodo");
    input2.push_back("apeach frodo");
    input2.push_back("frodo neo");
    input2.push_back("muzi neo");
    input2.push_back("apeach muzi");
    input2.push_back("apeach muzi");
    input2.push_back("apeach muzi");
    

    result = solution(input1, input2, 2);
    for(int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << ",";
    }
    // 2 1 1 0
}