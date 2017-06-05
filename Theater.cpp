#include <iostream>
#include <string>
#include "Theater.h"
#include "Movie.h"

using namespace std;
// constructor that gives theater name and phone
Theater::Theater(string newName, string newPhone)
{
	name = newName;
	phone = newPhone;
}
// function that gets movie title 
void Theater::AddMovie(Movie &movie)
{
	movie.GetTitle();
}
// return hour a movie is shown at theater
string Theater::GetMovieForHour(int hour)
{
	this->hour;
	return hour;
}
// return showtime for the genre
int Theater::GetShowTimeForGenre(string genre)
{
	this->genre;
	return genre;
}
// returns popcorn prices
int Theater::GetPopcornPrice()
{
	return PopcornPrice;
}
// returns coke prices for theater 
int Theater::GetCokePrice()
{
	return Cokeprice;
}

