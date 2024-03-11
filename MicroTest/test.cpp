#include <iostream>
#include <vector>
#include <string>
#include <regex>

std::vector<std::string> find(std::string[], int);
std::vector<std::string> find2(std::string[], int, std::vector<std::string>);

int main() {
    std::string words[7] = {"hello", "jello", "mello", "main", "helle", "helio", "heppo"};
    std::vector<std::string> result = find(words, 7);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }
    std::cout << std::endl;
    std::vector<std::string> text;
    text.push_back("hello");
    result = find2(words, 7, text);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}

std::vector<std::string> find(std::string arr[], int size) {
    std::vector<std::string> result;
    for (int i = 0; i < size; i++) {
        if (std::regex_match(arr[i], std::regex("(hell)[[:alpha:]]{1}")) || std::regex_match(arr[i], std::regex("[[:alpha:]]{1}(ello)")) || arr[i] == "hello") {
            result.push_back(arr[i]);
        }
    }
    return result;
}

std::vector<std::string> find2(std::string arr[], int size, std::vector<std::string> word) {
    std::vector<std::string> result;
    int count;
    for (int i = 0; i < size; i++) {
        count = 0;
        if (arr[i] == word[0]) {
            result.push_back(arr[i]);
        } 
        else {
            std::string text = arr[i];
            for (int j = 0; j < word[0].size(); j++) {
                if (text[j] != word[0][j]) {
                    count++;
                }
            }
            if (count < 2) {
                result.push_back(arr[i]);
            }
        }
    }
    return result;
}
