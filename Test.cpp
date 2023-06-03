#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("AscendingIterator && MagicalContainer check")
{
    MagicalContainer container;
    CHECK(container.size() == 0);

    container.addElement(10);
    CHECK(container.size() == 1);

    container.removeElement(10);
    CHECK(container.size() == 0);

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ai);
    MagicalContainer::AscendingIterator ai;

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ai2 = ai);
    MagicalContainer::AscendingIterator ai2 = ai;

    MagicalContainer::AscendingIterator ai3;
    ai3 = ai;
    CHECK(!(ai3 != ai));

    CHECK(ai != ai2);

    ai3 = container.begin("ascending");
    CHECK(ai != ai3);

    CHECK(ai3 > ai);
    CHECK(ai < ai3);

    container.addElement(5);
    ai3 = container.begin("ascending");
    CHECK(*ai3 == 5);
    container.removeElement(5);

    ai3 = container.begin("ascending");
    CHECK(*ai3 == 0);

    ++ai3;
    CHECK(ai3 == container.end("ascending"));
}

TEST_CASE("SideCrossIterator check")
{
    MagicalContainer container;

    CHECK_NOTHROW(MagicalContainer::SideCrossIterator ai);
    MagicalContainer::SideCrossIterator ai;

    CHECK_NOTHROW(MagicalContainer::SideCrossIterator ai2 = ai);
    MagicalContainer::SideCrossIterator ai2 = ai;

    MagicalContainer::SideCrossIterator ai3;
    ai3 = ai;
    CHECK(!(ai3 != ai));
    CHECK(ai != ai2);
}

TEST_CASE("PrimeIterator check")
{
    MagicalContainer container;

    CHECK_NOTHROW(MagicalContainer::PrimeIterator ai);
    MagicalContainer::PrimeIterator ai;

    CHECK_NOTHROW(MagicalContainer::PrimeIterator ai2 = ai);
    MagicalContainer::PrimeIterator ai2 = ai;

    MagicalContainer::PrimeIterator ai3;
    ai3 = ai;
    CHECK(!(ai3 != ai));

    CHECK(ai != ai2);
}