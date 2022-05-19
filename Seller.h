#include<iostream>
#include"Apartment.h"
#include"Inquiry.h"
#include"Review.h"
#define SIZE1 2
#define SIZE2 2
#define SIZE3 2
using namespace std;

class Seller {
private:
	int sellerID;
	char sellerName[20];
	char  sellerEmail[20];
	int sellerContactNo;
	char address[30];
	char nic[10];
	char sellerRegDate[10];

	Apartment* aprt[SIZE1]; //apartment-composition
	Review* rev[SIZE2]; //review-composition
	Inquiry* inq[SIZE3]; //inquiry-association
	int noOfInquiries;



public:

	Seller(); //default constructor
	Seller(int aprt1, int aprt2, int rev1, int rev2);//overloaded constructor


	void setSellDetails(int psellerID, char psellerName[], int pSellercontactNo, char pSelleremail[], char paddress[], char pnic[], char psellerRegDate[]);

	void displaySellDetails();
	int getSellerID();
	int getSellerContactNo();
	void DisplayApartments();
	void DisplayReviews();
	void addInquiry(Inquiry* inq);
	void displaySeller();
	

	~Seller();

};