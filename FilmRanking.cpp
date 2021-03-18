#include "FilmRanking.h"

void FilmRanking::copy(const FilmRanking& other_FilmRanking)
{
	this->Film = new char[strlen(other_FilmRanking.Film) + 1];
	strcpy_s(this->Film, strlen(other_FilmRanking.Film) + 1, other_FilmRanking.Film);
	this->size = other_FilmRanking.size;
}

void FilmRanking::erase()
{
	delete[] Film;
}

FilmRanking::FilmRanking()
{
	this->Film = new char[6];
	strcpy_s(this->Film, 6, "Empty");
	this->size = 0;
	
}

FilmRanking& FilmRanking::operator=(const FilmRanking &other_FilmRanking)
{
	if (this != &other_FilmRanking)
	{
		this->erase();
		this->copy(other_FilmRanking);
	}
	return *this;
}

FilmRanking::FilmRanking(const FilmRanking& other_FilmRanking)
{
	this->copy(other_FilmRanking);
}

FilmRanking::~FilmRanking()
{
	this->erase();
}

void FilmRanking::setFilm(const char* _Film)
{
	delete[] Film;
	Film = new char[strlen(_Film) + 1];
	strcpy(this->Film, strlen(_Film) + 1, _Film);

}

void FilmRanking::setSize(int _size)
{
	this->size = _size;
}

const char* FilmRanking::getFilm() const
{
	return this->Film;
}

int FilmRanking::getSize() const
{
	return this->size;
}

void FilmRanking::print()
{
	std::cout << Film << std::endl;
	std::cout << size << std::endl;
}
