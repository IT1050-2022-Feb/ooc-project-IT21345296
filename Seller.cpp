#include "Seller.h"
#include <cstring>
#define SIZE1 2
#define SIZE2 2
#define SIZE3 2

Seller::Seller()
{
	cout << "Seller created" << endl;

	aprt[0] = new Apartment(0);
	aprt[1] = new Apartment(0);

	rev[0] = new Review(0);
	rev[1] = new Review(0);

}

Seller::Seller(int aprt1, int aprt2, int rev1, int rev2)
{
	aprt[0] = new Apartment(aprt1);
	aprt[1] = new Apartment(aprt2);

	rev[0] = new Review(rev1);
	rev[1] = new Review(rev2);

	noOfInquiries = 0;

}

void Seller::setSellDetails(int psellerID, char psellerName[], int pSellercontactNo,
	char pSelleremail[], char paddress[], char pnic[], char psellerRegDate[])
{
	sellerID = psellerID;
	strcpy(sellerName, psellerName);
	sellerContactNo = pSellercontactNo;
	strcpy(sellerEmail, pSelleremail);
	strcpy(address, paddress);
	strcpy(nic, pnic);
	strcpy(sellerRegDate, psellerRegDate);
}

int Seller::getSellerID()
{
	return sellerID;
}

int Seller::getSellerContactNo()
{
	return sellerContactNo;
}

void Seller::DisplayApartments()
{
	for (int r = 0; r < SIZE1; r++)
		aprt[r]->DisplayApartmentDetails();
}

void Seller::DisplayReviews()
{
	for (int a = 0; a < SIZE2; a++)
		rev[a]->displayRevDetails();
}


void Seller::addInquiry(Inquiry* inqn)
{
	int i;
	for (i = 0; i < SIZE3; i++) {
		if (noOfInquiries < SIZE3) {
			inq[i] = inqn;
		}

	}


}

void Seller::displaySeller()
{
	cout << "Seller Name = " << sellerName << endl;
	cout << "Seller ID = " << sellerID << endl;
	for (int i = 0; i < noOfInquiries; i++)
	{
		inq[i]->displayInquiries();
	}
}

Seller::~Seller()
{
	cout << "Seller deleted" << endl;
	for (int r = 0; r < SIZE1; r++)
		delete aprt[r];

	for (int a = 0; a < SIZE2; a++)
		delete rev[a];
	cout << "Everything is deleted" << endl;
}