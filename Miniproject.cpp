#include<iostream>
#include<cstdlib>
using namespace std;

class ROCO{
    public:
       int i,j,r1,r2,c1,c2;
       int X1=0,X2=0;
       char X,O,A,B,yn;
       char ch=A;
       string name1,name2;
       int num[5][5]={{0,1,2,3,4},{6,7,8,9,10},{12,13,14,15,16},{18,19,20,21,22},{24,25,26,27,28}};
       char a[5][5]={{'X','O','X','X','O'},{'O','X','O','O','X'},{'O','X','O','O','X'},{'X','O','O','X','O'},{'X','X','O','X','X'}};
       void display();
       void exch();
       void gameover();
       bool winner();
};
    
void ROCO::display(){
        
        system("CLS");
        cout<<"\t\t\t\t******** ROCO BREAKERS ********\n\n";
        cout<<name1<<"[X] vs "<< name2<<"[O]"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t"<<name1<<"'s score: "<<X1<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t"<<name2<<"'s score: "<<X2<<endl;

        cout<<"_____________________________________________"<<endl;
        cout<<"|        |        |        |        |        |"<<endl;
        cout<<"|    "<<a[0][0]<<"   |    "<<a[0][1]<<"   |    "<<a[0][2]<<"   |    "<<a[0][3]<<"   |    "<<a[0][4]<<"   |"<<endl;
        cout<<"|_______"<<num[0][0]<<"|_______"<<num[0][1]<<"|_______"<<num[0][2]<<"|_______"<<num[0][3]<<"|_______"<<num[0][4]<<"|"<<endl;
        cout<<"|        |        |        |        |        |"<<endl;
        cout<<"|    "<<a[1][0]<<"   |    "<<a[1][1]<<"   |    "<<a[1][2]<<"   |    "<<a[1][3]<<"   |    "<<a[1][4]<<"   |"<<endl;
        cout<<"|_______"<<num[1][0]<<"|_______"<<num[1][1]<<"|_______"<<num[1][2]<<"|_______"<<num[1][3]<<"|______"<<num[1][4]<<"|"<<endl;
        cout<<"|        |        |        |        |        |"<<endl;
        cout<<"|    "<<a[2][0]<<"   |    "<<a[2][1]<<"   |    "<<a[2][2]<<"   |    "<<a[2][3]<<"   |    "<<a[2][4]<<"   |"<<endl;
        cout<<"|______"<<num[2][0]<<"|______"<<num[2][1]<<"|______"<<num[2][2]<<"|______"<<num[2][3]<<"|______"<<num[2][4]<<"|"<<endl;
        cout<<"|        |        |        |        |        |"<<endl;
        cout<<"|    "<<a[3][0]<<"   |    "<<a[3][1]<<"   |    "<<a[3][2]<<"   |    "<<a[3][3]<<"   |    "<<a[3][4]<<"   |"<<endl;
        cout<<"|______"<<num[3][0]<<"|______"<<num[3][1]<<"|______"<<num[3][2]<<"|______"<<num[3][3]<<"|______"<<num[3][4]<<"|"<<endl;
        cout<<"|        |        |        |        |        |"<<endl;
        cout<<"|    "<<a[4][0]<<"   |    "<<a[4][1]<<"   |    "<<a[4][2]<<"   |    "<<a[4][3]<<"   |    "<<a[4][4]<<"   |"<<endl;
        cout<<"|______"<<num[4][0]<<"|______"<<num[4][1]<<"|______"<<num[4][2]<<"|______"<<num[4][3]<<"|______"<<num[4][4]<<"|"<<endl;


}
void ROCO::exch(){
    int x = abs(i-j);
    if(x==6){
         swap(a[r1][c1],a[r2][c2]);
    }
        
    else if(x==1){
         swap(a[r1][c1],a[r2][c2]);
    }
    else{
         cout<<"Ooops....Wrong choice entered!!!"<<endl;
    }
     
    
     
}
void ROCO::gameover(){
     for(int w=0;w<5;w++){
          if(a[w][0]==a[w][1]&&a[w][1]==a[w][2]&&a[w][2]==a[w][3]&&a[w][3]==a[w][4]&&a[w][4]=='X' ){
             if(X1<5){
                X1++;
                a[w][0]='O',a[w][1]='X',a[w][2]='O',a[w][3]='X',a[w][4]='O';
             }
          } 
          else if(a[0][w]==a[1][w]&&a[1][w]==a[2][w]&&a[2][w]==a[3][w]&&a[3][w]==a[4][w]&&a[4][w]=='X' ){
              if(X<5){
                X1++;
                a[0][w]='O',a[1][w]='X',a[2][w]='O',a[3][w]='X',a[4][w]='O';
              }
          }
          else if(a[w][0]==a[w][1]&&a[w][1]==a[w][2]&&a[w][2]==a[w][3]&&a[w][3]==a[w][4]&&a[w][4]=='O'){
              if(X<5){
                X2++;
                a[w][0]='X',a[w][1]='O',a[w][2]='X',a[w][3]='O',a[w][4]='X';
              }
          }
          else if(a[0][w]==a[1][w]&&a[1][w]==a[2][w]&&a[2][w]==a[3][w]&&a[3][w]==a[4][w]&&a[4][w]=='O' ){
              if(X2<5){
                X2++;
                a[0][w]='X',a[1][w]='O',a[2][w]='X',a[3][w]='O',a[4][w]='X';
              }
          }
          else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==a[3][3]&&a[3][3]==a[4][4]&&a[4][4]=='X'){
               if(X1<5){
                  X1++;
                  a[0][0]='O',a[1][1]='O',a[2][2]='X',a[3][3]='X',a[4][4]='O';
               }
          }
          else if(a[0][4]==a[1][3]&&a[1][3]==a[2][2]&&a[2][2]==a[3][1]&&a[3][1]==a[4][0]&&a[4][0]=='X'){
               if(X1<5){
                  X1++;
                  a[0][0]='O',a[1][1]='X',a[2][2]='O',a[3][3]='X',a[4][4]='O';
               }
               
          }
          else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==a[3][3]&&a[3][3]==a[4][4]&&a[4][4]=='O'){
               if(X2<5){
                  X2++;
                  a[0][0]='O',a[1][1]='O',a[2][2]='X',a[3][3]='X',a[4][4]='O';
               }
              
          }
          else if(a[0][4]==a[1][3]&&a[1][3]==a[2][2]&&a[2][2]==a[3][1]&&a[3][1]==a[4][0]&&a[4][0]=='O'){
               if(X2<5){
                  X2++;
                  a[0][0]='O',a[1][1]='X',a[2][2]='O',a[3][3]='X',a[4][4]='O';
               }
               
          }
          else{
               cout<<"game continued...";
          }
     }
}
bool ROCO::winner(){
     if(X1==5 && X2!=5){
          cout<<name1<<" wins...Congratulations!!!"<<endl;
          cout<<"Do you want to play again?(y/n)"<<endl;
          cin>>yn;
          if(yn=='y'||yn=='Y'){
              
              X1=0;
              X2=0;
              cout<<"Enter 1st player name: "<<endl;
              cin>>name1;
              cout<<"Enter 2nd player name: "<<endl;
              cin>>name2;
              return true;
          }
          return false;
     }
     else if(X2==5 && X1!=5){
          cout<<name2<<" wins...Congratulations!!!"<<endl;
          cout<<"Do you want to play again?(y/n)"<<endl;
          cin>>yn;
          if(yn=='y'||yn=='Y'){
              
              X1=0;
              X2=0;
              cout<<"Enter 1st player name: "<<endl;
              cin>>name1;
              cout<<"Enter 2nd player name: "<<endl;
              cin>>name2;
              return true;
          }
          return false;
          
          
     }
     else if(X1==5 && X2==5){
          cout<<"Game tie"<<endl;
          cout<<"Do you want to play again?(y/n)"<<endl;
          cin>>yn;
          if(yn=='y'||yn=='Y'){
              
              X1=0;
              X2=0;
              cout<<"Enter 1st player name: "<<endl;
              cin>>name1;
              cout<<"Enter 2nd player name: "<<endl;
              cin>>name2;
              return true;
          }
          return false;
          
          

     }
     else{
          cout<<"game continued...";
          return true;
     }
}




