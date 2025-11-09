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


Card::Card(std::string cardNum, 
             std::string Name, 
             int L, 
             std::vector<std::string> Color, 
             std::string Type, 
             int Cos, 
             int Pow,    
             std::string Rar, 
             std::string Var,
             int Coun, 
             std::string Attr,
             std::string Eff,
             bool hasTrigEff, 
             std::string TrigEff,
             std::vector<std::string> KeyW,
             int BlockIco, 
             std::string Art,
	         std::string CardImg)
        : cardNumber(cardNum),
          cardName(Name),
          life(L),
          colors(Color),
          cardType(Type),
          cost(Cos),
          power(Pow),
          rarity(Rar),
          variant(Var),
          counter(Coun),
          attribute(Attr),
          effect(Eff),
          hasTriggerEffect(hasTrigEff),
          triggerEffect(TrigEff),
          keywords(KeyW),
          blockIcon(BlockIco),
          artist(Art),
          dImage(CardImg) {}
