#include <iostream>
#include <tuple> // Required for std::tuple
#include <string>

using namespace std;

// A function that returns three values using a tuple.
tuple<string, int, double> getSensorReading()
{
    return {"Temperature", 25, 98.6};
}

int main()
{
    // Create a tuple
    tuple<int, string, bool> myTuple(1, "Hello", true);

    // Access elements using std::get<index>()
    cout << "Tuple element 0: " << get<0>(myTuple) << endl;
    cout << "Tuple element 1: " << get<1>(myTuple) << endl;

    // --- Using a tuple to receive multiple return values ---
    auto sensorData = getSensorReading();
    cout << "\nSensor: " << get<0>(sensorData) << ", Value: " << get<2>(sensorData) << endl;

    // --- C++17 Structured Bindings work beautifully with tuples ---
    auto [name, id, value] = getSensorReading();
    cout << "Sensor (unpacked): " << name << ", ID: " << id << ", Value: " << value << endl;

    return 0;
}