#pragma once
#include <iostream>
#include <string>

using namespace std;

class Video {
protected:
	string type;
	string name;
	string genre;
	float rating;
	int releaseYear;
	int duration;
public:
	Video(string name, string genre, float rating, int releaseYear);
	Video(string name, string genre, int releaseYear);
	Video(string name, int releaseYear);
	Video(string name, float rating);

	string getType();
	string getName();
	string getGenre();
	float getRating();
	int getReleaseYear();
	int getDuration();

	void rateVideo(float rating);
	virtual void showInfo();
};
