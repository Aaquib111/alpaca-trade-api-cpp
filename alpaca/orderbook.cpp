//TODO DEFINE fromJSON
#include "alpaca/orderbook.h"

#include "alpaca/json.h"
#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"

#include "glog/logging.h"

namespace alpaca {
    Status LastOrderBook::fromDocument(
        const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& d
    ){
        PARSE_VECTOR_DOUBLES_IN_DICT(ask_prices, "a", "p")
        PARSE_VECTOR_DOUBLES_IN_DICT(ask_quantity, "a", "s")
        PARSE_VECTOR_DOUBLES_IN_DICT(bid_prices, "b", "p")
        PARSE_VECTOR_DOUBLES_IN_DICT(bid_quantity, "b", "s")

        return Status();
    };

    Status LastOrderBooks::fromJSON(const std::string& json){
        rapidjson::Document d;

        if(d.Parse(json.c_str()).HasParseError()){
            return Status(1, "Error parsing orderbook information");
        }
        if(!d.IsObject()){
            return Status(1, "Deserialized JSON but it wasn't an OrderBook");
        }
        auto& orderbooks_obj = d["orderbooks"];

        for(auto symbol_itr = orderbooks_obj.MemberBegin(); symbol_itr != orderbooks_obj.MemberEnd(); ++symbol_itr){
            LastOrderBook lastOrderBook;
            if(auto status = lastOrderBook.fromDocument(symbol_itr->value.GetObject()); !status.ok()){
                return status;
            } 
            orderbooks[symbol_itr->name.GetString()] = lastOrderBook;
        }
        return Status();
    };

}