#include <iostream>
#include <string>

using namespace std;

#ifndef MOVIE_H
#define MOVIE_H

// Class for Movie
class Movie
{
public:
	Movie(); // default movie
	Movie(string Title, string Genre, int ShowTime);// for Genre, only Action, Comedy, Horror, and Documentary. If none of those, default to Comedy
	string GetTitle();	// Returns the movie title
	string GetGenre();	// Returns the movie genre
	int GetShowtime();	//When is this movie shown?

	private:
		// data fields
	string Title;
	string Genre;
	int Showtime;
	string movie;
};

#endif // !MOVIE_H