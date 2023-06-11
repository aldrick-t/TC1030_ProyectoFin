#include <iostream>
#include <fstream> //remove if unused
#include <string>
#include <vector>
#include "video.h"
#include "movie.h"
#include "series.h"
#include "Episode.h"
using namespace std;

int main() {
	vector <Video*> catalog;
	//Next: Create video objs from txt files.
	catalog.push_back(new Series("86\t\t", "Action", 2021, 11));
	catalog.push_back(new Series("One Punch Man", "Action", 3.5, 2015, 12));
	catalog.push_back(new Series("Attack on Titan", "Action", 4, 2013, 25));
	//catalog.push_back(new Episode("Episode 1", 2015, 23, 1, 1));
	catalog.push_back(new Movie("The Garden of Words", "Drama", 2013, 46, 4));
	catalog.push_back(new Movie("Evangelion 3.33", "Sci-Fi", 2012, 96, 1));
	catalog.push_back(new Movie("Kimi No Na Wa", "Drama", 5, 2016, 106, 4));
	catalog.push_back(new Movie("Koe no Katachi", "Drama", 5, 2016, 106, 3));

	bool active = true;
	while (active == true) {
		int option;
		int rateOption;
		int vidOption;
		float rating;
		string type;

		cout << "Main Menu: " << endl;
		cout << "\n1. View Catalog \n2. Rate a video \n3. Filter Series \n4. Filter Movies \n5. Exit \n>>> ";
		cin >> option;
		switch (option) {
		case 1:
			cout << "VIEWING CATALOG: \n" << endl;
			cout << "=+=+=+=+=+=+=+=+ Series =+=+=+=+=+=+=+=+=" << endl;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Series") {
					cout << "(" << i + 1 << ") " << catalog.at(i)->getName() << endl;
				}
			}
			cout << "=+=+=+=+=+=+=+=+ Movies =+=+=+=+=+=+=+=+=" << endl;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Movie") {
					cout << "(" << i + 1 << ") " << catalog.at(i)->getName() << endl;
				}
			}
			cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
			/*
			*/
			cout << "Select a video: " << endl;
			cin >> vidOption;
			for (int i = 0; i < catalog.size(); i++) {
				if (vidOption == i + 1) {
					if (catalog.at(i)->getType() == "Series") {
						cout << "Video Details: \n" << endl;
						catalog.at(i)->showInfo();
					}
					else if (catalog.at(i)->getType() == "Movie") {
						catalog.at(i)->showInfo();
					}
				}
			}
			cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
			break;
		case 2:
			cout << "Rate a video: " << endl;
			cout << "=+=+=+=+=+=+=+=+ Series =+=+=+=+=+=+=+=+=" << endl;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Series") {
					cout << "(" << i + 1 << ") " << catalog.at(i)->getName() << "\t" << catalog.at(i)->getRating() << "/5" << endl;
				}
			}
			cout << "=+=+=+=+=+=+=+=+ Movies =+=+=+=+=+=+=+=+=" << endl;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Movie") {
					cout << "(" << i + 1 << ") " << catalog.at(i)->getName() << "\t" << catalog.at(i)->getRating() << "/5" << endl;
				}
			}
			cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;

			cout << "Select a video to rate: ";
			cin >> rateOption;

			cout << "Enter the rating: ";
			cin >> rating;
			for (int i = 0; i < catalog.size(); i++) {
				if (rateOption == i + 1) {
					catalog.at(i)->rateVideo(rating);
				}
			}
			break;

		case 3:
			cout << "Filter Series: " << endl;
			cout << "What rating would you like to filter by? >>> ";
			cin >> rating;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Series") {
					if (catalog.at(i)->getRating() >= rating) {
						catalog.at(i)->showInfo();
						cout << endl;
					}
				}
			}
			break;

		case 4:
			cout << "Filter Movies: " << endl;
			cout << "What rating would you like to filter by? >>> ";
			cin >> rating;
			for (int i = 0; i < catalog.size(); i++) {
				if (catalog.at(i)->getType() == "Movie") {
					if (catalog.at(i)->getRating() >= rating) {
						catalog.at(i)->showInfo();
						cout << endl;
					}
				}
			}
			break;

		case 5:
			cout << "Exiting..." << endl;
			active = false;
			break;

		default:
			cout << "Invalid option. Please try again. \n" << endl;
			break;
		}
	}
}