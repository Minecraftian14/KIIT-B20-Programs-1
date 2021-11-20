void main(){
    float a,b,c;

    printf("Enter the values of sides a, b and c = ");
    scanf("%f %f %f", &a, &b, &c);

    if((a+b)>c && (c+b)>a && (a+c)>b){
        printf("It is a triangle");
    }
    else{
        printf("Not a Triangle");
    }
}