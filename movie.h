#pragma once
#include <iostream>
#include <string>
#include "video.h"
using namespace std;

class Movie : public Video {
private:
	int nominations;
public:
	Movie(string name, string genre, float rating, int releaseYear, int duration, int nominations) : Video(name, genre, rating, releaseYear) {
		this->type = "Movie";
		this->nominations = nominations;
		this->duration = duration;
	}
	Movie(string name, string genre, int releaseYear, int duration, int nominations) : Video(name, genre, releaseYear) {
		this->type = "Movie";
		this->nominations = nominations;
		this->duration = duration;
	}
	int getNominations() { return nominations; }
	void showInfo() {
		Video::showInfo();
		cout << "Duration:\t" << duration << endl;
		cout << "Nominations:\t" << nominations << endl;
	}
};