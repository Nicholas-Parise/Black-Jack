#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>

using namespace std;

void RandCard(int &card1, int &card2, int &card3, int &card4, int &card5,int playertot) {
    int CarRan;

    CarRan = (rand() %13)+1;

    if(CarRan == 1) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {



            cout<<"  _____  "<<endl;
            cout<<" |A .  | "<<endl;
            cout<<" | /.\\ | "<<endl;
            cout<<" |(_._)| "<<endl;
            cout<<" |  |  | "<<endl;
            cout<<" |____A| "<<endl;

            card1 = 11;

        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            if(card1 == 11) {

                card2 = 1;

                cout<<"  _____  "<<endl;
                cout<<" |A .  | "<<endl;
                cout<<" | /.\\ | "<<endl;
                cout<<" |(_._)| "<<endl;
                cout<<" |  |  | "<<endl;
                cout<<" |____A| "<<endl;



            } else {

                cout<<"  _____  "<<endl;
                cout<<" |A .  | "<<endl;
                cout<<" | /.\\ | "<<endl;
                cout<<" |(_._)| "<<endl;
                cout<<" |  |  | "<<endl;
                cout<<" |____A| "<<endl;


                card2 = 11;

            }

        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |A .  | "<<endl;
            cout<<" | /.\\ | "<<endl;
            cout<<" |(_._)| "<<endl;
            cout<<" |  |  | "<<endl;
            cout<<" |____A| "<<endl;




            if(playertot>=11) {

                card3 = 1;

            } else {

                card3 = 11;

            }

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |A .  | "<<endl;
            cout<<" | /.\\ | "<<endl;
            cout<<" |(_._)| "<<endl;
            cout<<" |  |  | "<<endl;
            cout<<" |____A| "<<endl;



            if(playertot>=11) {

                card4 = 1;
            }

            else {
                card4 = 11;
            }

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |A .  | "<<endl;
            cout<<" | /.\\ | "<<endl;
            cout<<" |(_._)| "<<endl;
            cout<<" |  |  | "<<endl;
            cout<<" |____A| "<<endl;



            if(playertot>=11) {

                card5 = 1;
            }

            else {
                card5 = 11;
            }

        }


    }

    else if(CarRan == 2) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |2    | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____2| "<<endl;


            card1 = 2;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |2    | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____2| "<<endl;



            card2 = 2;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |2    | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____2| "<<endl;



            card3 = 2;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |2    | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____2| "<<endl;


            card4 = 2;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |2    | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____2| "<<endl;




            card5 = 2;
        }

    }

    else if(CarRan == 3) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |3    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____3| "<<endl;


            card1 = 3;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |3    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____3| "<<endl;


            card2 = 3;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |3    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____3| "<<endl;


            card3 = 3;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |3    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____3| "<<endl;


            card4 = 3;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |3    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" |____3| "<<endl;


            card5 = 3;
        }


    }

    else if(CarRan == 4) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |4    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____4| "<<endl;


            card1 = 4;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |4    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____4| "<<endl;

            card2 = 4;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |4    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____4| "<<endl;


            card3 = 4;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |4    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____4| "<<endl;


            card4 = 4;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |4    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____4| "<<endl;




            card5 = 4;
        }


    }

    else if(CarRan == 5) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |5    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____5| "<<endl;


            card1 = 5;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |5    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____5| "<<endl;


            card2 = 5;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |5    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____5| "<<endl;


            card3 = 5;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |5    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____5| "<<endl;



            card4 = 5;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |5    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |  ^  | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____5| "<<endl;


            card5 = 5;
        }


    }

    else if(CarRan == 6) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |6    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____6| "<<endl;


            card1 = 6;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |6    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____6| "<<endl;


            card2 = 6;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |6    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____6| "<<endl;


            card3 = 6;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |6    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____6| "<<endl;


            card4 = 6;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |6    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____6| "<<endl;


            card5 = 6;
        }


    }

    else if(CarRan == 7) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |7    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____7| "<<endl;


            card1 = 7;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {
            cout<<"  _____  "<<endl;
            cout<<" |7    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____7| "<<endl;


            card2 = 7;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |7    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____7| "<<endl;


            card3 = 7;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |7    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____7| "<<endl;


            card4 = 7;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |7    | "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |____7| "<<endl;


            card5 = 7;
        }


    }

    else if(CarRan == 8) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |8    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____8| "<<endl;


            card1 = 8;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |8    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____8| "<<endl;

            card2 = 8;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |8    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____8| "<<endl;


            card3 = 8;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |8    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____8| "<<endl;


            card4 = 8;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |8    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" | ^ ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____8| "<<endl;


            card5 = 8;
        }


    }

    else if(CarRan == 9) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |9    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____9| "<<endl;


            card1 = 9;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |9    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____9| "<<endl;

            card2 = 9;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |9    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____9| "<<endl;

            card3 = 9;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |9    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____9| "<<endl;

            card4 = 9;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |9    | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |____9| "<<endl;


            card5 = 9;
        }

    }

    else if(CarRan == 10) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |10 ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |___10| "<<endl;


            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |10 ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |___10| "<<endl;


            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |10 ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |___10| "<<endl;


            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |10 ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |___10| "<<endl;



            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {


            cout<<"  _____  "<<endl;
            cout<<" |10 ^ | "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |^ ^ ^| "<<endl;
            cout<<" |___10| "<<endl;


            card5 = 10;
        }


    }

    else if(CarRan == 11) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |J    | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |____J| "<<endl;


            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |J    | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |____J| "<<endl;


            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |J    | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |____J| "<<endl;


            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |J    | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |____J| "<<endl;


            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |J    | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |____J| "<<endl;


            card5 = 10;
        }



    }

    else if(CarRan == 12) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |Q    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____Q| "<<endl;


            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |Q    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____Q| "<<endl;


            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |Q    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____Q| "<<endl;


            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |Q    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____Q| "<<endl;



            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |Q    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |     | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____Q| "<<endl;


            card5 = 10;
        }



    }

    else if(CarRan == 13) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |K    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____K| "<<endl;


            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |K    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____K| "<<endl;


            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |K    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____K| "<<endl;


            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |K    | "<<endl;
            cout<<" |  x  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____K| "<<endl;


            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            cout<<"  _____  "<<endl;
            cout<<" |K    | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |  X  | "<<endl;
            cout<<" |____K| "<<endl;



            card5 = 10;
        }




    }



}


