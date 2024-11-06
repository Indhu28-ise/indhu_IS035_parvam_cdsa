# include<stdio.h>
void main()
{
    int i = 27 / 5;
    switch(i) {
        case 5:
            printf("Five");
            switch('a') {
                                case 'a' : puts("Pune");
                                case 'b' : puts("Mysuru");
                        }
        case 6:
            printf("Six");
            break;
        default:
            printf("None");
    }
}