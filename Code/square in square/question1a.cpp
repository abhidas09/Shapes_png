#include  <iostream>
#include <fstream>

using namespace std;

int main(){
    int width = 100;
    int height = 100;

    int inside_size = 50;

    ofstream fout;
    fout.open("question1a.pgm");

    //Outputting PGM file header
    fout << "P2" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl;//max pixel intensity

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            int x = j - (width/2);
            int y = i - (height/2);

            if ((x > (-inside_size)/2) && (x < (inside_size)/2) && (y > (-inside_size)/2) && (y < (inside_size)/2)){
                //inside square: black
                fout << 0 << " ";
            }
            else{
                //Outside square: White
                fout << 255 << " ";
            }
        }
        fout << endl;
    }

}