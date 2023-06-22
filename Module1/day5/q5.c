typedef struct Book{
    char author[20];
    int price;
} b;
void swap_values(b * ptr1, b * ptr2){
    char tempName[20];
    strcpy(tempName, ptr1->author);
    strcpy(ptr1->author, ptr2->author);
    strcpy(ptr2->author, tempName);

    int tempAge = ptr1->price;
    ptr1->price = ptr2->price;
    ptr2->price = tempAge;
}

int main()
{
    b book1,book2;
    b *ptr1 = &book1;
    b *ptr2 = &book2;
    
    printf("enter details of book 1\n");
    printf("\nenter author name : ");
    scanf("%s",(ptr1->author));
    printf("\nenter the price of the book");
    scanf("%d",&(ptr1->price));
    
    printf("enter details of book 2\n");
    printf("\nenter author name : ");
    scanf("%s",(ptr2->author));
    printf("\nenter the price of the book : ");
    scanf("%d",&(ptr2->price));
    
    printf("\nBefore swapping:\n");
    printf("Book 1 - author: %s, Price: %d\n", ptr1->author, ptr1->price);
    printf("Book 2 - author: %s, Price: %d\n", ptr2->author, ptr2->price);

    swap_values(ptr1, ptr2);

    printf("\nAfter swapping:\n");
    printf("Book 1 - author: %s, Price: %d\n", ptr1->author, ptr1->price);
    printf("Book 2 - author: %s, Price: %d\n", ptr2->author, ptr2->price);

    return 0;
}
