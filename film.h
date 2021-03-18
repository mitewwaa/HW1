#pragma once
#include <iostream>
#include <cstring>


class Film {
	private:
		char* filmName;
		char* filmDirectorName;
		int receivedAwards;

		void copy(const Film& other_Film);
		void erase();

	public:
		Film();
		Film& operator=(const Film& other_Film);
		Film(const Film& other_Film);
		~Film();

		void setFilmName(const char* _filmName);
		void setFilmDirectorName(const char* _filmDirectorName);
		void setReceivedAwards(int _receivedAwards);

		const char* getFilmName() const;
		const char* getfilmDirectorName() const;
		int getReceivedAwards() const;

		void print() const;
};
