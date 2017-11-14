//Author:Riley Decker
#include<iostream>
#include<vector>
#include "bitmap.h"

using namespace std;
//Prototypes

vector<vector<Pixel> > checkSize(string);
bool checkInput(string, vector<vector<Pixel> >);
vector<vector<Pixel> > makeImage(vector<vector<Pixel>, int);
void averageImage(vector<vector<Pixel> > &);
Bitmap saveImage(vector<vector<Pixel>);

int main()
{
    vector<vector<Pixel> > bmp;
    Bitmap image1,image2,image3,image4,image5,image6,image7,image8,image9,image10;
    string file1,file2,file3,file4,file5,file6,file7,file8,file9,file10;
    //Collect image files from user
    cin>>file1;
    int imageCounter=1;
    for(int i=1;i<10;i++)
    {
        cout<<"Please input a file name"<<endl;
        cin>>file(i+1);
        if(file(i+1)=="DONE")
        {
            i=10;
        }
        string result;
        result=checkInput(file(i+1));
        if(result==true);
        {
            image.open(file(i+1));
            bmp=image.toPixelMatrix;
            Pixel rgb;
            makeImage(bmp);    
        }
        else
        {
            cout<<"Error with file"<<endl;
        }
        imageCounter++;
    }

    return 0;
}

vector< vector<Pixel> > sizeCheck(string firstFile)
{
    Bitmap image;
    vector< vector<Pixel> > bmp;
    image.open(firstFile);
    bmp=image.toPixelMatrix();
    return bmp;
}

bool checkInput(string testFile,vector<vector<Pixel> > firstFile)
{
    Bitmap image;
    vector<vector<Pixel> > bmp;
    //Test if valid bmp image
    image.open(testFile);
    bool validBmp=image.isImage();
    if(validBmp==1)
    {
        //Test to see if images are same size
        bmp=image.toPixelMatrix();
        if(bmp.size()<firstFile.size() && bmp[0].size()<firstFile[0].size();)
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

vector< vector<Pixel> > makeImage(vector<vector<Pixel> > imageFile)
{
    Pixel rgb;
    for(int r=0;r<imageFile.size();r++)
    {
        for(int c=0;c<imageFile[r].size();c++)
        {
            rgb=imageFile[r][c];
            int avg=(rgb.red+rgb.green+rgb.blue)/3;
            rgb.red=avg;
            rgb.green=avg;
            rgb.blue=avg;
            imageFile[r][c]=rgb;
        }    
    }
    return imageFile;    
}

