#include "Cards.hpp"
#include <string>
#include <vector>
#include <iostream>

//Default constructor
Card::Card()
    : cardNumber(""), 
    cardName(""), 
    life(0), 
    colors({}), 
    cardType(""), 
    cost(0),
	power(0),
    rarity(""), 
    variant(""), 
    counter(0), 
    attribute(""), 
    effect(""),
    hasTriggerEffect(false), 
    triggerEffect(""), 
    keywords({}), 
    blockIcon(0),
    artist(""), 
    cardImage("") {}
