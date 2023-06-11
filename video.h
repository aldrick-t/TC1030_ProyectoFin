#pragma once
#include <iostream>
#include <string>

using namespace std;

class Video {
protected:
	int id;
	string type;
	string name;
	string genre;
	float rating;
	int releaseYear;
	int duration;
public:
	Video(string name, string genre, float rating, int releaseYear);
	Video(string name, string genre, int releaseYear);

	string getType();
	string getName();
	string getGenre();
	float getRating();
	int getReleaseYear();
	int getDuration();

	void rateVideo(float rating);
	virtual void showInfo();
};
