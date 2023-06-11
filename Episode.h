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
	string parentSeries;
public:
	Episode(string name, string parentSeries, float rating, int duration, int episodeNumber, int seasonNumber) : Video(name, rating) {
		this->parentSeries = parentSeries;
		this->type = "Episode";
		this->episodeNumber = episodeNumber;
		this->seasonNumber = seasonNumber;
		this->duration = duration;
	}
	Episode(string name, string parentSeries, int releaseYear, int duration, int episodeNumber, int seasonNumber) : Video(name, releaseYear) {
		this->parentSeries = parentSeries;
		this->type = "Episode";
		this->episodeNumber = episodeNumber;
		this->seasonNumber = seasonNumber;
		this->duration = duration;
	}
	string getParentSeries() { return parentSeries; }
	int getEpisodeNumber() { return episodeNumber; }
	int getSeasonNumber() { return seasonNumber; }
	int getDuration() { return duration; }
	void showInfo() {
		Video::showInfo();
		cout << "Duration:\t" << duration << endl;
		cout << "Episode Number:\t" << episodeNumber << endl;
		cout << "Season Number:\t" << seasonNumber << endl;
	}
};
