#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

#define Total_OR NULL
#define In NULL

int Offered(int type, int order){
    if(type == 1){
        if(order == 1){
            cout << "Oh Yummy Your order is Melon :) \n";
            Total_OR[In] = Total_OR +  "Melon"; 
        } 
        else if(order == 2){
            cout << "Oh Yummy Your order is Carrot :) \n";
        } 
        else cout << "---- Sorry Uncorrect Order";
    }
    if(type == 2){
        if(order == 1){
            cout << "Oh Yummy Your order is Cake :) \n";
        } 
        else if(order == 2) {
            cout << "Oh Yummy Your order is Chocolate :)  \n";
        }
        else cout << "---- Sorry Uncorrect Order";
    }
    if(type == 3){
        if(order == 1) {
            cout << "Oh Yummy Your order is Cofee\n";
        }
        else if(order == 2){
            cout << "Oh Yummy Your order is Tea\n";
        }
        else cout << "---- Sorry Uncorrect Order";
    }
    if(type == 4){
        if(order == 1) {
            cout << "Oh Yummy Your order is Steak :)\n";
        }
        else if(order == 2) {
            cout << "Oh Yummy Your order is Biryani :)\n";
        }
        else cout << "---- Sorry Uncorrect Order";
    }
    cout << "---------------- Dou You Wanna Offer Again :) ----------------------\n";
    string answer;
    cin >> answer ;
    if (answer == "yes" or answer == "Yes") return 1;
    return 0;
}

int functional(string test, string name){
    int is_again = 0, ret , num;
    cout << "\n----------- So What Would You like to eat or Drink dear   "<< name <<"   ------------"
    << "\nSalad    ^^    Drinking     &&    Food   &&    Sweets    ???\n";
    cin >> test;
    if(test == "Salad" or test == "salad"  ){
        cout << "\t\t ** Thanks For Selection :)  ** \n";
        cout << "We have these SALADS :\n Melon Salad\n Carrot\n";
        cout << "--------------- Let's Enter Number Of Your Order -----------\n";
        cin >> num; 
        ret = Offered(1, num);
    }
    else if(test == "Sweets"  or test == "sweet"  ){
        cout << "\t\t ** Thanks For Selection :)  ** \n";
        cout << "We have these Sweets :\n Cake\n Chocolate\n";
        cout << "-------------- Let's Enter Number Of Your Order ----------\n";
        cin >> num; 
        ret = Offered(2, num);
    }
    else if(test == "Drinking" or test == "drinking"){
        cout << "\t\t ** Thanks For Selection :)  ** \n";
        cout << "We have these Drinkings:\n Cofee \n Tea\n";
        cout << "------------- Let's Enter Number Of Your Order ---------------\n";
        cin >> num; 
        ret = Offered(3, num);
    }
    else if(test == "Food" or test == "food"){
        cout << "\t\t ** Thanks For Selection :)  ** \n";
        cout << "We have these Foods :\n Steak\n Biryani\n";
        cout << "--------------- Let's Enter Number Of Your Order -------------\n";
        cin >> num; 
        ret = Offered(4, num);
    }
    else if(test == "no" or test == "No"){
        cout << "  !   You are always Welcome Dear client :) \n" ;
        return 0;
    }
    else{
        cout << "__________The Thing You Chose Is not exist in our Restuarant :( _______________\n";
    }
    is_again = ret;
    return is_again;
}

int main(){
    string name, pro = "--- Enter Your Name Dear Client :)\n", offer , test;
    int flag_OFFER = 0;
    cout << pro;
    cin >> name;
    cout << "\t------  " << name <<" Do You Want to Book now  ---------\n";
    cin >> offer;
    if (offer == "yes" || offer == "Yes"){
        cout << "\t\t\tWelcome To Our Restuarant  : ) \n"
        << "\t\t---------- Choose ||  We Have all of them  "" -------- \n"
        << "\tSalad\t\tDrinking\t\tFoods\t\tSweets\n"
        << "\tMelon\t\tCofee\t\t\tSteak\t\tCake\n" << "\tCarrot\t\tTea\t\t\tBiryani\t\tChocolate"; 
        flag_OFFER = 1;
    }
    int again = 0;
    if(flag_OFFER == 1){
        again = functional(test, name);
        while(again != 0){
            again = functional(test, name);  
        }
        cout << "\n------------ We Are Sincerely Happy With Your Visiting Our Dear Client Thanks :) >........\n";
    }
    return 0;
}
