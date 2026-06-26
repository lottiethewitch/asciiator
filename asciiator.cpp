#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

std::string stringOfASCII = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'."; //size: 69 

/*
 * Goal: input an image w/ desired scaling. Outputs an AxB array (with each line ending in /n) of ASCII characters that 
 * correspond to the shading of the image
 *
 * 
 *
 *
 */

enum scale {
  XSMALL,
  SMALL,
  MEDIUM,
  LARGE
};


int manipulateImage(file: ofstream) {
// Create a buffer for our image.
  Mat img = imread("image.jpg");
  int height = img.rows;
  int width = img.cols;
  uchar luminance;


  string ascii_array[width][height];

  for (int i = 0; i < img.cols; i++) {
	for (int j = 0; j < img.rows; j++) {
	  Vec3b pixel = img.at<Vec3b>(y, x);
	  uchar blue = pixel[0];
	  uchar green = pixel[1];
	  uchar red = pixel[2];
	  luminance = getLumi(red, blue, green);	
	  
	  j++;
	};
	i++;
  };
};

int getASCIIValue(luminance: uchar) {
// Get the ASCII Value of a grouping of pixels
	int lumi = luminance - 0;
	int lumi_space = lumi / 4;
	char ascii = ascii_array[lumi_space];

}

uchar getLumi(uchar: R, uchar: B, uchar: G) {
  return (0.2126*rgb.R + 0.7152*rgb.G + 0.0722*rbg.B);
}

int scaleImage() {
// Scale buffer image

}

int main(int argc, argv[]) {
  ofstream file;

  file.open("example.png")
   
  return 0;
};
