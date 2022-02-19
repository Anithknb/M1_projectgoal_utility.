
 
       
        case 1:
 
            printf("Enter book name = ");
            scanf("%s", lib[i].book_name);
 
            printf("Enter author name = ");
            scanf("%s", lib[i].author);
 
            printf("Enter pages = ");
            scanf("%d", &lib[i].pages);
 
            printf("Enter price = ");
            scanf("%f", &lib[i].price);
            count++;
 
            break;
 
     
        case 2:
            printf("you have entered"
                   " the following "
                   "information\n");
            for (i = 0; i < count; i++) {
 
                printf("book name = %s",
                       lib[i].book_name);
 
                printf("\t author name = %s",
                       lib[i].author);
 
                printf("\t  pages = %d",
                       lib[i].pages);
 
                printf("\t  price = %f",
                       lib[i].price);
            }
            break;
  case 3:
            exit(0);
        }
    }
    return 0;
}
