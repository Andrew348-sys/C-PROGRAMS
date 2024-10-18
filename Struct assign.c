/* Author: Andrew Kamau
Reg no. PA107/G/25166/24
Course: Computer System Engineering*/

#include <stdio.h>

struct book
{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN [13];
    float price;
} booka;

int main() {
    
    printf("Enter the book title: ");
    fgets(booka.title, sizeof(booka.title), stdin);
    printf("Enter the author's name: ");
    fgets(booka.author, sizeof(booka.author), stdin);
	printf("Enter the publication year: ");
    scanf("%d", &booka.publication_year);
	printf("Enter the ISBN: ");
    scanf("%s", booka.ISBN);
	printf("Enter the price: ");
    scanf("%f", &booka.price);
    
    printf("\tBook title: %s", booka.title);
    printf("\tAuthor's name: %s", booka.author);
    printf("\tPublication year: %d", booka.publication_year);
    printf("\n\tBook ISBS: %s ", booka.ISBN);
    printf("\n\tBook price: %.2f ", booka.price);
    
      return 0;
}