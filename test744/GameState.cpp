#include "GameState.h"

GameState::GameState(sf::RenderWindow* window, std::stack<State*>* states)
	:State(window, states)
{
	age = 0;
	srand(time(0));

	this->initFont();


	
	//(x, y, width, height, font, "text", text size , idle color, hover color, active color, text color)
	this->backToState_btn = new Button(600, 500, 150, 50, &this->font, "Back", 25, sf::Color(70, 70, 70, 200), sf::Color(150, 150, 150, 200), sf::Color(20, 20, 20, 200), sf::Color::White);
	this->aged_btn = new Button(415, 380, 250, 100, &this->font, "aged!", 60, sf::Color(70, 70, 70, 250), sf::Color(150, 150, 150, 250), sf::Color(20, 20, 20, 250), sf::Color::White);

	//(x, y, font, text size, "text", data, text color)
	this->ageShow = new Button(100, 100, &this->font, 25, "age : ", age, sf::Color::White);
	this->dataI = new Button(250, 600, &this->font, 25, "Happiness : ", Happiness, sf::Color::White);
	this->dataII = new Button(400, 600, &this->font, 25, "Health : ", Health, sf::Color::White);
	this->dataIII = new Button(550, 600, &this->font, 25, "Smart : ", Smart, sf::Color::White);
	this->dataIV = new Button(700, 600, &this->font, 25, "Look : ", Look, sf::Color::White);
	this->dataV = new Button(850, 600, &this->font, 25, "Moral : ", Moral, sf::Color::White);

	this->Background.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));
	this->Background.setFillColor(sf::Color::Black);
	
	this->BackgroundLog.setSize(sf::Vector2f(540 , 540));
	this->BackgroundLog.setFillColor(sf::Color::Blue);
	this->BackgroundLog.setPosition(0 , 0);
	
	this->BackgroundSituation.setSize(sf::Vector2f(540, 540));
	this->BackgroundSituation.setFillColor(sf::Color::Green);
	this->BackgroundSituation.setPosition(540, 0);
	
	this->BackgroundName.setSize(sf::Vector2f(200,100));
	this->BackgroundName.setFillColor(sf::Color::Red);
	this->BackgroundName.setPosition(0, 0);
	
	this->BackgroundStatus.setSize(sf::Vector2f(1080, 180));
	this->BackgroundStatus.setFillColor(sf::Color::Yellow);
	this->BackgroundStatus.setPosition(0, 540);

	std::cout << "\nStarting GameState!\n";

}

GameState::~GameState()
{
	age = 0;


	delete this->backToState_btn;
	delete this->aged_btn;
	
	delete this->ageShow;
	delete this->dataI;
	delete this->dataII;
	delete this->dataIII;
	delete this->dataIV;
	delete this->dataV;
}


int GameState::random(int n, int x)
{
	return rand()%n+x;
}

void GameState::creatButtons(int n, std::string string1, std::string string2, std::string string3, std::string string4)
{
	//(x, y, width, height, font, "text", text size , idle color, hover color, active color, text color)
	//(x, y, ���ҧ, ���, ��͹�?, ��ͤ���, ��Ҵ��ͤ��� , �ջ����͹����, �ջ����͹����, �ջ����͹����, text color)
	if (n = 2) {
		this->eventSelectButton1 = new Button(600, 500, 150, 50, &this->font, string1, 25, sf::Color(70, 70, 70, 200), sf::Color(150, 150, 150, 200), sf::Color(20, 20, 20, 200), sf::Color::White);
		this->eventSelectButton2 = new Button(600, 500, 150, 50, &this->font, string1, 25, sf::Color(70, 70, 70, 200), sf::Color(150, 150, 150, 200), sf::Color(20, 20, 20, 200), sf::Color::White);
	}
}



void GameState::endState()
{
	std::cout << "\nEnding GameState!\n";
}

void GameState::updateAge()
{
	std::cout << age << " y/o\n\n";
}

