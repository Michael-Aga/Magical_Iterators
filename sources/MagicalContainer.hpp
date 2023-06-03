#pragma once
#include <stdio.h>
#include <vector>
#include <string>

namespace ariel
{
    class MagicalContainer
    {
    private:
        int mySize;
        std::vector<int> myContainer;

    public:
        void addElement(int val);
        void removeElement(int val);
        int size();

        class AscendingIterator
        {
        public:
            AscendingIterator(MagicalContainer myMagical) {}
            AscendingIterator() {}
            AscendingIterator(const AscendingIterator &other) {}

            AscendingIterator begin();
            AscendingIterator end();
            AscendingIterator operator++();
            AscendingIterator operator++(int);
            bool operator>(AscendingIterator other);
            bool operator<(AscendingIterator other);
            bool operator==(AscendingIterator other);
            bool operator!=(AscendingIterator);
            int operator*();
        };

        class SideCrossIterator
        {
        public:
            SideCrossIterator(MagicalContainer) {}
            SideCrossIterator() {}
            SideCrossIterator(const SideCrossIterator &other) {}

            SideCrossIterator begin();
            SideCrossIterator end();
            SideCrossIterator operator++();
            SideCrossIterator operator++(int);
            bool operator==(SideCrossIterator other);
            bool operator!=(SideCrossIterator);
            int operator*();
        };

        class PrimeIterator
        {
        public:
            PrimeIterator(MagicalContainer) {}
            PrimeIterator() {}
            PrimeIterator(const PrimeIterator &other) {}

            PrimeIterator begin();
            PrimeIterator end();
            PrimeIterator operator++();
            PrimeIterator operator++(int);
            bool operator==(PrimeIterator other);
            bool operator!=(PrimeIterator);
            int operator*();
        };

        AscendingIterator begin(std::string);
        AscendingIterator end(std::string);
    };
}