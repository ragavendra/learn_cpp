#include <cstdio>

#include "Config.h"
#include "interpolate.h"
#include <string>
#include <vector>
#include <iostream>

int main(int argc, char* argv[]) 
{
    // output program location and version
    printf("Running: %s\nVersion: %i.%i\n\n",
        argv[argc-argc],
        VERSION_MAJOR, VERSION_MINOR);

	std::string s1("test string");
	std::vector<double> v1;
	v1.push_back(22.9);

	std::cout << "Lets seet hsi txt." << std::endl;

    float t = 0.0f;     // elapsed time
    float b = 10.0f;    // start value
    float c = 20.0f;    // change value
    float d = 5.0f;     // duration

    // output argument values
    printf("t - %4.3f\nb - %4.3f\nc - %4.3f\nd - %4.3f\n\n",
        t, b, c, d);
    
    // output headings
    printf("%-20s%s\n", "Value", "Elapsed Time");
    printf("%-20s%s\n", "-----", "------------");

    // simulate values
    for (t=0.0f; t < d; t+= .25f) {
        printf("%-20.3f%4.3f secs\n",
            animation::linear(t,b,c,d), t);
		// animation::easeInQuad
    }

    printf("\n-> Simulation finished...\n");

    return 0;
}