void GameState::Ev(int age)
{
		randtype = random(101);
		eventCheck = 0;

		//�˵ء�ó컡�� 
		if (randtype >= 10 && randtype <= 100) {
			Evnow = random(20);
		}

		//�������������
		else if (randtype == 0 && age == 0) {

			std::cout << "you death" << std::endl;
		}

		//�˵ء�ó�����
		else {

			Evnow = random(10,20);
		}
	
}

void GameState::creatEvent(int Evnow)
{
	if (age >= 0 && age <= 5) { // baby
		switch (Evnow) {
		case 0: //Tooth_decay
			
			
			std::cout << "Go to a doctor to treat your Tooth" << std::endl;
			
			Health -= random(6) + 5; eventCheck = 1;
			break;
		case 1: //injec_vaccine
			std::cout << "Go to hospital to inject a vaccine" << std::endl;
			
			Health += random(6) + 10; eventCheck = 1;
			break;
		case 2: //have_yungbra
			cout << "congratulation you have a yong brather" << endl;
			
			Happiness += 20; eventCheck = 1;
			break;
		case 3: //injured_from_toys
			cout << "you injured from toys"
				yes : non;
			
		no: Health += 10; eventCheck = 1;
			break;
		}
	}
//	else (age >= 6 && age <= 14) { // primary
//		case "bully":
//			cout << "you are bullied" << endl;
//			talk a teacher : if (Moral >= 50) {
//				if (rand(3) > 0) {
//					teacher protect you : Heath += 10;
//				}
//				else teacher ignore : Heath -= 10; look -= 10;
//			}
//			else {
//				teacher ignore : Heath -= 10; look -= 10;
//			}cheak = 1;
//		argut: Heath -= 20; look -= 20; cheak = 1;
//			bully Someone : Happiness += 10; Moral -= 20; cheak = 1;
//		notthing: Heath -= 5; look -= 5; cheak = 1;
//			break;
//		case "puppy_love":
//			if (look >= 80) {
//				cout << "some one confess about lovenses to you " << endl;
//			yes: Happiness += 30; cheak = 1;
//			no: not thing; cheak = 1;
//			}
//		case "skipping_class":
//			cout << "your friends persuade you to skipping class" << endl;
//		yes: happineess += 20; look -= 20; smart -= 30; cheak = 1;
//		no: look += 5; smart += 15; cheak = 1;
//			noand blame friends : if (random(101 <= 40) {
//				your friends not satisfied; Happiness -= 15;
//			}
//			else {
//				your friends understand you; look += 5; start += 15; Happiness += 10;
//			}cheak = 1;
//		case "true_friend":
//			cout << "you find true friend" << endl;
//				Happiness += 10; cheak = 1;
//		case "old_camera":
//			cout << "you find dad's old camera" << endl;
//			repair: Happiness += 5; cheak = 1;
//		notthing: cheak = 1;
//	}
//else (age >= 15 && age <= 18) { // scondary
//		case "smoke":
//			cout << "A friend invited me to smoke" << endl;
//		agree: moral -= 20; Happiness += 10; look -= 10; Heath -= 15; cheak = 1;
//		reject: look += 10; cheak = 1;
//		case "skipping_class":
//			cout << "your friends persuade you to skipping class" << endl;
//		yes: happineess += 20; look -= 20; smart -= 30; cheak = 1;
//		no: look += 5; smart += 15; cheak = 1;
//			noand blame friends : if (random(101 <= 40) {
//				your friends not satisfied; Happiness -= 15;
//			}
//			else {
//				your friends understand you; look += 5; start += 15; Happiness += 10;
//			} cheak = 1;
//	}
//else (age >= 19 && age <= 22) { // bachelor
//		case "car":
//			cout << "Parents bought a car for" << endl;
//				Happiness += 15; cheak = 1;
//		case "copy_theexam":
//			cout << "A friend asked to copy the exam" << endl;
//		agree: Happiness += 10; moral -= 10; cheak = 1;
//		no: cheak = 1;
//			Tell the teacher : look -= 20; cheak = 1;
//		case "activity":
//			cout << "Enter the activity" << endl;
//		go: look += 10; cheak = 1;
//		no: Happiness += 5; cheak = 1; cheak = 1;
//		Cursingsenior: look -= 20; Happiness += 10; cheak = 1;
//	}
//else (age >= 23 && age <= 40) { // primary adult
//		case "party":
//			cout << "The party" << endl;
//		go: look += 5; cheak = 1;
//		no: look -= 10; cheak = 1;
//		case "boss":
//			cout << "Being cursed by the boss" << endl;
//		sorry: Happiness -= 5; look -= 5; cheak = 1;
//		retaliate: Happiness += 10 look -= 15; cheak = 1;
//		Resign: "lost job"; cheak = 1;
//		case "cheat":
//			cout << "A friend who works to defraud company money" << endl;
//		join: Happiness += 10; look -= 20; moral -= 20; cheak = 1;
//		tellboss: "friend lost job"; cheak = 1;
//
//	}
//else (age >= 41 && age <= 60) { // second adult
//		case "Promote":
//			cout << "Promote" << endl;
//		case "boss":
//			cout << "Being cursed by the boss" << endl;
//		sorry: Happiness -= 5; look -= 5; cheak = 1;
//		retaliate: Happiness += 10 look -= 15; cheak = 1;
//		Resign: "lost job"; cheak = 1;
//		case "retire":
//			cout << "you retire"; cheak = 1;
//	}
//else // The elderly 
//	{
//
//	}
//	if (cheak == 0)
//	{
//		Ev();
//	}
//
}


