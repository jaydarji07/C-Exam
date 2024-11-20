#include <iostream>
#include <string>
using namespace std;


class Book {
private:
    string title;
    string author;
    int publishedYear;

public:
  
    Book(string t, string a, int y) : title(t), author(a), publishedYear(y) {}

  
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getPublishedYear() const { return publishedYear; }

  
    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Published Year: " << publishedYear << endl;
    }
};

int main() {
    
    Book books[] = {
        Book("1984", "George Orwell", 1949),
        Book("To Kill a Mockingbird", "Harper Lee", 1960),
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925)
    };

   
    int size = sizeof(books) / sizeof(books[0]);

    
    for (int i = 0; i < size; i++) {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].display();
        cout << endl;
    }

    return 0;
}
