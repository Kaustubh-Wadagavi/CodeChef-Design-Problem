#include <iostream>
using namespace std;

string inputString;

struct RobotSimulation
{
    
    int positionA;
    int jumpA;
    
    int positionB;
    int jumpB;
    
    RobotSimulation()
    {
        
        positionA = -1;
        positionB = -1;
        
        jumpA = 0;
        jumpB = 0;
        
    }
    
    void readState()
    {
        
        cin >> inputString;
        
        const char* charPointer = inputString.data();
        int currentPosition = 0;
        
        while( *charPointer != '\0' )
        {
            
            if( *charPointer == 'A' )
            {
                positionA = currentPosition;
            }
            
            if( *charPointer == 'B' )
            {
                positionB = currentPosition;
            }           
        
            currentPosition += 1;
            charPointer += 1;
            
        }
        
        cin >> jumpA;
        cin >> jumpB;        
        
    }
    
    bool willCollide()
    {
        
        int distance = ( positionB - positionA );
        int deltaDistance = ( jumpA + jumpB );
        
        return ( ( distance % deltaDistance ) == 0 );
        
    }
    
};

int main( void ) 
{

    RobotSimulation robotSimulation1;
    
    int testCount;
    cin >> testCount;
    
    for( int test = 1; test <= testCount; test += 1 )
    {
        
        robotSimulation1.readState();
        
        if( robotSimulation1.willCollide() )
        {
            cout << "unsafe" << endl;
        }
        else
        {
            cout << "safe" << endl;
        }
        
    }

	return 0;
    
}
