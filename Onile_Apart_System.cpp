#include<iostream>
#include<cstring>
#include"Customer.h"
#include"Favorite.h"
#include"Inquiry.h"
#include"Review.h"
#include"Seller.h"
#include"Apartment.h"
#include"Document.h"
#include"Tour.h"

using namespace std;

int main()
{
	Customer customer1;
	customer1.setDetails(001, "Chamith", "Appuhami", "chamith.appu@gmail.com", 0774561237, 2000, 05, 25);
	Customer customer2;
	customer2.setDetails(002, "Rashmika", "Perera", "rash.perera@gmail.com", 077456123, 2001, 07, 15);

	Customer* cus1 = new Customer(001,"Chamith");
	Customer* cus2 = new Customer(002, "Rashmika");

	Customer* myCustomer;
	myCustomer = new Customer("ab001", 3, "25", "visited");
	myCustomer = new Customer("ab001", 3, "25", "NOTvisited");
	myCustomer->DisplayTour();

	Customer* mycus;
	mycus = new Customer(001, 002);
	mycus->displayFavorite();
	delete mycus;

	Documentation* D1;
	D1 = new Documentation(001, "Avenra", "Colombo 5", 10000.00, 2002);
	D1->DisplayApartmentDetails();
	D1->~Documentation();
	cout << endl;

	Seller* slr;
	slr = new Seller(101, 102, 103, 104);
	slr->DisplayReviews();
	delete slr;

	Seller* slr1;
	slr1 = new Seller(2001, 2002, 2003, 2004);
	slr1->DisplayApartments();
	delete slr1;

	Seller* s1 = new Seller(100, 101,201,202);
	Seller* s2 = new Seller(103,104,203,204);
	Inquiry* i1 = new Inquiry("IN001", "Good", "2022/05/18", "Available",cus1 ,s1);
	Inquiry* i2 = new Inquiry("IN002", "VeryGood", "2022/04/10", "Available",cus2, s2);
	cout << "Inquiries of" << endl;
	s1->displaySeller();

	Favorite* Fav1 = new Favorite();
	Apartment* A1 = new Apartment(001, "Havelock","Colombo",50000000.00,15);
	Apartment* A2 = new Apartment(002, "Shangri-La", "Colombo", 70500000.00, 18);

	Fav1->addFavorite(A1, A2);
	Fav1->displayFavDetails();
	delete Fav1;

	Customer* c1 = new Customer(001, "Nimal");
	Customer* c2 = new Customer(002, "kamal");
	Review* r1 = new Review(123, 4.5);
	Review* r2 = new Review(456, 3.5);

	c1->displayCustomer();
	r1->displayRevDetails();
	c2->displayCustomer();
	r2->displayRevDetails();

	return 0;
}
