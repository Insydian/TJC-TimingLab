#pragma once
#include <iostream>
#include <chrono>
#include <string>
using std::cout;
using std::endl;
/// <summary>
/// <para>To use:</para> 
/// <para>1) create a timer object</para>
/// <para>2) do the thing that you want to time</para>
///   3) destroy the timer object
/// </summary>
struct Timer
{
//member vars:
std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
std::chrono::time_point<std::chrono::high_resolution_clock> endTime;
std::chrono::duration<float> runtime;
//constuctor function - starts the clock
Timer()
{
    startTime = std::chrono::high_resolution_clock::now();
}
//destructor function - stops clock, displays execution time
~Timer()
{
        endTime = std::chrono::high_resolution_clock::now();
        runtime = endTime - startTime;
        //cout << "Execution time: " << endl;
        //cout << "In seconds : " << runtime.count() << endl; 
        cout << "In milliseconds: " << runtime.count() * 1000 << endl;
        //cout << "In microseconds: " << runtime.count() * 1000'000 << endl;
        //cout << "In NANOseconds: " << runtime.count()* 1'000'000'000<< endl; 
}
}; //end Timer struct def.
