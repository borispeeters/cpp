#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");
    // Sorcerer noName; <-- won't compile
    Victim  jim("Jimmy");
    // Victim victimWithoutName; <-- won't compile
    Peon    joe("Joe");
    // Peon peonWithoutName; <-- won't compile
    Peon    joeAgain(joe);
    Victim  &r_joe(joe);

    std::cout << robert << jim << joe << joeAgain << r_joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(joeAgain);
    robert.polymorph(r_joe);
    return 0;
}