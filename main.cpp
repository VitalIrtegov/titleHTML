#include <iostream>
#include <cpr/cpr.h>

int main() {
    std::cout << "Title HTML" << std::endl;

    std::string response, result;
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
    std::cout << r.text << std::endl;

    return 0;
}
