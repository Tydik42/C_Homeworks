#include "solution.h"


/*Написать программу — телефонный справочник. Она должна уметь хранить имена и номера телефонов, 
 *в интерактивном режиме осуществлять следующие операции:
 *• 0 - выйти
 *• 1 - добавить запись (имя и телефон)
 *• 2 - распечатать все имеющиеся записи
 *• 3 - найти телефон по имени
 *• 4 - найти имя по телефону
 *• 5 - сохранить текущие данные в файл
 *При запуске программа должна читать данные из файла (того самого, в который сохраняет данные), 
 *если файла нет — начинать с пустой базы номеров. Размер базы ограничен сотней записей.*/


void getFileData(const char fileName[], PhoneEntry phonebook[], size_t *numberOfRecords)
{
    FILE* file;
    fopen_s(&file, fileName, "r");
    if (file == NULL)
    {
        return;
    }
    int cologn = 0;
    while (!feof(file))
    {
        char buffer[BUFFER_SIZE];
        const int readbytes = fscanf_s(file, "%s", buffer, BUFFER_SIZE);
        if (readbytes < 0)
        {
            break;
        }
        if (cologn == 0)
        {
            strcpy_s(phonebook[*numberOfRecords].name, NAME_SIZE, buffer);
        }
        else
        {
            strcpy_s(phonebook[*numberOfRecords].phone, PHONE_SIZE, buffer);
            ++*numberOfRecords;
        }
        cologn ^= 1;
    }
    fclose(file);
}


void saveFile(const char fileName[], PhoneEntry phonebook[], const size_t numberOfRecords)
{
    FILE* file;
    fopen_s(&file, fileName, "w");
    if (file == NULL)
    {
        return;
    }
    for (size_t i = 0; i < numberOfRecords; ++i)
    {
        fprintf(file, "%s %s\n", phonebook[i].name, phonebook[i].phone);
    }
    fclose(file);
}



void addRecord(PhoneEntry phonebook[], size_t *numberOfRecords, const char* name, const char* phone, const size_t phonebookSize)
{
    if (*numberOfRecords == phonebookSize) 
    {
        printf("Phone book is full.\n");
        return;
    }
    strcpy_s(phonebook[*numberOfRecords].name, NAME_SIZE, name);
    strcpy_s(phonebook[*numberOfRecords].phone, PHONE_SIZE, phone);
    ++(*numberOfRecords);
}


void printPhoneBook(PhoneEntry phonebook[], const size_t numberOfRecords)
{
    if (numberOfRecords == 0) {
        return;
    }
    for (size_t i = 0; i < numberOfRecords; ++i) {
        printf("Name: %s, Phone: %s\n", phonebook[i].name, phonebook[i].phone);
    }
}

char* findPhoneByName(PhoneEntry phonebook[], const size_t numberOfRecords, const char* name)
{
    if (name[0] == '\0' || numberOfRecords == 0) {
        return NULL;
    }
    for (size_t i = 0; i < numberOfRecords; ++i) {
        if (strcmp(phonebook[i].name, name) == 0) {
            return phonebook[i].phone;
        }
    }
    return NULL;
}

char* findNameByPhone(PhoneEntry phonebook[], const size_t numberOfRecords, const char* phone)
{
    if (phone[0] == '\0' || numberOfRecords == 0) {
        return NULL;
    }
    
    for (size_t i = 0; i < numberOfRecords; ++i) {
        if (strcmp(phonebook[i].phone, phone) == 0) {
            return phonebook[i].name;
        }
    }
    return NULL;
}


void instructions(void)
{
    printf("---------------------------------\n");
    printf("0 - exit\n");
    printf("1 - adding a record(phone and number)\n");
    printf("2 - print all records\n");
    printf("3 - find phone by name\n");
    printf("4 - find name by phone\n");
    printf("5 - save all records\n");
    printf("6 - list of commands\n");
    printf("---------------------------------\n");
}

int run(int argc, char *argv[]) 
{
    PhoneEntry* phonebook = (PhoneEntry*)malloc(PHONE_BOOK_SIZE * sizeof(PhoneEntry));
    if (phonebook == NULL) {
        printf("Memory allocation error.\n");
        return 0;
    }
    size_t numberOfRecords = 0;

    instructions();
    int command;
    int result;
    
    while (1)
    {
        printf("Enter your command: ");
        result = scanf("%d", &command);

        // clear the input buffer
        while (getchar() != '\n');

        if (result != 1) {
            printf("Invalid input, please enter a number.\n");
            continue;
        }
        switch (command)
        {
            case 0:
                printf("Exiting...\n");
                return 0;
            
            case 1:
                printf("Adding a record...\n");
                char inputName[NAME_SIZE];
                char inputPhone[PHONE_SIZE];
                printf("Enter name: ");
                scanf_s("%s", inputName, NAME_SIZE);
                printf("Enter phone: ");
                scanf_s("%s", inputPhone, PHONE_SIZE);
                addRecord(phonebook, &numberOfRecords, inputName, inputPhone, PHONE_BOOK_SIZE);
                break;

            case 2:
                
                printf("Printing all records...\n");
                printPhoneBook(phonebook, numberOfRecords);
                break;
            
            case 3:
                printf("Finding phone by name...\n");
                printf("Enter name: ");
                const char name[NAME_SIZE];
                scanf_s("%s", name, NAME_SIZE);
                char* findedPhone = findPhoneByName(phonebook, numberOfRecords, name);
                if (findedPhone == NULL) {
                    printf("Name not found.\n");
                }
                else {
                    printf("Phone: %s\n", findedPhone);
                }
                break;
            
            case 4:
                printf("Finding name by phone...\n");
                printf("Enter phone: ");
                const char phone[PHONE_SIZE];
                scanf_s("%s", phone, PHONE_SIZE);
                char* findedName = findNameByPhone(phonebook, numberOfRecords, phone);
                if (findedName == NULL) {
                    printf("Phone not found.\n");
                }
                else {
                    printf("Name: %s\n", findedName);
                }
                break;
            
            case 5:
                printf("Saving data to file...\n");
                saveFile(FILE_NAME, phonebook, numberOfRecords);
                break;
            case 6:
                printf("List of commands:\n");
                instructions();
                break;
            
            default:
                printf("Invalid command, please try again.\n");
                break;
        }
    }
    return 0;
}
    
    