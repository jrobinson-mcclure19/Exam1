#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;
// Gives inital title for movie
Movie::Movie()
{
	movie = " ";
}
// implement constructor
Movie::Movie(string newTitle, string newGenre, int newShowTime)
{
	Title = newTitle;
	Genre = newGenre;
	Showtime = newShowTime;
}
// return movie title 
string Movie::GetTitle()
{
	return Title;
}
// return movie genre
string Movie::GetGenre()
{
	return Genre;
}
// return movie show time
int Movie::GetShowtime()
{
	return Showtime;
}
