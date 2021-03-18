#pragma once
#include <iostream>
#include <cstring>

class FilmRanking {
	private:
		char* Film = new char[30];
		int size;

		void copy(const FilmRanking& other_FilmRanking);
		void erase();

	public:
		FilmRanking();
		FilmRanking& operator=(const FilmRanking& other_FilmRanking);
		FilmRanking(const FilmRanking& other_FilmRanking);
		~FilmRanking();

		void setFilm(const char* _Film);
		void setSize(int _size);

		const char* getFilm() const;
		int getSize() const;

		void print();



};
