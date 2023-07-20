#include <iostream>

#include "alpaca/client.h"
#include "alpaca/config.h"

using namespace std;

int main(int argc, char* argv[]){
    cout << "Starting trading" << endl;

    auto env = alpaca::Environment();
    cout << env.getAPIDataURL() << endl;
    if(auto status = env.parse(); !status.ok()){
        cout << "Error parsing config from environment: "
             << status.getMessage()
             << endl;
        return status.getCode();
    }
    auto client = alpaca::Client(env);

    auto bars_response = client.getStockBars(
        {"AAPL"},
        "2020-04-01T09:30:00-04:00",
        "2020-04-03T09:30:00-04:00"
    );
    if(auto status = bars_response.first; !status.ok()){
       cerr << "Error getting bars information: " << status.getMessage() << endl;
       return status.getCode();
    }
    auto bars = bars_response.second.bars["AAPL"];
    for(auto& i : bars){
        cout << "Start price " << i.open_price << endl;
    }

    return 0;
}