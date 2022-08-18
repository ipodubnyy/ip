#include <iostream>
#include <string>
using namespace std;


int main()
{
  float tileLong, tileShort, roomSideA, roomSideB;
  float new_tileLong, new_tileShort, new_roomSideA, new_roomSideB;
  
  cout << "Enter the length of the room (meters or feet): ";
  cin >> roomSideA;

  cout << "Enter the width of the room (meters or feet): ";
  cin >> roomSideB;

  cout << "Enter the length of the tile (cm or in): ";
  cin >> tileLong;

  cout << "Enter the width of the tile (cm or in): ";
  cin >> tileShort;
  
  cout << "Did you use metric or imperial system? Enter 'm' for Metric or 'i' for Imperial: ";
  string systemUsed;
  cin >> systemUsed;

  cout << "Would you like to convert to another system? Enter Y/N: ";
  string convertOK;
  cin >> convertOK;

  if (convertOK == "Y")
  {
    if (systemUsed == "m")
    {
      cout << "Converting to Imperial... ";
      new_roomSideA = (roomSideA * 12) * 2.54; // all in inches now
      new_roomSideB = (roomSideB * 12) * 2.54; // all in inches now
      new_tileLong = tileLong * 2.54;
      new_tileShort = tileShort * 2.54; 
      cout << "done" << endl;
    }
    else if (systemUsed == "i")
    {
      cout << "Converting to Metric... ";
      new_roomSideA = (roomSideA * 12) / 2.54; // all in cm now
      new_roomSideB = (roomSideB * 12) / 2.54;
      new_tileLong = tileLong / 2.54;
      new_tileShort = tileShort / 2.54;
      cout << "done" << endl;
    }
  }
  else if (convertOK == "N")
  {
    cout << "You decided not to do any convertion." << endl;
    
    if (systemUsed == "m")
    {
      new_roomSideA = roomSideA * 100; // all in cm now
      new_roomSideB = roomSideB * 100; // all in cm now
      new_tileLong = tileLong;
      new_tileShort = tileShort;
    }
    else if (systemUsed == "i")
    {
      new_roomSideA = roomSideA * 12; // all in inches now
      new_roomSideB = roomSideB * 12; // all in inches now
      new_tileLong = tileLong;
      new_tileShort = tileShort;
    }
  }

  // performing calculations
  // we want to see how many rows (axle X) and stacks (axle Y) of tiles do we need
  
  float rowsX;
  float stacksY;
  // float spacer = 1/12; // spacers are fixed size

  rowsX = new_roomSideA / new_tileLong;
  cout << "The number of tiles in a row is " << rowsX << endl;

  stacksY = new_roomSideB / new_tileShort;
  cout << "The number of rows of tiles is " << stacksY << endl;

  cout << "Done" << endl;
  return 0;
}
