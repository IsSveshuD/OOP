#include "Swapper.h"
#include <sstream>
#include <vector>


inline std::string swapAdjacentWords(const std::string& sentence) {
    // ��������� ����������� �� �����
    std::istringstream iss(sentence);
    std::vector<std::string> words(std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>());

    // ������ ������� ������ ��� �������� �����
    for (size_t i = 0; i < words.size() - 1; i += 2) {
        std::swap(words[i], words[i + 1]);
    }

    // �������� ������� ����������� �� ����
    std::ostringstream oss;
    std::copy(words.begin(), words.end() - 1, std::ostream_iterator<std::string>(oss, " "));
    oss << words.back();

    return oss.str();
}