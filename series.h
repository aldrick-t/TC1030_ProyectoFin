#pragma once
#include <iostream>
#include <string>
#include "video.h"

using namespace std;

class Series : public Video {
protected:
	int epCount;
public:
	Series(string name, string genre, float rating, int releaseYear, int epCount) : Video(name, genre, rating, releaseYear) {
		this->type = "Series";
		this->epCount = epCount;
	}

	Series(string name, string genre, int releaseYear, int epCount) : Video(name, genre, releaseYear) {
		this->type = "Series";
		this->epCount = epCount;
	}
	int getEpCount() { return epCount; }
	void showInfo() {
		Video::showInfo();
		cout << "Episode Count:\t" << epCount << endl;
	}
};
