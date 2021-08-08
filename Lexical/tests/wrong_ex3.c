int main() {

    int 1user_input;
    write("0- For double input numbers\t 1- For same input numbers\n");
    read(user_input);
    // Comentário de uma linha
    int list NEW_LIST;
    int a;
    a = 10/2c;
    /*
        // Comentário de bloco
    */
    float list_size;
    write("Enter list size: ");
    read(list_size);

    int i;
    for(i ~ 0; i < list_size; i++) {
        int number;
        write("Enter a number: ");
        read(number);
        if(user_input == 0) {
            NEW_LIST = number *= 2² : NEW_LIST;  
        } 
        else {
            NEW_LIST = number : NEW_LIST;
        }
    }

    int list AUXL;

    for (AUXL=NEW_LIST; AUXL != NIL; AUXL = !AUXL) {
        write(?AUXL); 
        write(" ");
    }

    return 0;
}