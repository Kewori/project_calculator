#ifndef INPUTOUTPUTFUNCTIONS_H
#define INPUTOUTPUTFUNCTIONS_H
#include <fstream>
#include <string>
#include <map>
#include <vector>
namespace calculator {

    std::vector<std::string> readFromFile(const std::string& path) {
        std::vector<std::string> result;
        std::ifstream fin(path, std::ios::in);
        std::string expr;
        while (std::getline(fin, expr, '\n')) {
            result.push_back(expr);
        }
        return result;
    }

    void writeToFile(const std::string& path, std::map<std::string, std::string>& result) {
        std::ofstream fout(path, std::ios::out);
        for (const auto& item : result) {
            std::string answer = item.second;
            int i = answer.size() - 1;
            while (answer[i] == '0') {
                answer.pop_back();
                --i;
            }
            if (answer[answer.size() - 1] == '.') {
                answer.pop_back();
            }
            fout << item.first << " = " << answer << "\n";
        }
    }
    void writeToFile(const std::string& path, const std::vector<std::string>& result) {
        std::ofstream fout(path, std::ios::out);
        for (const auto& item : result) {
            fout << item << "\n";
        }
    }

}

#endif INPUTOUTPUTFUNCTIONS_H

