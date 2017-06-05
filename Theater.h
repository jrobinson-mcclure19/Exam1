#include <iostream>
#include "Movie.h"
#include <string>


using namespace std;
#ifndef THEATER_H
#define THEATER_H

// Class Theater
class Theater
{

public:
	// name and phone number for theater
	Theater(string Name, string Phone);
	// adds movie at a time
	void AddMovie(Movie &movie);
	// gets movie based on hour
	string GetMovieForHour(int hour);
	// gets showtime for genre
	int GetShowTimeForGenre(string genre);
	// function for price of popcorn
	int GetPopcornPrice();
	// function for price of coke
	int GetCokePrice();

private:
	// data fields
	string name;
	string phone;
	string genre;
	int hour;
	int PopcornPrice = 5;
	int Cokeprice = 4;

};

#endif // !Theater_H
