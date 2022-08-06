#include <iostream>
#include <cpr/cpr.h>

int main() {
    std::cout << "Title HTML" << std::endl;

    std::string response, result;
    std::string str1 = "<h1>";
    std::string str2 = "</h1>";
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"),
                               cpr::Header({{"Accept", "text/html"}}));
    response = r.text;

    std::size_t index = response.find(str1) + str1.length();
    result = response.substr(index);
    index = result.find(str2);
    result = result.substr(0, index);

    std::cout << "result: " << result << std::endl;

    //std::cout << "index1: " << index1 << std::endl;
    //std::cout << "index2: " << index2 << std::endl;

    return 0;
}
