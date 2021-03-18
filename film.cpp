#include "film.h"

void Film::copy(const Film& other_Film)
{
	this->filmName = new char[strlen(other_Film.filmName) + 1];
	strcpy_s(this->filmName, strlen(other_Film.filmName) + 1, other_Film.filmName);

	this->filmDirectorName = new char[strlen(other_Film.filmDirectorName) + 1];
	strcpy_s(this->filmDirectorName, strlen(other_Film.filmDirectorName) + 1, other_Film.filmDirectorName);
	
	this->receivedAwards = other_Film.receivedAwards;
}

void Film::erase()
{
	delete [] this-> filmName;
	delete [] this-> filmDirectorName;
}

Film::Film()
{
	this->filmName = new char[6];
	strcpy_s(this->filmName, 6, "Empty");
	this->filmDirectorName = new char[6];
	strcpy_s(this->filmDirectorName, 6, "Empty");
	this->receivedAwards = 0;
}

Film& Film::operator=(const Film& other_Film)
{
	if (this != &other_Film)
	{
		this->erase();
		this->copy(other_Film);
	}
	return *this;
}

Film::Film(const Film& other_Film)
{
	this->copy(other_Film);
}

Film::~Film()
{
	this->erase();
}

void Film::setFilmName(const char* _filmName)
{
	strcpy_s(this->filmName, strlen(_filmName) + 1, _filmName);
}

void Film::setFilmDirectorName(const char* _filmDirectorName)
{
	strcpy_s(this->filmDirectorName, strlen(_filmDirectorName) + 1, _filmDirectorName);
}

void Film::setReceivedAwards(int _receivedAwards)
{
	this->receivedAwards = _receivedAwards;
}

const char* Film::getFilmName() const
{
	return this->filmName;
}

const char* Film::getfilmDirectorName() const
{
	return this->filmDirectorName;
}

int Film::getReceivedAwards() const
{
	return this->receivedAwards;;
}

void Film::print() const
{
	std::cout << filmName << std::endl;
	std::cout << filmDirectorName << std::endl;
	std::cout << receivedAwards << std::endl;

}



