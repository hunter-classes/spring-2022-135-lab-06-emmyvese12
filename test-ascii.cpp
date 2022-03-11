#include <string>
#include <iostream>

void testascii(std::string text){
    char c;
    int intResult;

    for (int i = 0; i < text.length(); i++){
        c = text[i];
        intResult = (int)c;
        std::cout << c << " " << intResult << "\n";
        
    }

}

int main(){
    std::string text1, text2, text3;
    text1 = "Cat :3 Dog";
    std::cout << "Text: " << text1 << std::endl;
    testascii(text1);
    std::cout << "\n";

    text2 = "Hello World!";
    std::cout << "Text: " << text2 << std::endl;
    testascii(text2);
    std::cout << "\n";

    text3 = "Carrot cake is the best cake";
    std::cout << "Text: " << text3 << std::endl;
    testascii(text3);
    
}