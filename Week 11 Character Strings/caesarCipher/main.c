#include <stdio.h>

void caesar (char cipher[], int shift);

int main () {

  char cipher[50];
  int shift;

  printf("Plaintext: ");
  scanf("%s", cipher);

  printf("Shift: ");
  scanf("%d", &shift);

  caesar (cipher, shift);

  return 0;
}

void caesar (char *cipher, int shift)
{
    int i;
    for(i=0; cipher[i] != '\0'; i++)
    {
        if(cipher[i]>='A' && cipher[i]<='Z')
            cipher[i] = (cipher[i]-65+shift)%26 + 65;

        else if (cipher[i]>='a' && cipher[i]<='z')
            cipher[i] = (cipher[i]-97+shift)%26 + 97;
    }

    printf("Cipher text: %s\n", cipher);

}
