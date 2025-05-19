
int main(){
    char user1, user2;
    char password1, password2;
    int tried = 0;

    user1 = "hola123";
    password1 = "asd123";
    printf("Enter user: ");
    scanf("%s", user2);
    if(user1 == user2)
    {
        printf("\nEnter password: ");
        scanf("%s", user2);
        if (password1 == password2)
        {
            printf("Acceso concedido");
        }else
        {
            printf("Contraseña incorrecta");
            tried += 1;
        }
        
    }
}