void CompCard(int &CompCard1, int &CompCard2, int &CompCard3, int &CompCard4, int &CompCard5,int Comptot) {

    int CarRan;

    CarRan = (rand() %13)+1;


    if(CarRan == 1) {

        if(CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 11;

        } else if (CompCard1 != 0&& CompCard2 == 0 && CompCard3 ==0) {

            if(CompCard1 == 11) {

                CompCard2 = 1;

            } else {

                CompCard2 = 11;

            }

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {

            if(Comptot>=11) {

                CompCard3 = 1;

            } else {

                CompCard3 = 11;

            }

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {


            if(Comptot>=11) {

                CompCard4 = 1;
            }

            else {
                CompCard4 = 11;
            }

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

            if(Comptot>=11) {

                CompCard5 = 1;
            }

            else {
                CompCard5 = 11;
            }

        }


    }

    else if(CarRan == 2) {

        if(CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 2;
        } else if (CompCard1 != 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard2 = 2;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {

            CompCard3 = 2;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 2;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

            CompCard5 = 2;
        }

    }

    else if(CarRan == 3) {

        if(CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 3;

        } else if (CompCard1 != 0&&
                   CompCard2 == 0 && CompCard3 ==0) {


            CompCard2 = 3;
        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 ==0) {


            CompCard3 = 3;
        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 3;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 &&
                   CompCard4 != 0 &&
                   CompCard5 ==0) {

            CompCard5 = 3;
        }


    }

    else if(CarRan == 4) {

        if(
            CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {


            CompCard1 = 4;
        } else if (CompCard1 != 0&& CompCard2 == 0 &&
                   CompCard3 ==0) {

            CompCard2 = 4;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 ==0) {

            CompCard3 = 4;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 == 0 &&
            CompCard5 ==0) {

            CompCard4 = 4;

        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 != 0 &&
            CompCard5 ==0) {

            CompCard5 = 4;
        }


    }

    else if(CarRan == 5) {

        if(CompCard1 == 0&&
                CompCard2 == 0 && CompCard3 ==0) {


            CompCard1 = 5;
        } else if (CompCard1 != 0&& CompCard2 == 0 &&
                   CompCard3 ==0) {

            CompCard2 = 5;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 ==0) {

            CompCard3 = 5;

        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 !=0 &&
                   CompCard4 == 0 && CompCard5 ==0) {


            CompCard4 = 5;

        } else if (CompCard1 != 0&& CompCard2 != 0 &&
                   CompCard3 !=0 && CompCard4 != 0 &&
                   CompCard5 ==0) {

            CompCard5 = 5;
        }


    }

    else if(CarRan == 6) {

        if(CompCard1 == 0&&
                CompCard2 == 0 && CompCard3 ==0) {


            CompCard1 = 6;
        } else if (CompCard1 != 0&& CompCard2 == 0 &&
                   CompCard3 ==0) {

            CompCard2 = 6;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 ==0) {

            CompCard3 = 6;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 == 0 &&
            CompCard5 ==0) {

            CompCard4 = 6;

        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 !=0 &&
                   CompCard4 != 0 && CompCard5 ==0) {


            CompCard5 = 6;
        }


    }

    else if(CarRan == 7) {

        if(CompCard1 == 0&& CompCard2 == 0 &&
                CompCard3 ==0) {

            CompCard1 = 7;
        } else if (
            CompCard1 != 0&& CompCard2 == 0 &&
            CompCard3 ==0) {

            CompCard2 = 7;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {


            CompCard3 = 7;
        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 !=0 &&
                   CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 7;

        } else if (
            CompCard1 != 0&&
            CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 &&
            CompCard5 ==0) {

            CompCard5 = 7;
        }


    }

    else if(CarRan == 8) {

        if(
            CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {


            CompCard1 = 8;
        } else if (CompCard1 != 0&& CompCard2 == 0 &&
                   CompCard3 ==0) {

            CompCard2 = 8;
        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 ==0) {


            CompCard3 = 8;
        } else if (CompCard1 != 0&&
                   CompCard2 != 0 && CompCard3 !=0 &&
                   CompCard4 == 0 && CompCard5 ==0) {


            CompCard4 = 8;

        } else if (CompCard1 != 0&& CompCard2 != 0 &&
                   CompCard3 !=0 && CompCard4 != 0 &&
                   CompCard5 ==0) {

            CompCard5 = 8;
        }


    }

    else if(CarRan == 9) {

        if(CompCard1 == 0&&
                CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 9;
        } else if (
            CompCard1 != 0&& CompCard2 == 0 &&
            CompCard3 ==0) {

            CompCard2 = 9;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 ==0) {

            CompCard3 = 9;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 == 0 &&
            CompCard5 ==0) {

            CompCard4 = 9;

        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {


            CompCard5 = 9;
        }

    }

    else if(CarRan == 10) {

        if(CompCard1 == 0&& CompCard2 == 0 &&
                CompCard3 ==0) {

            CompCard1 = 10;
        } else if (
            CompCard1 != 0&& CompCard2 == 0 &&
            CompCard3 ==0) {

            CompCard2 = 10;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 ==0) {

            CompCard3 = 10;
        } else if (
            CompCard1 != 0&& CompCard2 != 0 &&
            CompCard3 !=0 && CompCard4 == 0 &&
            CompCard5 ==0) {

            CompCard4 = 10;

        } else if (
            CompCard1 != 0&&
            CompCard2 != 0 && CompCard3 !=0 &&
            CompCard4 != 0 && CompCard5 ==0) {


            CompCard5 = 10;
        }


    }

    else if(CarRan == 11) {

        if(CompCard1 == 0&& CompCard2 == 0 &&
                CompCard3 ==0) {

            CompCard1 = 10;
        } else if (CompCard1 != 0&&
                   CompCard2 == 0 && CompCard3 ==0) {

            CompCard2 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {

            CompCard3 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 10;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

            CompCard5 = 10;
        }



    }

    else if(CarRan == 12) {

        if(CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 10;
        } else if (CompCard1 != 0&& CompCard2 == 0 &&
                   CompCard3 ==0) {

            CompCard2 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {

            CompCard3 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 10;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

            CompCard5 = 10;
        }



    }

    else if(CarRan == 13) {

        if(CompCard1 == 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard1 = 10;
        } else if (CompCard1 != 0&& CompCard2 == 0 && CompCard3 ==0) {

            CompCard2 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 ==0) {

            CompCard3 = 10;
        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0) {

            CompCard4 = 10;

        } else if (CompCard1 != 0&& CompCard2 != 0 && CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

            CompCard5 = 10;
        }

    }

}


void HitorMiss(int &playertot,int &card1, int &card2, int &card3, int &card4, int &card5,int &Comptot,bool &going, bool &PerStand,bool &CompStand) {

    string HorSe;


    if(playertot == 21) {
        cout<<"You Win"<<endl;
        PerStand = true;
        CompStand = true;
        going = false;
    } else if(playertot>21) {
        cout<<"You lose"<<endl;
        cout<<"Computer had "<<Comptot<<endl;
        PerStand = true;
        CompStand = true;
        going = false;
    } else {

        cout<<"Would you like to hit or stand?: ";
        cin>>HorSe;


        while(HorSe != "Hit" && HorSe != "hit" && HorSe != "h" &&HorSe != "H" && HorSe != "Stand"&&HorSe != "stand" && HorSe != "s"&& HorSe != "S") {


            cout<<"Only Hit or Stand"<<endl;
            cout<<"Would you like to hit or stand?: ";
            cin>>HorSe;


        }

        if(HorSe == "Hit"|| HorSe == "hit"||HorSe == "h"||HorSe == "H") {


            RandCard(card1,card2,card3,card4,card5,playertot);


            if (card3 !=0 && card4 == 0 && card5 ==0 ) {
                cout<<endl;
                cout<<"card 3 = "<<card3<<endl;

            } else if (card3 !=0 && card4 != 0 && card5 ==0) {
                cout<<endl;
                cout<<"card 4 = "<<card4<<endl;

            } else if (card3 !=0 && card4 != 0 && card5 !=0) {
                cout<<endl;
                cout<<"card 5 = "<<card5<<endl;
            }

            playertot = card1 +card2 + card3 +card4+card5;
            cout<<"total = "<<playertot<<endl;


            if(playertot == 21) {
                cout<<"You Win!"<<endl;
                CompStand = true;
                PerStand = true;
                going = false;
            } else if(playertot>21) {

                cout<<"You Lose!"<<endl;
                cout<<"Computer had "<<Comptot<<endl;
                CompStand = true;
                PerStand = true;
                going = false;
            }



        } else if(HorSe == "Stand"|| HorSe == "stand"|| HorSe == "s"|| HorSe == "S") {

            going = false;
            PerStand = true;

        } else {
            cout<<HorSe<<" is not a command"<<endl;
            cout<<"Would you like to hit or stand?: ";
            cin>>HorSe;

        }


    }


}


void CompHitorMiss(int &Comptot,int &CompCard1, int &CompCard2, int &CompCard3, int &CompCard4, int &CompCard5,bool &going, bool &CompStand, bool &PerStand) {


    if(Comptot==21) {

        cout<<endl;
        cout<<"You Lose!"<<endl;
        cout<<"Computer got 21"<<endl;
        cout<<endl;
        CompStand = true;
        PerStand = true;
        going = false;

    } else if(Comptot>21) {

        cout<<endl;
        cout<<"Computer got over 21"<<endl;
        cout<<"You Win!"<<endl;
        cout<<endl;
        CompStand = true;
        PerStand = true;
        going = false;

    } else {


        if(Comptot <= 15) {
            cout<<endl;
            cout<<"Computer Hits"<<endl;

            CompCard(CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,Comptot);

            Comptot = CompCard1+CompCard2+CompCard3+CompCard4+CompCard5;

            if(Comptot==21) {
                cout<<endl;
                cout<<"You lose"<<endl;
                cout<<"Computer got 21"<<endl;
                cout<<endl;
                CompStand = true;
                PerStand = true;
                going = false;

            } else if(Comptot>21) {

                cout<<endl;
                cout<<"Computer got over 21"<<endl;
                cout<<"you win"<<endl;
                cout<<endl;
                CompStand = true;
                PerStand = true;
                going = false;

            }


        } else if(Comptot >= 15) {
            cout<<endl;
            cout<<"Computer Stands"<<endl;
            cout<<endl;
            CompStand = true;
            going = false;

        }
    }
}


void Introduction() {

    cout<<"                 ---WELCOME TO BLACK-JACK---"<<endl;
    cout<<"The name of the game is to get as close as possible to 21 without going over"<<endl;
    cout<<"Aces are worth 1 or 11 What ever you want"<<endl;
    cout<<"Cards 2-10 are worth the value of the number"<<endl;
    cout<<"Face cards J,Q,K are worth 10"<<endl;
    cout<<"If you go over 21 you lose!"<<endl;
    cout<<"However if you get 21 you win!"<<endl;
    cout<<"if you \"hit\" you get a card"<<endl;
    cout<<"if you \"stand\" you will not pick up a card"<<endl;
}


void results(int Comptot, int playertot,bool PerStand,bool CompStand){

 if(PerStand == true && CompStand == true) {

            if(playertot>Comptot &&playertot !=21 && playertot <21) {

                cout<<"You Win!"<<endl;
                cout<<"Computer had "<<Comptot<<endl;

            } else if(Comptot>playertot && Comptot != 21 && Comptot <21) {

                cout<<"You Lose!"<<endl;
                cout<<"Computer had "<<Comptot<<endl;

            }else if(Comptot == playertot) {
                cout<<"You Lose!"<<endl;
                cout<<"Computer Wins"<<endl;
                cout<<"The computer had the same amount as you"<<endl;
            }
        }

}



void restart(char &YN) {


    cout<<endl;
    cout<<"do you want to go again? (Y/N): ";
    cin>>YN;

    while(YN != 'Y'&& YN != 'y' && YN != 'N'&& YN != 'n') {

        cout<<"ony (Y/N)"<<endl;
        cout<<"do you want to go again? (Y/N): ";
        cin>>YN;
    }


}


int main() {

    char YN;

    int card1;
    int card2;
    int card3;
    int card4;
    int card5;

    int CompCard1;
    int CompCard2;
    int CompCard3;
    int CompCard4;
    int CompCard5;

    int playertot;
    int Comptot;

    bool going;
    bool PerStand;
    bool CompStand;

    Introduction();

    do {

        card1 = 0;
        card2 = 0;
        card3 = 0;
        card4 = 0;
        card5 = 0;

        CompCard1 = 0;
        CompCard2 = 0;
        CompCard3 = 0;
        CompCard4 = 0;
        CompCard5 = 0;

        playertot = 0;
        Comptot = 0;

        going = true;
        PerStand = false;
        CompStand = false;


        srand(time(NULL));

        RandCard(card1,card2,card3,card4,card5,playertot);
        RandCard(card1,card2,card3,card4,card5,playertot);
        playertot = card1 + card2;

        CompCard(CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,Comptot);
        CompCard(CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,Comptot);
        Comptot = CompCard1 + CompCard2;

        cout<<endl;
        cout<<"card 1 = "<<card1<<endl;
        cout<<"card 2 = "<<card2<<endl;
        cout<<"total = "<<playertot<<endl;
        cout<<endl;


        do {

            HitorMiss(playertot,card1,card2,card3,card4,card5,Comptot,going,PerStand,CompStand);


            if(playertot !=21 && playertot < 21) {

                CompHitorMiss(Comptot,CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,going, CompStand,PerStand);
            }

        } while(going == true);


        while(CompStand == true && PerStand == false) {

            HitorMiss(playertot,card1,card2,card3,card4,card5,Comptot,going, PerStand,CompStand);
        }

        while(CompStand == false && PerStand == true) {

            CompHitorMiss(Comptot,CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,going,CompStand,PerStand);
        }


        results(Comptot,playertot,PerStand,CompStand);

        restart(YN);

        system("clear");


    } while(YN == 'Y'|| YN == 'y');



    return 0;
}
