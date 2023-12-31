#include "PPM.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


void setDimensions(string line, int* m_width, int* m_height) {
    stringstream stream(line);
    string width;
    string height;
    stream >> width;
    stream >> height;
    *m_width = stoi(width);
    *m_height = stoi(height);
}


void parseLine(vector<int>* pixelData, string line) {
    stringstream stream(line);

    string chunk;
    while (stream >> chunk) {
        pixelData->push_back(stoi(chunk));
    }
}

// Constructor loads a filename with the .ppm extension
PPM::PPM(std::string fileName) {
    ifstream file;
    file.open(fileName);

    if (file.is_open()) {
        string line;
        bool retrievedDimensions = false;
        // skip first line -> assume its always P3
        getline(file, line);

        while (getline(file, line)) {
            //disregard comments
            if (line[0] == '#') {
                continue;
            }
            // check if we have retrieved dimensions yet if not parse it
            if (!retrievedDimensions) {
                setDimensions(line, &m_width, &m_height);
                retrievedDimensions = true; 
            } else {
                parseLine(&m_PixelData, line);
            }
        }
    }
    file.close();
}

// Destructor deletes(delete or delete[]) any memory that has been allocated
// or otherwise calls any 'shutdown' or 'destroy' routines for this deletion
// to occur.
PPM::~PPM(){
    m_PixelData.clear();
}

// Saves a PPM Image to a new file.
void PPM::savePPM(std::string outputFileName) const {
    ofstream outFile;
    outFile.open(outputFileName);

    //write header
    outFile << "P3" << endl;
    //write dimensions of ppm file
    outFile << m_width << " " << m_height << endl;
    for (int i = 0; i < m_PixelData.size(); i++) {
        outFile << m_PixelData.at(i) << endl;
    }
    outFile.close();
}

// Darken halves (integer division by 2) each of the red, green
// and blue color components of all of the pixels
// in the PPM. Note that no values may be less than
// 0 in a ppm.
void PPM::darken(){
    for (int i = 0; i < m_PixelData.size(); i++) {
        int pixelValue = m_PixelData.at(i);
        m_PixelData.at(i) = pixelValue == 0 ? 0 : pixelValue / 2;
    }
}

// Lighten doubles (integer multiply by 2) each of the red, green
// and blue color components of all of the pixels
// in the PPM. Note that no values may be greater than
// 255 in a ppm.
void PPM::lighten(){
    for (int i = 0; i < m_PixelData.size(); i++) {
        int pixelValue = m_PixelData.at(i);
        m_PixelData.at(i) = pixelValue * 2 > 255 ? 255 : pixelValue * 2;
    }
}

// Sets a pixel to a specific R,G,B value 
// Note: You do not *have* to use setPixel in your implementation, but
//       it may be useful to implement.
void PPM::setPixel(int x, int y, uint8_t R, uint8_t G, uint8_t B){
    // TODO: Optional to implement.
}
