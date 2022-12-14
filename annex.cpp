//
// Created by natha on 13/12/2022.
//

#include "annex.h"

#include <iostream>
#include <random>

using namespace std;

int createRandomValue(const int valMax)
{

    const int rangeFrom = 0;

    random_device                  rand_dev;
    default_random_engine          generator(rand_dev());
    uniform_int_distribution<int>  distr(rangeFrom, valMax);

    return distr(generator);
}
