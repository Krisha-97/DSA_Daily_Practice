//LEETCODE PROBLEM NO.: 121

// Ex: 
// 1. I/P: [7, 1, 5, 3, 6, 4]; O/P: 5
//   Logic=price[1] -price[5]  =1-6 = 5

// 2. I/P: [7, 6, 4, 3, 1]; O/P: 0

int maxProfit(vector<int>& prices){
    if(prices.empty())  return 0;
    int max_profit = 0, min_price = prices[0];

    for(int i = 1; i<prices.size(); i++){
        if(prices[i] < min_prices){
            min_price = prices[i];
        }
            int profit = prices[i] - min_price;
            if(max_profit < profit){
                max_profit = profit;
            }
    }
    return max_profit;
}