#ifndef SOLVER_H
#define SOLVER_H

#include <vector>
#include "items.h"

class Solver {
public:
    static int ans_k(const std::vector<Items>& items, int N);
private:
    static void ans(const std::vector<Items>& items, int index, int Far, int wFar, int N, int& max);
};

#endif
