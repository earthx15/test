#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int cheak=0;
string EVcommon[] = {"Tooth_decay","injec_vaccine","have_yungbra","injured_from_toys","bully","puppy_love","skipping_class",
					"true_friend","old_camera","smoke","car","copy_theexam","activity","party","boss","cheat","Promote","retire"};
string EVspacial[] = {"",""};
int Evnow;
int SizeEV; 
int randnumber;
int randtype;
void Ev(){
	while(cheak==0){
		randtype = rand()%101;
		if (randtype >= 10 && randtype <= 100) {
		SizeEV = sizeof(EVcommon) / sizeof(EVspacial[0]);
		randnumber = rand()%SizeEV;
		Evnow = EVcommon[randnumber];
		}else if (randtype == 0 && age == 0) {
			cout << "you death" << endl;
		}else {
			SizeEV = sizeof(EVspacial) / sizeof(EVspacial[0]);
			randnumber = rand()%SizeEV;
			Evnow = EVspacial[randnumber];
			}
		}
}
int main () {
	srand(time(0));
	
	Ev();
	
	
	
	if (age >= 0 && age <= 5) { // baby
		switch (Evnow) {
			case 0://"Tooth_decay" : 
				cout << "Go to a doctor to treat your Tooth" << endl;
				Health -= random(6)+5;cheak=1;
				break;
			case 1://"injec_vaccine" :
				cout << "Go to hospital to inject a vaccine" << endl;
				Health += random(6)+10;cheak=1;
				break;
			case 2://"have_yungbra" :
				cout << "congratulation you have a yong brather" << endl;
				Happiness += 20;cheak=1;
				break;	
			case 3://"injured_from_toys" :
				cout << "you injured from toys"
				yes : non;
				no : Health += 10;cheak=1;
				break;
		}
	}else (age >= 6 && age <= 14) { // primary
		case 4://"bully" :
				cout << "you are bullied" << endl;
				talk a teacher : if (Moral >= 50) {
									if (rand(3) > 0) {
										teacher protect you : Heath += 10; 
									}else teacher ignore : Heath -= 10; look -= 10; 
								}else {
									teacher ignore : Heath -= 10; look -= 10;
								}cheak=1;
				argut : Heath -= 20; look -= 20;cheak=1;
				bully Someone : Happiness += 10; Moral -= 20;cheak=1;
				notthing : Heath -= 5; look -= 5;cheak=1;
				break;
		case 5://"puppy_love" :	
				if(look >= 80) {
					cout << "some one confess about lovenses to you " << endl;
					yes : Happiness += 30;cheak=1;
					no	: not thing;cheak=1;
				}
		case 6://"skipping_class" :
				cout << "your friends persuade you to skipping class" << endl;
				yes : happineess += 20; look -= 20; smart -= 30;cheak=1;
				no : look += 5; smart += 15;cheak=1;
				no and blame friends : if (random(101 <= 40) {
										your friends not satisfied; Happiness -= 15; 
									}else {
										your friends understand you; look += 5; start += 15; Happiness += 10;
									}cheak=1;
		case 7://"true_friend" :
				cout << "you find true friend" << endl;
				Happiness += 10;cheak=1;
		case 8://"old_camera" :
				cout << "you find dad's old camera" << endl;
				repair : Happiness += 5; cheak=1;
				notthing : cheak=1;
	}else (age >= 15 && age <= 18) { // scondary
		case 9://"smoke" :
				cout << "A friend invited me to smoke" << endl;
				agree : moral -=20; Happiness+=10; look -=10; Heath -=15;cheak=1;
				reject : look +=10;cheak=1;
		case 10://"skipping_class" :
				cout << "your friends persuade you to skipping class" << endl;
				yes : happineess += 20; look -= 20; smart -= 30;cheak=1;
				no : look += 5; smart += 15;cheak=1;
				no and blame friends : if (random(101 <= 40) {
										your friends not satisfied; Happiness -= 15; 
									}else {
										your friends understand you; look += 5; start += 15; Happiness += 10;
									} cheak=1;
	}else (age >= 19 && age <= 22) { // bachelor
		case 11://"car" :
				cout << "Parents bought a car for" << endl;
				Happiness +=15;cheak=1;
		case 12://"copy_theexam" :
				cout << "A friend asked to copy the exam" << endl;
				agree : Happiness += 10; moral -= 10;cheak=1;
				no : cheak=1;
				Tell the teacher : look -= 20;cheak=1;
		case 13://"activity" :
				cout <<"Enter the activity"<<endl;
				go: look +=10;cheak=1;
				no: Happiness+=5;cheak=1;cheak=1;
				Cursingsenior : look -=20; Happiness +=10;cheak=1;
	}else (age >= 23 && age <= 40) { // primary adult
		case 14://"party" :
				cout <<"The party" <<endl;
				go: look += 5;cheak=1;
				no: look -=10;cheak=1;
		case 15://"boss" :
				cout <<"Being cursed by the boss"<<endl;
				sorry: Happiness -= 5; look -=5;cheak=1;
				retaliate : Happiness +=10 look -=15;cheak=1;
				Resign : "lost job";cheak=1;
		case 16://"cheat" :
				cout << "A friend who works to defraud company money"<<endl;
				join: Happiness +=10; look -=20; moral -=20;cheak=1;
				tellboss: "friend lost job";cheak=1;
				
	}else (age >= 41 && age <= 60) { // second adult
		case 17://"Promote":
				cout <<"Promote"<<endl;
		case 18://"boss" :
				cout <<"Being cursed by the boss"<<endl;
				sorry: Happiness -= 5; look -=5;cheak=1;
				retaliate : Happiness +=10 look -=15;cheak=1;
				Resign : "lost job";cheak=1;
		case 19://"retire" :
				cout <<"you retire";cheak=1;		
	}else // The elderly 
	{
					
	}
	if(cheak==0)
	{
		Ev();
	}

}

