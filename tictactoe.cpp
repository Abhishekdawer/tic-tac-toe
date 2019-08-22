#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 int choice;   // number input for box
 char turn='X';
 int row,col;
 void board_display()
 {
 	system("cls");
 	cout<<"   TIC TAC TOE"<<endl;
  cout<<"\tPlayer1 [X]\n\tPlayer2 [O]\n\n";
 cout<<"\t\t     |     |     "<<endl;
  cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"   "<<endl;
  cout<<"\t\t_____|_____|_____"<<endl;
  cout<<"\t\t     |     |     "<<endl;
  cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"   "<<endl;
  cout<<"\t\t_____|_____|_____"<<endl;
  cout<<"\t\t     |     |     "<<endl;
   cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"   "<<endl;
  cout<<"\t\t     |     |     "<<endl;	
 }
 
  void turns()
  {
  	if(turn =='X')
  cout<<endl<<"\n\t Player1 [X] turn:";
  if(turn =='O')
  cout<<endl<<"\n\t Player2 [O] turn:";
  cin>>choice;
  switch(choice){
  	case 1:
  	row =0;col=0;break;
  	case 2:
  	row =0;col=1;break;
    case 3:
  	row =0;col=2;break;
    case 4:
  	row =1;col=0;break;
    case 5:
  	row =1;col=1;break;
    case 6:
  	row =1;col=2;break;
    case 7:
  	row =2;col=0;break;
    case 8:
  	row =2;col=1;break;
    case 9:
  	row =2;col=2;break;
    default:
    cout<<"Invalid choice";
    break;
	 }
	 if(turn=='X' && board[row][col]!='X' && board[row][col]!='O')
	 {
	 	board[row][col] = 'X';
	 	turn= 'O';
	 }
	 else if(turn=='O' && board[row][col]!='X' && board[row][col]!='O')
	 {
	 	board[row][col] = 'O';
	 	turn= 'X';
	 }	
	 else
	 {
	 	cout<<"box already filled \n please choice again!\n\n";
	 	turns();
	 }
	  board_display();
  }
int main()
 {
  while(true) {
  board_display();
  turns();
 
  }
}
