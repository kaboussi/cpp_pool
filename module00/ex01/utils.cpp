#include "utils.h"

bool isAllDigit(std::string strNumber) {
    for (std::size_t i = 0; i < strNumber.length(); ++i) {
        if (std::isdigit(strNumber[i]) == false) {
            return false;
        }
    }
    return true;
}

bool isValidPhoneNumber(std::string strNumber) {
    bool isPlus = false;
    if (strNumber[0] == '+') {
        isPlus = true;
        strNumber = strNumber.substr(1);
    } else if (strNumber[0] != '0')
        return false;
    if (!isAllDigit(strNumber))
        return false;
    if (isPlus && (strNumber.length() >= 10 && strNumber.length() <= 13))
        return true;
    return strNumber.length() == 10;
}

std::string truncateString(std::string str) {
    if (str.length() < 10) {
        return str;
    }
    std::string buffer = str.substr(0, 9);
    buffer += '.';
    return buffer;
}

std::string getInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt << "\t";
    std::getline(std::cin, input);
    if (std::cin.eof() || isStringEmpty(input)) {
        std::cerr << "Error: element can't be empty" << std::endl;
        exit(EXIT_FAILURE);
    }
    return input;
}

bool isStringEmpty(const std::string& str) {
    char blanks[] = " \t\n";
    size_t start;
	for (start = 0; start < str.length(); start++) {
        if (std::strchr(blanks, str[start]) == NULL)
            break ;
	}
    return start == str.length();
}