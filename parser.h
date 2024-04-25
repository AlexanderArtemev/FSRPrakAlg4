#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>
#include "items.h"

class Parser {
public:
    static std::vector<Items> input(const std::string& filename);
};

#endif
