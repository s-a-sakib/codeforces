#include <iostream>
#include <string>
#include <vector>

int countDifferentChars(const std::string& word1, const std::string& word2) {
    int count = 0;
    for (size_t i = 0; i < word1.length(); ++i) {
        if (word1[i] != word2[i]) {
            ++count;
        }
    }
    return count;
}

std::string findClosestWord(const std::string& misspelledWord, const std::vector<std::string>& dictionary) {
    
    return closestWord;
}

int main() {
    std::string misspelledWord;
    std::cin >> misspelledWord;

    int n;
    std::cin >> n;

    std::vector<std::string> dictionary(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> dictionary[i];
    }

    std::string closestWord = findClosestWord(misspelledWord, dictionary);
    std::cout << closestWord << std::endl;

    return 0;
}
