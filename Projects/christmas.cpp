/*
    Filename: christmas.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/11/2015
    Description: Display the song 12 days of Christmas using functions and vectors.
*/

//Add libraries here
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Declare functions here
void song(vector<string>&);
void printlyrics(vector<string> & lyrics);

//Declare global variables here

int main() {

    vector<string> lyrics;
    song(lyrics);

    return 0;
}

//Insert user defined functions here
void song(vector<string> & lyrics) {
    
    lyrics.push_back("On the first day of Christmas my true love gave to me, a partridge in a pear tree.");
    lyrics.push_back("On the second day of Christmas my true love gave to me, two turtle doves and a partridge in a pear \n tree.");
    lyrics.push_back("On the third day of Christmas my true love gave to me, three french hens, two turtle doves, and a  \n partridge in a pear tree.");
    lyrics.push_back("On the fourth day of Christmas my true love gave to me, four calling birds, three french hens, two \n turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the fifth day of Christmas my true love gave to me, -five golden rings-, four calling birds,    \n three french hens, two turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the sixth day of Christmas my true love gave to me, six geese a-laying, -five golden rings-,    \n four calling birds, three french hens, two turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the seventh day of Christmas my true love gave to me, seven swans a swimming, six geese         \n a-laying, -five golden rings-, four calling birds, three french hens, two turtle doves, and a \n partridge in a pear tree.");
    lyrics.push_back("On the eighth day of Christmas my true love gave to me, eight maids a-milking, seven swans a       \n swimming, six geese a-laying, -five golden rings-, four calling birds, three french hens, two \n turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the ninth day of Christmas my true love gave to me, nine ladies dancing, eight maids a-milking, \n seven swans a swimming, six geese a-laying, -five golden rings-, four calling birds, three    \n french hens, two turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the tenth day of Christmas my true love gave to me, ten lords a-leaping, nine ladies dancing,   \n eight maids a-milking, seven swans a swimming, six geese a-laying, -five golden rings-, four  \n calling birds, three french hens, two turtle doves, and a partridge in a pear tree.");
    lyrics.push_back("On the eleventh day of Christmas my true love gave to me, eleven pipers piping, ten lords          \n a-leaping, nine ladies dancing, eight maids a-milking, seven swans a swimming, six            \n geese a-laying, -five golden rings-, four calling birds, three french hens, two turtle doves, and \n a partridge in a pear tree.");
    lyrics.push_back("On the twelveth day of Christmas my true love gave to me, twelve drummers drumming, eleven pipers  \n piping, ten lords a-leaping, nine ladies dancing, eight maids a-milking, seven swans a        \n swimming, six geese a-laying, -five golden rings-, four calling birds, three french hens, two     \n turtle doves, and a partridge in a pear tree.");
    
    printlyrics(lyrics);
    
}

void printlyrics(vector<string> & lyrics)
{
    for(int i=0;i < lyrics.size();i++)
    {
        cout << lyrics[i] << endl;
        cout << "**************************************************************************************************" << endl;
    }
    cout << endl;
}
