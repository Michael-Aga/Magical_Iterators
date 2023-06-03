#include "MagicalContainer.hpp"

using namespace std;
using namespace ariel;

void MagicalContainer::addElement(int)
{
}

void MagicalContainer::removeElement(int)
{
}

int MagicalContainer::size()
{
    return 0;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return MagicalContainer::AscendingIterator(MagicalContainer());
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    return MagicalContainer::AscendingIterator(MagicalContainer());
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++()
{
    return MagicalContainer::AscendingIterator(MagicalContainer());
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++(int)
{
    return MagicalContainer::AscendingIterator(MagicalContainer());
}

bool MagicalContainer::AscendingIterator::operator==(AscendingIterator other)
{
    return false;
}

bool MagicalContainer::AscendingIterator::operator>(AscendingIterator other)
{
    return false;
}

bool MagicalContainer::AscendingIterator::operator<(AscendingIterator other)
{
    return false;
}

bool MagicalContainer::AscendingIterator::operator!=(AscendingIterator)
{
    return false;
}

int MagicalContainer::AscendingIterator::operator*()
{
    return 0;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return MagicalContainer::SideCrossIterator(MagicalContainer());
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return MagicalContainer::SideCrossIterator(MagicalContainer());
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++()
{
    return MagicalContainer::SideCrossIterator(MagicalContainer());
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++(int)
{
    return MagicalContainer::SideCrossIterator(MagicalContainer());
}

bool MagicalContainer::SideCrossIterator::operator==(SideCrossIterator other)
{
    return false;
}

bool MagicalContainer::SideCrossIterator::operator!=(SideCrossIterator)
{
    return false;
}

int MagicalContainer::SideCrossIterator::operator*()
{
    return 0;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return MagicalContainer::PrimeIterator(MagicalContainer());
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    return MagicalContainer::PrimeIterator(MagicalContainer());
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++()
{
    return MagicalContainer::PrimeIterator(MagicalContainer());
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++(int)
{
    return MagicalContainer::PrimeIterator(MagicalContainer());
}

bool MagicalContainer::PrimeIterator::operator==(PrimeIterator other)
{
    return false;
}

bool MagicalContainer::PrimeIterator::operator!=(PrimeIterator)
{
    return false;
}

int MagicalContainer::PrimeIterator::operator*()
{
    return 0;
}

MagicalContainer::AscendingIterator MagicalContainer::begin(string wantedIter)
{
    return AscendingIterator().begin();
}

MagicalContainer::AscendingIterator MagicalContainer::end(string wantedIter)
{
    return AscendingIterator().end();
}