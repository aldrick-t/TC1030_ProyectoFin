#pragma once
#include <iostream>
#include <string>
#include "series.h"
#include "video.h"

using namespace std;
/*
*/

class Episode : public Video {
private:
	int episodeNumber;
	int seasonNumber;
public:
	Episode(string name, float rating, int duration, int episodeNumber, int seasonNumber) : Video(name, genre, (float)rating) {
		this->type = "Episode";
		this->episodeNumber = episodeNumber;
		this->seasonNumber = seasonNumber;
		this->duration = duration;
	}
	Episode(string name, int releaseYear, int episodeNumber, int seasonNumber) : Video(name, genre, releaseYear) {
		this->type = "Episode";
		this->episodeNumber = episodeNumber;
		this->seasonNumber = seasonNumber;
		this->duration = duration;
	}
	int getEpisodeNumber() { return episodeNumber; }
	int getSeasonNumber() { return seasonNumber; }
	void showInfo() {
		Video::showInfo();
		cout << "Duration:\t" << duration << endl;
		cout << "Episode Number:\t" << episodeNumber << endl;
		cout << "Season Number:\t" << seasonNumber << endl;
	}
};
