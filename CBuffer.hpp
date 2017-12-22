//
//  CBuffer.hpp
//  CombOver
//
//  Created by Luke Zeitlin on 27/07/2017.
//
//

#ifndef CBuffer_hpp
#define CBuffer_hpp

#include <stdio.h>

#endif /* CBuffer_hpp */


class Cbuffer
{
    
private:
    double m_delayLength;
    int writeIndex;
    int m_length;
    double* mpBuffer = NULL;
    int interpSampN;
    
    
public:
    Cbuffer(int length = 44100);
    ~Cbuffer();
    void reset(int length = 44100);           
    void setDelayLength(int delayLength);
    void writeToBuffer(double inVal);
    void setDelayLength(double newDelay);
    double getRead();
    double lagrangeInterp(double* dataPoints, int length, double x);
    void setInterpSamN(int numSams);
};
