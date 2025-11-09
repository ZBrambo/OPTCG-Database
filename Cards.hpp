#ifndef CARDS_HPP
#define CARDS_HPP

#include <string>
#include <vector>
#include <iostream>

class Card {
    //PRIVATE ATTRIBUTES
    private:
        std::string cardNumber;
        std::string cardName;
        int life;
        std::vector<std::string> colors;
        std::string cardType;
        int cost;
        int power;
        std::string rarity;
        std::string variant;
        int counter;
        std::string attribute;
        std::string effect;
        bool hasTriggerEffect;
        std::string triggerEffect;
        std::vector<std::string> keywords;
        int blockIcon;
        std::string artist;
        std::string cardImage;
    
    //PUBLIC METHODS
    public:
    //Default constructor
        Card();
        Card(std::string cardNum, 
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
            std::string CardImg);


    //Getters
        std::string getCardNumber() const { return cardNumber; }
        std::string getCardName() const { return cardName; }
        int getLife() const { return life; }
        std::vector<std::string> getColors() const { return colors; }
        std::string getType() const { return cardType; }
        int getCost() const { return cost; }
        int getPower() const { return power; }
        std::string getRarity() const { return rarity; }
        std::string getVariant() const { return variant; }


        int getCounter() const { return counter; }
        std::string getAttribute() const { return attribute; }
        std::string getEffect() const { return effect; }
        bool getTrigger() const { return hasTriggerEffect; }
        std::string getTriggerEffect() const { return triggerEffect; }
        std::vector<std::string> getKeywords() const { return keywords; }
        int getBlockIcon() const { return blockIcon; }
        std::string getArtist() const { return artist; }
        std::string getCardImage() const { return cardImage; }
};

#endif // CARDS_HPP