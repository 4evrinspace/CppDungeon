#include "enemies/PelagicGrouper/PelagicGrouper.h"
#include "changers/EntityChanger.h"
enemies::PelagicGrouper::PelagicGrouper::PelagicGrouper():
    entity::Enemy("PelagicGrouper",
    {{static_cast<int>(Characteristic::accuracyModifier), 1}, 
    {static_cast<int>(Characteristic::dodge), 5},
    {static_cast<int>(Characteristic::defence), 0},
    {static_cast<int>(Characteristic::speed), 6},
    {static_cast<int>(Characteristic::HP), 14},
    {static_cast<int>(Characteristic::maxHP), 14},
    {static_cast<int>(Characteristic::marked), 0},
    {static_cast<int>(Characteristic::turnable), 0},
    {static_cast<int>(Characteristic::movable), 0},
    {static_cast<int>(Characteristic::enemyType), static_cast<int>(EnemyType::Eldritch)},
    {static_cast<int>(Characteristic::minDamage), 1},
    {static_cast<int>(Characteristic::maxDamage), 3},
    {static_cast<int>(Characteristic::criticalDamageChance), 0},
    {static_cast<int>(Resistances::Stun), 10},
    {static_cast<int>(Resistances::Blight), 10},
    {static_cast<int>(Resistances::Bleed), 50},
    {static_cast<int>(Resistances::Debuff), 10},
    {static_cast<int>(Resistances::Move), 10}},

    {std::make_shared<SeawardSlash>(),
     std::make_shared<Spearfishing>()}){}


std::vector<std::vector<char>> enemies::PelagicGrouper::PelagicGrouper::drawAlive(){
    return {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', '@', '@', '@', '@', '@', '@', '@', '@', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', '#', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', '#', '*', '#', '#', '#', ' ', '#', '*', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '#', '*', '*', '*', '#', ' ', ' ', '#', '#', ' ', ' ', ' ', '*', '#', '#', '%', '%', '%', '#'},
        {'#', '*', '#', '*', '*', '#', '*', '#', '#', '#', '#', '#', '#', '#', '*', '*', '*', '*', '*', ' '},
        {'#', '#', '*', '%', '%', '#', '*', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '*', '#', ' ', ' ', '#'},
        {' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', '#', '%', '#', ' ', '#', '#', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', '#', '#', ' ', ' ', '#', '#', ' ', ' ', '#', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' '}
    };
}

//       #***#         
//       ****##        
//   #*### #*#         
//  #***#  ##   *##%%%#
// #*#**#*#######***** 
// ##*%%#*#     ##*#  #
//   #          ####   
//      #####          
//     #####           
//    #%# ## ***       
//    ##  ##  #*       
//   #        #  #     
//      #              
//   #          #      