void GameState::updateButtons()
{
	this->backToState_btn->update(this->mousePosView);
	this->aged_btn->update(this->mousePosView);

	

	if (this->backToState_btn->isPressed())
	{
		this->quit = true;
	}

	if (this->aged_btn->isPressed())
	{
		age++;
		this->updateAge();
		updateEvent();
		
	}
}

void GameState::updateInputs(const float& dt)
{
	this->checkForQuit();
}

void GameState::updateText()
{
	delete this->ageShow;
	this->ageShow = new Button(100, 100, &this->font, 25, "age : ", age, sf::Color::White);

	delete this->dataI;
	this->dataI = new Button(250, 600, &this->font, 25, "Happiness : ", Happiness, sf::Color::White);
	
	delete this->dataII;
	this->dataII = new Button(400, 600, &this->font, 25, "Health : ", Health, sf::Color::White);
	
	delete this->dataIII;
	this->dataIII = new Button(550, 600, &this->font, 25, "Smart : ", Smart, sf::Color::White);
	
	delete this->dataIV;
	this->dataIV = new Button(700, 600, &this->font, 25, "Look : ", Look, sf::Color::White);
	
	delete this->dataV;
	this->dataV = new Button(850, 600, &this->font, 25, "Moral : ", Moral, sf::Color::White);

}

void GameState::updateEvent()
{
	void Ev(int age);
	void creatEvent(std::string Evnow);

}





//update
void GameState::update(const float& dt)
{
	this->updateMousePos();
	
	this->updateInputs(dt);
	
	this->updateButtons();

	this->updateText();

}

//render
void GameState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;
		
	target->draw(this->Background);
	target->draw(this->BackgroundLog);
	target->draw(this->BackgroundName);
	target->draw(this->BackgroundStatus);
	target->draw(this->BackgroundSituation);

	//render buttons
	this->aged_btn->renderButton(target);
	this->backToState_btn->renderButton(target);
	
	//render text
	
	this->ageShow->renderText(target);
	this->dataI->renderText(target);
	this->dataII->renderText(target);
	this->dataIII->renderText(target);
	this->dataIV->renderText(target);
	this->dataV->renderText(target);

}