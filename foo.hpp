#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    // Twoja implementacja tutaj
    std::for_each(people.begin(), people.end(), [](Human& a) { a.birthday(); });

    auto it = retval.rbegin();


    std::for_each(people.begin(), people.end(), [&](Human a) {
        *it = a.isMonster() ? 'n' : 'y';
        ++it;
    });

    return retval;
}
