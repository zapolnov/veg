#include <veg/canvas.hpp>

int main(int argc, const char** argv){
    veg::canvas c({10, 20});

    std::cout << "canvas size = " << c.get_image_span().dims() << std::endl;

    return 0;
}