int main(){
    ROCO rc;
    cout<<"Enter 1st player name: ";
    cin>>rc.name1;
    cout<<"Enter 2nd player name: ";
    cin>>rc.name2;
    while(rc.winner()){
    rc.display();
    if(rc.ch=='A'){
         cout<<"\n\t"<<rc.name2<<"'s turn"<<endl;
         cout<<"\nEnter your first choice =>"<<endl;
         cin>>rc.i;
         cout<<"Enter your second choice =>"<<endl;
         cin>>rc.j;
         rc.ch='B';

    }
    else{
         cout<<"\n\t"<<rc.name1<<"'s turn"<<endl;
         cout<<"\nEnter your first choice =>"<<endl;
         cin>>rc.i;
         cout<<"Enter your second choice =>"<<endl;
         cin>>rc.j;
         rc.ch='A';
    }
    

    switch(rc.i){
        case 0:
              rc.r1=0;
              rc.c1=0;
              break;
        case 1:
             rc.r1=0;
             rc.c1=1;
             break;
        case 2:
             rc.r1=0;
             rc.c1=2;
             break;
        case 3:
             rc.r1=0;
             rc.c1=3;
             break;
        case 4:
             rc.r1=0;
             rc.c1=4;
             break;
        case 6:
             rc.r1=1;
             rc.c1=0;
             break;
        case 7:
             rc.r1=1;
             rc.c1=1;
             break;
        case 8:
             rc.r1=1;
             rc.c1=2;
             break;
        case 9:
             rc.r1=1;
             rc.c1=3;
             break;
        case 10:
             rc.r1=1;
             rc.c1=4;
             break;
        case 12:
             rc.r1=2;
             rc.c1=0;
             break;
        case 13:
             rc.r1=2;
             rc.c1=1;
             break;
        case 14:
             rc.r1=2;
             rc.c1=2;
             break;
        case 15:
             rc.r1=2;
             rc.c1=3;
             break;
        case 16:
             rc.r1=2;
             rc.c1=4;
             break;
        case 18:
             rc.r1=3;
             rc.c1=0;
             break;
        case 19:
             rc.r1=3;
             rc.c1=1;
             break;
        case 20:
             rc.r1=3;
             rc.c1=2;
             break;
        case 21:
             rc.r1=3;
             rc.c1=3;
             break;
        case 22:
             rc.r1=3;
             rc.c1=4;
             break;
        case 24:
             rc.r1=4;
             rc.c1=0;
             break;
        case 25:
             rc.r1=4;
             rc.c1=1;
             break;
        case 26:
             rc.r1=4;
             rc.c1=2;
             break;
        case 27:
             rc.r1=4;
             rc.c1=3;
             break;
        case 28:
             rc.r1=4;
             rc.c1=4;
             break;
        default:
             cout<<"invalid choice"<<endl;
        

    }

    switch(rc.j){
        case 0:
             rc.r2=0;
             rc.c2=0;
             break;
        case 1:
             rc.r2=0;
             rc.c2=1;
             break;
        case 2:
             rc.r2=0;
             rc.c2=2;
             break;
        case 3:
             rc.r2=0;
             rc.c2=3;
             break;
        case 4:
             rc.r2=0;
             rc.c2=4;
             break;
        case 6:
             rc.r2=1;
             rc.c2=0;
             break;
        case 7:
             rc.r2=1;
             rc.c2=1;
             break;
        case 8:
             rc.r2=1;
             rc.c2=2;
             break;
        case 9:
             rc.r2=1;
             rc.c2=3;
             break;
        case 10:
             rc.r2=1;
             rc.c2=4;
             break;
        case 12:
             rc.r2=2;
             rc.c2=0;
             break;
        case 13:
             rc.r2=2;
             rc.c2=1;
             break;
        case 14:
             rc.r2=2;
             rc.c2=2;
             break;
        case 15:
             rc.r2=2;
             rc.c2=3;
             break;
        case 16:
             rc.r2=2;
             rc.c2=4;
             break;
        case 18:
             rc.r2=3;
             rc.c2=0;
             break;
        case 19:
             rc.r2=3;
             rc.c2=1;
             break;
        case 20:
             rc.r2=3;
             rc.c2=2;
             break;
        case 21:
             rc.r2=3;
             rc.c2=3;
             break;
        case 22:
             rc.r2=3;
             rc.c2=4;
             break;
        case 24:
             rc.r2=4;
             rc.c2=0;
             break;
        case 25:
             rc.r2=4;
             rc.c2=1;
             break;
        case 26:
             rc.r2=4;
             rc.c2=2;
             break;
        case 27:
             rc.r2=4;
             rc.c2=3;
             break;
        case 28:
             rc.r2=4;
             rc.c2=4;
             break;
        default:
             cout<<"invalid choice"<<endl;
        

    }

    rc.exch();
    rc.display();
    rc.gameover();
    rc.display();
    }
   return 0;

}

