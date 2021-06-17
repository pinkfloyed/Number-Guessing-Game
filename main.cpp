#include<bits/stdc++.h>
#include<cstdlib>
#include<string.h>
using namespace std;
typedef long long ll;

void draw(ll n,char c)
{
	for(ll i=0;i<n;i++)
	{
		cout<<c;
	}
	cout<<'\n';
}
void design()
{
	cout<<'\n'<<'\n'<<'\n'<<'\n';
	draw(100,'#');
	draw(100,'*');
	draw(100,'-');
	cout<<"\t\t\t RULES OF THE CASINO NUMBER GUESSING GAME \n\n\n";
	draw(100,'-');
	draw(100,'*');
	draw(100,'#');
	cout<<"\n\n\n\t\t 1.Choose Any Number Between 1 to 100 \t\t\n\n";
	cout<<"\n\n\n\t\t 2.If You Win,You Will Get 20 Times of Money you bet\t\t\n\n";
	cout<<"\n\n\n\t\t 3.If You Lose or bet on wrong number,You Will lose your bet amount\t\t\n\n";
	draw(100,'-');
	draw(100,'*');
	draw(100,'#');
}
int main()
{
	string playername;
	ll amount,betamount,check,dice;
	char guess;
	draw(80,'#');
	draw(80,'*');
	draw(80,'_');
	cout<<"\t\t\t\t\n\n\n\t\t\t CASINO GUESSING NUMBER GAME \n\n\n"<<'\n';
	draw(80,'_');
	draw(80,'*');
	draw(80,'#');

    cout<<"Please Enter Your Name : "<<'\n';
    getline(cin,playername);
    cout<<"Enter The Amount You Have To Play This Game : "<<'\n';
    cin>>amount;


	do{
		design();
		cout<<"\t\tYour Current Amount is $ :"<<amount<<'\n';
		do
		{
			cout<<"Please Enter a number between 1 to 100"<<'\n';
			cin>>check;
			if(check<=0 || check>100)
			{
				cout<<"Please Check the number! You Should Enter a number between 1 to 100"<<'\n';
			}
		}while(check<=0 || check>100);
		do
		{
			cout<<playername<<": Enter Money to bet This Game : $ ";
			cin>>betamount;
			if(betamount>amount)
			{
				cout<<"Hello"<<" "<<playername<<" "<<"Your betamount is greater than your current amount"<<"Please Enter a number between 1 to 100"<<'\n';
			}
		}while(betamount>amount);
		dice=rand()%100+1;
		if(dice==check)
		{
			cout<<"Congratulations!!! You Have won This Game and Now You Have got $"<<betamount*20;
			amount+=betamount*20;
		}
		else
		{
			cout<<"Sorry! You lost this game....Good luck next time"<<'\n';
			cout<<"Now You Have amount $"<<betamount;
			amount-=betamount;
		}
		cout<<"Winning Number Was : "<<dice<<'\n';
		cout<<playername<<" "<<"Now You have amount : $ "<<amount<<'\n';
		if(amount>0)
		{
			cout<<"If You Want to play Again Then please enter a number to continue and press(y/n)"<<'\n';
			cin>>guess;
		}
		else
		{
			cout<<"You have no money to play";
			break;
		}
	}while(guess=='Y' || guess=='y');
	draw(80,'#');
	draw(80,'*');
	draw(80,'_');
	cout<<"Thanks "<<playername<<" "<<"For playing This Game! Your Current amount is : "<<amount<<'\n';
	draw(80,'_');
	draw(80,'*');
	draw(80,'#');
}
