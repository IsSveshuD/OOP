#include "Swapper.h"
#include "Test.h"
#include <string>
#include <vector>
#include <sstream>
#include <cassert>

bool testSwapAdjacentWords() {
    std::string inputText = "This is a test sentence.";

    std::string modifiedText = swapAdjacentWords(inputText);

    // ���������, ��� �������� ����� ���������� �������
    assert(modifiedText == "is This a sentence. test");

    return true;
}
