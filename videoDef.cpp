#include <iostream>
#include <string>
#include "video.h"
using namespace std;

Video::Video(string name, string genre, float rating, int releaseYear) {
	this->name = name;
	this->genre = genre;
	this->rating = rating;
	this->releaseYear = releaseYear;
};
Video::Video(string name, string genre, int releaseYear) {
	this->name = name;
	this->genre = genre;
	this->rating = 0;
	this->releaseYear = releaseYear;
};
Video::Video(string name, int releaseYear) {
	this->name = name;
	this->releaseYear = releaseYear;
};
Video::Video(string name, float rating) {
	this->name = name;
	this->rating = rating;
};

string Video::getType() { return type; }

string Video::getName() { return name; }

string Video::getGenre() { return genre; }

float Video::getRating() { return rating; }

int Video::getReleaseYear() { return releaseYear; }

int Video::getDuration() { return duration; }

void Video::rateVideo(float rating) {
	this->rating = rating;
};

void Video::showInfo() {
	cout << "Video Type:\t" << type << endl;
	cout << "Video Name:\t" << name << endl;
	cout << "Genre:\t\t" << genre << endl;
	cout << "Rating:\t\t" << rating << "/5" << endl;
	cout << "Release Year:\t" << releaseYear << endl;
};