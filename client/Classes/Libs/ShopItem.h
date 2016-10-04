/*
 Bang Russian Roulette (client) - This is real online and multiplayer game published at Google Play.
 Copyright (C) 2016  Alexander Shniperson
 Email: alex.shniperson@gmail.com
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __BrrClient__ShopItem__
#define __BrrClient__ShopItem__

#include "cocos2d.h"
#include "ui/UIWidget.h"

USING_NS_CC;
using namespace ui;

class ShopItem: public Widget {
public:
    static ShopItem* create(const std::string &itemImage, const std::string &itemName, const std::string &itemDescription, int amount, int cost);
    bool init(const std::string &itemImage, const std::string &itemName, const std::string &itemDescription, int amount, int cost);
    void setSelection(bool value);
    void setAmountVisible(bool value);
    const std::string& getItemName();
    const std::string& getItemDescription();
    int getItemCost();
private:
    enum SceneTags {
        bgImageTag = 100,
        itemImageTag,
        amountImageTag
    };
    int _amount = 0;
    std::string _itemName = "";
    std::string _itemDescription = "";
    int _cost = 0;
};

#endif /* defined(__BrrClient__ShopItem__) */