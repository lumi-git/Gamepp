//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef GAMEPP_DEBUG_H
#define GAMEPP_DEBUG_H

#include <string>
class Debug {
public:
    static void log(const char * message);
    static void log(const std::string & message);

};


#endif //GAMEPP_DEBUG_H
