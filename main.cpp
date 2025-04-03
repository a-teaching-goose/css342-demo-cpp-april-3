#include <iostream>

void test();

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

    std::string to_string() {
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }

    // operator overload
    bool operator==(Fraction &other) {
        return this->numerator == other.numerator &&
               this->denominator == other.denominator;
    }
};

Fraction reduce(Fraction input) {
    return {-1, -1}; // TODO: replace this with the real code
}

int main() {
    test();
}

void test() {
    // given an input, the actual output should match the expected output
    Fraction inputs[4] = {Fraction(1,2),
                        Fraction{2, 4},
                        Fraction{4, 2},
                        Fraction{6, 8}
    };

    Fraction outputs[4] = {Fraction(1,2),
                          Fraction{1, 2},
                          Fraction{2, 1},
                          Fraction{3, 4}
    };

    // call the function
    for (int i = 0; i < 4; ++i) {
        Fraction input = inputs[i];
        Fraction expect = outputs[i];

        Fraction actual = reduce(input);

        // compare expected vs actual
        if (expect == actual) {
            std::cout << "PASS!" << std::endl;
        } else {
            std::cout << "FAIL! case is: " << input.to_string()  << std::endl;
        }
    }




}



