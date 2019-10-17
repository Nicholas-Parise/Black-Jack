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

            card1 = 11;

        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            if(card1 == 11) {

                card2 = 1;

            } else {

                card2 = 11;

            }

        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            if(playertot>=11) {

                card3 = 1;

            } else {

                card3 = 11;

            }

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {


            if(playertot>=11) {

                card4 = 1;
            }

            else {
                card4 = 11;
            }

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

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

            card1 = 2;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 2;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 2;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 2;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 2;
        }

    }

    else if(CarRan == 3) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 3;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 3;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 3;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 3;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 3;
        }


    }

    else if(CarRan == 4) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 4;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 4;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 4;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 4;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 4;
        }


    }

    else if(CarRan == 5) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 5;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 5;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 5;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 5;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 5;
        }


    }

    else if(CarRan == 6) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 6;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 6;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 6;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 6;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 6;
        }


    }

    else if(CarRan == 7) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 7;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 7;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 7;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 7;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 7;
        }


    }

    else if(CarRan == 8) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 8;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 8;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 8;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 8;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 8;
        }


    }

    else if(CarRan == 9) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 9;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 9;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 9;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 9;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 9;
        }

    }

    else if(CarRan == 10) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 10;
        }


    }

    else if(CarRan == 11) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 10;
        }



    }

    else if(CarRan == 12) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

            card5 = 10;
        }



    }

    else if(CarRan == 13) {

        if(card1 == 0&& card2 == 0 && card3 ==0) {

            card1 = 10;
        } else if (card1 != 0&& card2 == 0 && card3 ==0) {

            card2 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 ==0) {

            card3 = 10;
        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 == 0 && card5 ==0) {

            card4 = 10;

        } else if (card1 != 0&& card2 != 0 && card3 !=0 && card4 != 0 && card5 ==0) {

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
        PerStand = true;
        CompStand = true;
        going = false;
    } else {

        cout<<"Would you like to hit or stand?: ";
        cin>>HorSe;

        if(HorSe == "Hit"|| HorSe == "hit") {


            RandCard(card1,card2,card3,card4,card5,playertot);


            if (card3 !=0 && card4 == 0 && card5 ==0 ) {

                cout<<"card 3 = "<<card3<<endl;
                playertot +=card3;

            } else if (card3 !=0 && card4 != 0 && card5 ==0) {

                cout<<"card 4 = "<<card4<<endl;
                playertot +=card4;

            } else if (card3 !=0 && card4 != 0 && card5 !=0) {

                cout<<"card 5 = "<<card5<<endl;
                playertot +=card5;

            }

            cout<<"total = "<<playertot<<endl;


            if(playertot == 21) {
                cout<<"You Win"<<endl;
                CompStand = true;
                PerStand = true;
                going = false;
            } else if(playertot>21) {

                cout<<"You lose"<<endl;
                CompStand = true;
                PerStand = true;
                going = false;
            }



        } else if(HorSe == "Stand"|| HorSe == "stand") {

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

        cout<<"You lose"<<endl;
        CompStand = true;
        PerStand = true;
        going = false;
    } else if(Comptot>21) {


        cout<<"Computer got over 21"<<endl;

        cout<<"you win"<<endl;
        CompStand = true;
        PerStand = true;
        going = false;

    } else {


        if(Comptot <= 15) {

            cout<<"Computer Hits"<<endl;

            CompCard(CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,Comptot);

            if (CompCard3 !=0 && CompCard4 == 0 && CompCard5 ==0 ) {

                Comptot +=CompCard3;

            } else if (CompCard3 !=0 && CompCard4 != 0 && CompCard5 ==0) {

                Comptot +=CompCard4;

            } else if (CompCard3 !=0 && CompCard4 != 0 && CompCard5 !=0) {

                Comptot +=CompCard5;

            }

            if(Comptot==21) {

                cout<<"You lose"<<endl;
                cout<<"Computer got 21"<<endl;
                CompStand = true;
                PerStand = true;
                going = false;

            } else if(Comptot>21) {


                cout<<"Computer got over 21"<<endl;

                cout<<"you win"<<endl;
                CompStand = true;
                PerStand = true;
                going = false;

            }




        } else if(Comptot >= 15) {

            cout<<"Computer Stands"<<endl;
            CompStand = true;
            going = false;

        }
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

do{

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


    cout<<"card 1 = "<<card1<<endl;
    cout<<"card 2 = "<<card2<<endl;
    cout<<"total = "<<playertot<<endl;
    cout<<endl;



    do {


        HitorMiss(playertot,card1,card2,card3,card4,card5,Comptot,going, PerStand,CompStand);
        CompHitorMiss(Comptot,CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,going, CompStand,PerStand);


    } while(going == true);



    while(CompStand == true && PerStand == false) {

        HitorMiss(playertot,card1,card2,card3,card4,card5,Comptot,going, PerStand,CompStand);

    }

    while(CompStand == false && PerStand == true) {

        CompHitorMiss(Comptot,CompCard1,CompCard2,CompCard3,CompCard4,CompCard5,going,CompStand,PerStand);

    }


    if(PerStand == true && CompStand == true && playertot !=21 && Comptot !=21) {
        if(playertot>Comptot && playertot<=21 && Comptot<21) {

            cout<<"You win"<<endl;
            cout<<"Computer had "<<Comptot<<endl;

        } else if(Comptot>playertot && playertot<=21 && Comptot<21) {

            cout<<"You Lose"<<endl;

            cout<<"Computer had "<<Comptot<<endl;

        }
    }



     cout<<endl;
     cout<<"do you want to go again? (Y/N): ";
    cin>>YN;

}while(YN == 'Y'|| YN == 'y');





    return 0;
}
