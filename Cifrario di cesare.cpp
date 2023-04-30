#include <iostream>
#include <string>

using namespace std;

string encryptCaesarCipher(string text, int key)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isalpha(text[i]))
        {
            char c = text[i];
            if (isupper(c))
                result += char(int(c + key - 65) % 26 + 65);
            else
                result += char(int(c + key - 97) % 26 + 97);
        }
        else
        {
            result += text[i];
        }
    }

    return result;
}

int main()
{
    string text = "Ciao Salve";
    int key = 3;

    string encryptedText = encryptCaesarCipher(text, key);

    cout << "Testo cifrato: " << encryptedText << endl;

    return 0;
}
