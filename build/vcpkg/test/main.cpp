#include <veg/canvas.hpp>

#include <iostream>

int main(int argc, const char** argv){
    veg::canvas c({10, 20});

    std::cout << "canvas size = " << c.get_image_span().dims() << std::endl;

    return 0;
}
