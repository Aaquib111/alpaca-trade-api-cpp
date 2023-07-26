#pragma once

#include <unordered_map>
#include <vector>

#include "alpaca/status.h"
#include "rapidjson/document.h"

namespace alpaca{

    class LastOrderBook{
        public:
            Status fromDocument(
                const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& d
            );

        public:
            std::vector<double> ask_prices;
            std::vector<double> ask_quantity;
            std::vector<double> bid_prices;
            std::vector<double> bid_quantity;
    };

    class LastOrderBooks{
        public:
            Status fromJSON(const std::string& json);
        
        public:
            std::unordered_map<std::string, LastOrderBook> orderbooks;
    };
};