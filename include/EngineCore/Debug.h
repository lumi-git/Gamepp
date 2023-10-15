//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef GAMEPP_DEBUG_H
#define GAMEPP_DEBUG_H

#include <string>

namespace Gamepp {
class Debug {
public:
    static void Logger(const char * message);
    static void Logger(const std::string & message);

};

}
#endif //GAMEPP_DEBUG_H
