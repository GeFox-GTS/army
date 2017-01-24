#ifndef ABILITY_H
#define ABILITY_H

    class Ability {
    protected:
        int hitPointsLimit;
        int manaPointsLimit;
        int hitPoints;
        int manaPoints;
        
    public:
        Ability(int hitPointsLimit, int manaPointsLimit);
        ~Ability();

        const int getHitPointsLimit() const;
        const int getHitPoints() const;
        const int getManaPointsLimit() const;
        const int getManaPoints() const;


        void setHitPointsLimit(int hitPointsLimit);
        void setHitPoints(int hitPoints);
        void setManaPointsLimit(int manaPointsLimit);
        void setManaPoints(int manaPoints);
    };

#endif //ABILITY_H