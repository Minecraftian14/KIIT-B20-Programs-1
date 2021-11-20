 #include<stdio.h>

int main(){
    int p, c, m, b, e, avg;
    printf("Enter Marks for physics: ");
    scanf("%d", &p);
    printf("Enter Marks for chemistry: ");
    scanf("%d", &c);
    printf("Enter Marks for maths: ");
    scanf("%d", &m);
    printf("Enter Marks for biology: ");
    scanf("%d", &b);
    printf("Enter Marks for english: ");
    scanf("%d", &e);
    avg = (p+c+m+b+e)/5;
    if(avg>59){
        printf("First");
    }
    if(avg>49){
        printf("Second");
    }
    if(avg>39){
        printf("Third");
    }
    else{
        printf("Fail");
    }

    return 0;
}