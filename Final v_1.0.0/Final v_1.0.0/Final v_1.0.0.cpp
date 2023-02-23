#include <iostream>
#include <fstream> // ile streaming library
#include <string>  //library used to help reading a string or a line from an input stream
#include <string.h>  //library used to help reading a string or a line from an input stream
using namespace std;

void fweek(); //Declaring the main functions for the menus
void town();
void uni();
void stud_inf(); //Student login System function
void new_student(string pin_string);
void login(string student_number_string, string pin_string, string Students_data, int new_student_ind);
void forgot_password();
void forget_pin_creator(string student_number_string, int studygroup_number);  //Reset Pin/Password function
void timetable();
void addinf(); //Additional Information Menu
void file_reader(string location, string filename, void section(), string section_name, int openinghours); //Function to read files from their folders
void return_to(void section(), string section_name, int openinghours); //Function Used to provide Returning options
void wrong_input(void section(), string section_name);
void security_check(string student_number_string, int student_number, int forget_ind); //Function Used to check the Password and the Student's Number
void time_table_menu(string student_number_string, string pin_string);
void remove_function(int user_tt_ind); //Function Used to delete information
void additiona_contact_menu();

int main()
{
    int selection; // Declaring variable for the selection
    cout <<
        "\n"
        " \t~~ International Year 1 Students Guide UoH ~~\n\n"
        " 같같같같같같같같같같같같같같같같같같같같같같같같같같같같�\n"
        "\n |=========|"
        "\n |Main Menu| "
        " 01. First Week  "
        "02. The Town  "
        "03. The University  "
        "04. Additional Information  "
        "05. Exit\n"
        " |=========|";

    cout << "\t\n\n Please Enter Your Choice:: ";
    cin >> selection; // If statement to select the menu
    if (selection == 1) {
        fweek();
    }
    else if (selection == 2) {
        town();
    }
    else if (selection == 3) {
        uni();
    }
    else if (selection == 4) {
        addinf();
    }
    else if (selection == 5) {
        exit(0);
    }
    else {
        cout << "\n Wrong Number...\n";
        main();
    }

}
void fweek() {
    int selection;
    string section_name = "First Week";
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
        "\t |==========|\n"
        "\t |First Week|\n"
        "\t |==========|\n\n"
        "\t01. Sim card            \t08.  Laundry \n"
        "\t02. BRP                 \t09.  Work \n"
        "\t03. Your Enrolment      \t010. Discounts \n"
        "\t04. Police registration \t011. Get Involved\n"
        "\t05. Health Insurance    \t012. Your Timetable\n"
        "\t06. Bank Account        \t013. UK Culture\n"
        "\t07. The Transport       \t014. Shopping\n\n"
        "\t015. Return to Main Menu\n"
        "\t016. Exit\n"
        "\tPlease Enter Your Choice:: ";

    cin >> selection;
    if (selection == 1) {
        file_reader("First Week\\", "SIM", fweek, section_name, 0); // Reads the folder name, file name, section and section name, opening hours indicator
    }
    else if (selection == 2) {
        file_reader("First Week\\", "BRP", fweek, section_name, 1);
    }
    else if (selection == 3) {
        file_reader("First Week\\", "Enrollment", fweek, section_name, 0);
    }
    else if (selection == 4) {
        file_reader("First Week\\", "Police registration", fweek, section_name, 0);
    }
    else if (selection == 5) {
        file_reader("First Week\\", "Health_Ins", fweek, section_name, 1);
    }
    else if (selection == 6) {
        file_reader("First Week\\", "Bank_Acc", fweek, section_name, 1);
    }
    else if (selection == 7) {
        file_reader("First Week\\", "The_Transport", fweek, section_name, 0);
    }
    else if (selection == 8) {
        file_reader("First Week\\", "Laundry", fweek, section_name, 0);
    }
    else if (selection == 9) {
        file_reader("First Week\\", "Work", fweek, section_name, 0);
    }
    else if (selection == 10) {
        file_reader("First Week\\", "Discounts", fweek, section_name, 0);
    }
    else if (selection == 11) {
        file_reader("First Week\\", "Get Involved", fweek, section_name, 0);
    }
    else if (selection == 12) {
        file_reader("First Week\\", "Your_Timetable", fweek, section_name, 0);
    }
    else if (selection == 13) {
        file_reader("First Week\\", "UK_Culture", fweek, section_name, 0);
    }
    else if (selection == 14) {
        file_reader("First Week\\", "Shopping", fweek, section_name, 1);
    }
    else if (selection == 15) {
        main();
    }
    else if (selection == 16) {
        exit(0);
    }
    else {
        wrong_input(fweek, section_name); //Reads section and section name
    }
}
void town() {
    string section_name = "Town";
    int selection;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout << "\t |=========|" << endl;
    cout << "\t |Town Menu|\n";
    cout << "\t |=========|" << endl;
    cout << "\n\t01. Information about Huddersfield \t03. Opening Hours" << endl;
    cout << "\t02. Useful Places                    \t04. Useful Contacts" << endl << endl;
    cout << "\t05. Return to Main Menu" << endl;
    cout << "\t06. Exit" << endl;

    cout << "\tPlease Enter Your Choice:: ";
    cin >> selection;

    if (selection == 1) {
        file_reader("Town\\", "About_Huddersfield", town, section_name, 0);
    }
    else if (selection == 2) {
        file_reader("Town\\", "Useful_Places", town, section_name, 1);
    }
    else if (selection == 3) {
        file_reader("Town\\", "Opening_Hours", town, section_name, 0);
    }
    else if (selection == 4) {
        file_reader("Town\\", "Useful_Contacts", town, section_name, 0);
    }
    else if (selection == 5) {
        main();
    }
    else if (selection == 6) {
        exit(0);
    }
    else {
        wrong_input(town, section_name);
    }
}
void uni() {
    int selection;
    string location = "University\\";
    string section_name = "University";
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
        "\t |==========|\n"
        "\t |University|\n"
        "\t |==========|\n\n"
        "\t01. Student Information System \t05. University Career Develop \n"
        "\t02. My Timetable        \t06. Gym and Sports \n"
        "\t03. Useful Websites     \t07. Useful Contacts \n"
        "\t04. Opening Hours       \t08. Get Involved\n"
        "\n\t09. Return to Main Menu\n"
        "\t10. Exit\n"
        "\tPlease Enter Your Choice:: ";
    cin >> selection;

    if (selection == 1) {
        stud_inf();
    }
    else if (selection == 2) {
        timetable();
    }
    else if (selection == 3) {
        file_reader(location, "Useful_Websites", uni, section_name, 0);
    }
    else if (selection == 4) {
        file_reader(location, "Opening_Hours", uni, section_name, 0);
    }
    else if (selection == 5) {
        file_reader(location, "University Career Develop", uni, section_name, 0);
    }
    else if (selection == 6) {
        file_reader(location, "Gym and Sports", uni, section_name, 1);
    }
    else if (selection == 7) {
        file_reader(location, "Useful_Contacts", uni, section_name, 0);
    }
    else if (selection == 8) {
        file_reader(location, "Get_Involved", uni, section_name, 0);
    }
    else if (selection == 9) {
        main();
    }
    else if (selection == 10) {
        exit(0);
    }
    else {

    }
}
void stud_inf() {
    int student_number, pin, choice;
    string fst_name, las_name, gender, university_email, y_n, course, hobbies;
    string stdname[2]; //Declaring array to input first and last name
    cout << "\n\n NOTE:: If you want to change/add new information just create a new account with the same pin"
        "\n (You will need the Security Question !)"
        "\n\n 1- Login"
        "\n 2- Register"
        "\n 3- Forgot Password"
        "\n 4- Delete Account"
        "\n 5- Return to University Menu\n\n"
        " Please choose a number :: ";
    cin >> choice;
    if (choice == 1) {
        cout << "\n Plese enter your Student Number:: ";
        cin >> student_number;
        string student_number_string = to_string(student_number); //Used to generate strings from integers to use them in reading files
        cout << " Plese enter your PIN:: ";
        cin >> pin;
        string pin_string = to_string(pin);
        cout << "\n";
        login(student_number_string, pin_string, "Students_data", 1); //Takes student's number, pin number, section name and indicator to show security menu

    }
    else if (choice == 2) {
        cout << "\n Please create a PIN (With max of 5 digits) :: ";
        cin >> pin;
        if (pin > 99999) {
            cout << "\n Error, Pin MUST not be more than 5 digits !\n";
            stud_inf();
        }
        string pin_string = to_string(pin);
        cout << "\n";
        new_student(pin_string);
    }
    else if (choice == 3) {
        forgot_password();
    }
    else if (choice == 4) {
        cout << " (This will only delete your information but will keep the Security data like StudyGroup and Student Number)\n";
        remove_function(1); //Function to delete all the data(1) or just the timetable(0) 
    }
    else if (choice == 5) {
        uni();
    }
    else {
        wrong_input(stud_inf, "Student Information");
    }

}
void login(string student_number_string, string pin_string, string location, int new_student_ind) {
    string username, password, sec_qus, sec_ans, line;
    char user_ans[200]; // Declare char array
    ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt"); // Read files by the folder name, students number string and the rest of the name
    if (fil_st_sec.is_open()) { // if the file exist read it
        getline(fil_st_sec, username); // read the first line in security file and input it into username variable
        getline(fil_st_sec, password);
        if (username == student_number_string && password == pin_string) { // security check
            ifstream std_sec_qus("Student\\Students Security\\Sec_question\\" + student_number_string + "_sec_qus" + ".txt");
            if (std_sec_qus.is_open()) { // if the file exist read it
                getline(std_sec_qus, sec_qus);
                getline(std_sec_qus, sec_ans);
                cout << " " << sec_qus << endl;
                cout << " Answer :: ";
                cin.ignore(); // used to ignore characters from the input buffer and lets cin.getline to take input from user 
                cin.getline(user_ans, 300);
                if (sec_ans == user_ans) {
                    if (location == "Students_data") {
                        ifstream fil_st("Student\\Students data\\Information\\" + student_number_string + "_data" + ".txt");
                        if (fil_st.is_open()) {
                            while (getline(fil_st, line)) {
                                cout << line << endl;
                            }
                        }
                        fil_st.close(); // closes the file object
                    }
                    else {
                        ifstream std_tt("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
                        if (std_tt.is_open()) {
                            ifstream std_tt("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
                            if (std_tt.is_open()) {
                                while (getline(std_tt, line)) { // used to read line by line from the files
                                    cout << line << endl;
                                }
                            }
                            std_tt.close();
                            time_table_menu(student_number_string, pin_string); //function to create timetables that take student number and the pin strings
                        }
                        else {
                            time_table_menu(student_number_string, pin_string);
                        }
                    }
                }
                else {
                    cout << "\n\n Wrong Answer !!\n\n";
                    main();
                }
                std_sec_qus.close();

            }
            else {
                if (location == "Students_data") {
                    ifstream fil_st("Student\\Students data\\Information\\" + student_number_string + "_data" + ".txt");
                    if (fil_st.is_open()) {
                        while (getline(fil_st, line)) {
                            cout << line << endl;
                        }
                    }
                    fil_st.close();
                }
                else {
                    ifstream std_tt("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
                    if (std_tt.is_open()) {
                        while (getline(std_tt, line)) {
                            cout << line << endl;
                        }
                        std_tt.close();
                        time_table_menu(student_number_string, pin_string);
                    }
                    else {
                        time_table_menu(student_number_string, pin_string);
                    }

                }
            }
            if (new_student_ind == 1) { // if the user is new this indicator tells the system to not show this question after reading the students data
                cout << "\n Create/Change Security question?(It's for your Safety !)(Yes/no) :: ";
                string y_n;
                char sec_question[300], sec_answer[100];
                cin >> y_n;
                if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
                    cout << " Please write down your security question :: ";
                    cin.ignore();
                    cin.getline(sec_question, 300);
                    cout << "\n Please write down your answer  :: ";
                    cin.getline(sec_answer, 100);
                    cout << endl;
                    ofstream std_sec_qus("Student\\Students Security\\Sec_question\\" + student_number_string + "_sec_qus" + ".txt");
                    std_sec_qus << sec_question << endl;
                    std_sec_qus << sec_answer;
                    std_sec_qus.close();
                }
                else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
                    cout << "\n\n OK..\n\n";
                }
                else {
                    cout << "\n\n Wrong Input !!\n\n";
                }
            }
        }
        else {
            cout << "\n\n Username or Password is WRONG !" << endl;
        }
    }
    else {
        cout << "\n --------------------------"
            "\n Error, User not found \n"
            " --------------------------"
            "\n Please Enter a Correct Pin or Create a new account!! \n"
            " ---------------------------------------------------"
            "\n\n 같같같같같같같같같같같같같같같같같같같같같같같같같같같같�\n\n";
        stud_inf();
    }
    fil_st_sec.close();
    cout << endl;
    return_to(uni, "University", 0);
}
void new_student(string pin_string) { // create new user funtion
    int student_number, n_gender, studygroup_n, y_n_int, x, age, birth_year;
    string section_name = "university", fst_name, nationality, las_name, middle_name, university_email, gender, y_n, hobbies[2], stdname[3];
    char course[40], sec_question[300], sec_answer[100], special_inf[200];
    //takes data from the students
    cout << " Please enter yout First name = ";
    cin >> fst_name;
    stdname[0] = fst_name;
    cout << " Please enter yout Middle name = ";
    cin >> middle_name;
    stdname[1] = middle_name;
    cout << " Please enter yout Last name = ";
    cin >> las_name;
    stdname[2] = las_name;
    cout << " Please enter your Nationality :: ";
    cin >> nationality;
    cout << " Please enter your year of birth :: ";
    cin >> birth_year;
    age = 2022 - birth_year;
    cout << " What is your gender?\n"
        " 1 - Male\n 2 - Female\n 3 - Prefer not to say\n"
        " Answer(Write a Number !):: ";
    cin >> n_gender;
    switch (n_gender) { // switch to let the user choose between functions easier to use here than if statement
    case 1: gender = "Male";
        break;
    case 2: gender = "Female";
        break;
    case 3: gender = "Prefer not to say";
        break;
    default: cout << "\n\n Error, Write a valid number !";
        stud_inf();
    }
    cout << " Please enter your University student number :: ";
    cin >> student_number;
    string student_number_string = to_string(student_number);
    ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
    if (fil_st_sec.is_open()) {
        cout << "\n\n User already found !!!"
            " Do you want to change your Information?\n"
            " 1- Yes\n"
            " 2- No\n"
            " Answer(1-2) :: ";
        cin >> y_n_int;
        if (y_n_int == 1) {
            security_check(student_number_string, student_number, 0);

        }
        else if (y_n_int == 2) {
            return_to(uni, "University", 0);
        }
        else {
            wrong_input(uni, "University");
        }
        fil_st_sec.close();
    }
    cout << " Please enter your (Old/New) StudyGroup student number(You can find it in your email) :: ";
    cin >> studygroup_n;
    cout << " Please enter your University course full name = ";
    cin.ignore();
    cin.getline(course, 40);
    cout << " Do you have any hobbies? Add 2 of them ! (Press enter after each one) (If no type '-') ::\n";
    for (int i = 0; i <= 1; i++) {
        cout << " ";
        cin >> hobbies[i];
    }
    ofstream std("Student\\Students data\\Information\\" + student_number_string + "_data" + ".txt"); // create and write in a text file
    std << " ----------------------------------------------------------------\n";
    std << " Student Name              :: " << stdname[0] << " " << stdname[1] << " " << stdname[2];
    std << "\n\n Student's Nationality     :: " << nationality;
    std << "\n\n Student's Age             :: " << age;
    std << "\n\n Student Gender            :: " << gender;
    std << "\n\n University Student Number :: " << student_number;
    std << "\n\n StudyGroup Student Number :: " << studygroup_n;
    std << "\n\n Student Course            :: " << course;
    std << "\n\n Student Hobbies           :: " << hobbies[0] << ", " << hobbies[1];
    std << "\n\n Student University Email  :: " << "u" << student_number << "@unimail.hud.ac.uk";
    std << "\n\n Student StudyGroup Email  :: " << studygroup_n << "@student.huddersfieldisc.com";
    std << "\n ----------------------------------------------------------------\n";
    std.close();
    ofstream std_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
    std_sec << student_number_string << endl;
    std_sec << pin_string << endl;
    std_sec << studygroup_n;
    std_sec.close();

    cout << " Do you want to add special information about you?(Yes/No) :: ";
    cin >> y_n;
    if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
        cout << " ";
        cin.ignore();
        cin.getline(special_inf, 200);
        fstream std("Student\\Students data\\Information\\" + student_number_string + "_data" + ".txt", ios_base::app); // To enter the append mode if the user wanted to add his special information
        if (std.is_open()) {
            std << " " << special_inf << endl;
        }
        cout << "\n Done !" << endl;
    }

    cout << " Your account has been created !\n\n";
    cout << " Do you want to create/change the Security Question?(It's for your Safety !)(Yes/No) :: ";
    cin >> y_n;
    if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
        cout << " Please write down your security question :: ";
        cin.ignore();
        cin.getline(sec_question, 300);
        cout << "\n Please write down your answer  :: ";
        cin.getline(sec_answer, 100);
        ofstream std_sec_qus("Student\\Students Security\\Sec_question\\" + student_number_string + "_sec_qus" + ".txt");
        std_sec_qus << sec_question << endl;
        std_sec_qus << sec_answer;
        std_sec_qus.close();


        cout << " Do you want to read your file? (Yes/No) :: ";
        cin >> y_n;
        if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
            login(student_number_string, pin_string, "Students_data", 0);
        }
        else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
            cout << "\n Good bye then.. !";
            main();
        }
        else {
            cout << "\n Wrong input..";
            main();
        }
    }
    else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
        cout << " Do you want to read your file? (Yes/No) :: ";
        cin >> y_n;
        if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
            login(student_number_string, pin_string, "Students_data", 0);
        }
        else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
            cout << "\n Good bye then.. !";
            main();
        }
        else {
            cout << "\n Wrong input..";
            main();
        }
    }
    else {
        cout << "\n Wrong input.. !\n If you want to create a securite question just login..\n\n";
        cout << " Do you want to read your file? (Yes/No) :: ";
        cin >> y_n;
        if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
            login(student_number_string, pin_string, "Students_data", 0);
        }
        else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
            cout << "\n Good bye then.. !";
            main();
        }
        else {
            cout << "\n Wrong input..";
            main();
        }
    }

}
void timetable() {
    int student_number, studygroup_n, pin;
    string fst_name, las_name, gender, university_email, y_n, course, hobbies;
    string stdname[2];
    cout << "\n\n NOTE:: If you want to change/add new information just create a new account with the same pin"
        "\n\n Do you have an account? (Yes/no) :: ";
    cin >> y_n;
    if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
        cout << " Plese enter your PIN:: ";
        cin >> pin;
        string pin_string = to_string(pin); // Used to generate strings from integers to use them in reading files
        cout << "\n";
        cout << " Plese enter your Student number :: ";
        cin >> student_number;
        string student_number_string = to_string(student_number);
        login(student_number_string, pin_string, "time table", 0);

    }
    else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
        cout << " Do you want to create an account? (Yes/no) :: ";
        cin >> y_n;
        if ((y_n == "YES") || (y_n == "Yes") || (y_n == "yes")) {
            cout << "\n Please create a PIN (With max of 5 digits) :: ";
            cin >> pin;
            if (pin > 99999) {
                cout << "\n Error, Pin MUST not be more than 5 digits !\n";
                stud_inf();
            }
            string pin_string = to_string(pin);
            cout << "\n";
            new_student(pin_string);
        }
        else if ((y_n == "NO") || (y_n == "No") || (y_n == "no")) {
            cout << "\n Good bye then.. !";
            uni();
        }
        else {
            cout << "\n Wrong input..";
            timetable();
        }

    }
    else {
        wrong_input(timetable, "Timetable");
    }
}
void time_table_menu(string student_number_string, string pin_string) {
    int one_two_det;
    cout << "\n 1- Create/Change Student's TimeTable"
        "\n 2- Delete the Student's TimeTable"
        "\n 3- Return Menu";
    cout << "\n\n Please choose (1/2/3):: ";
    cin >> one_two_det;
    if (one_two_det == 1) {
        cout << "Note :: Be carful because u cant change a spacific information in the time table\n"
            "if u want to change something u will have to change the enitre time table\n";
        char clss1[60], clss2[60], clss3[60], clss4[60], time[50];
        string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
        cout << " \n\n You can add up to 4 Classes for Each day !!"
            "\n Note: If you don't want to include any class just type ' - ' ";
        ofstream std_tt("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
        cin.ignore();
        for (int i = 0; i <= 4; i++) {
            cout << "\n\n\t (" << days[i] << ")\n\n";
            cout << " Please enter the 1 class name :: ";
            cin.getline(clss1, 60);
            cout << " Please enter the 2 class name :: ";
            cin.getline(clss2, 60);
            cout << " Please enter the 3 class name :: ";
            cin.getline(clss3, 60);
            cout << " Please enter the 4 class name :: ";
            cin.getline(clss4, 60);
            std_tt <<
                "\n -------------------------------------------------------------------------\n"
                "|" << days[i] << "| " << "/ " << clss1 << " " << "/" << " " << clss2 << " " << "/" << " " << clss3 << " " << "/" << " " << clss4 << " " << "/\n"
                " -------------------------------------------------------------------------\n";
        }
        cout << " Do you want to add Weekend days? (1 = Yes / 2 = No):: ";
        cin >> one_two_det;
        if (one_two_det == 1) {
            ofstream all("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt", ios::app);
            if (all.is_open()) {
                cin.ignore();
                for (int i = 5; i <= 6; i++) {
                    cout << "\n\n\t (" << days[i] << ")\n\n";
                    cout << " Please enter the 1 name :: ";
                    cin.getline(clss1, 60);
                    cout << " Please enter the 2 name :: ";
                    cin.getline(clss2, 60);
                    cout << " Please enter the 3 name :: ";
                    cin.getline(clss3, 60);
                    cout << " Please enter the 4 name :: ";
                    cin.getline(clss4, 60);
                    std_tt <<
                        "\n -------------------------------------------------------------------------\n"
                        "|" << days[i] << "| " << "/ " << clss1 << " " << "/" << " " << clss2 << " " << "/" << " " << clss3 << " " << "/" << " " << clss4 << " " << "/\n"
                        " -------------------------------------------------------------------------\n";
                }
            }
        }
        std_tt.close();
        cout << "\n\n ----- \n Do you want to read it? (1/2)\n"
            " 1- Yes\n"
            " 2- No\n"
            "\n Answer :: ";
        cin >> one_two_det;
        if (one_two_det == 1) {
            login(student_number_string, pin_string, "time table", 0);
        }
    }
    else if (one_two_det == 2) {
        remove_function(0);
    }
    else if (one_two_det == 3) {
        uni;
    }
    else {
        wrong_input(timetable, "Timetable");
    }
}
void addinf() {
    string location = "Additional Information\\";
    string section_name = "Additional Information";
    int selection;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout << "\t |======================|" << endl;
    cout << "\t |Additional Information|\n";
    cout << "\t |======================|" << endl;
    cout << "\n\t01. Useful Websites       \t02. Park" << endl;
    cout << "\t03. Main Grocery Prices     \t04. Gym" << endl;
    cout << "\t05. Huddersfield Town FC    \t06. Contacts" << endl << endl;
    cout << "\t07. Return to Main Menu" << endl;
    cout << "\t08. Exit" << endl;

    cout << "\tPlease Enter Your Choice :: ";
    cin >> selection;

    switch (selection) {
    case 1: file_reader(location, "Useful_Websites", addinf, section_name, 0);
        break;
    case 2: file_reader(location, "Parks", addinf, section_name, 0);
        break;
    case 3: file_reader(location, "Grocery", addinf, section_name, 0);
        break;
    case 4: file_reader(location, "Gyms", addinf, section_name, 0);
        break;
    case 5: file_reader(location, "Huddersfield_Town_FC", addinf, section_name, 0);
        break;
    case 6: additiona_contact_menu();
        break;
    case 7: main();
        break;
    case 8: break;
    default: wrong_input(addinf, section_name);
        break;
    }

}
class contacts { // class to help create and read contacts from and to the user
public:
    int long long number; // to be able to save numbers
    int long long number2;
    string email; // to save emails
    string f_name, l_name;
};
void additiona_contact_menu() {
    int one_two_ind;
    string line;
    cout << "\n 1- Add/Change a Contact\n"
        " 2- See All contact names\n"
        " 3- Read contact by name\n"
        " 4- Return to Additional Information menu\n"
        "\n Answer (1/2/3/4):: ";
    cin >> one_two_ind;
    cout << endl;
    if (one_two_ind == 1) {
        contacts contact;
        cout << " Please enter the First Name :: ";
        cin >> contact.f_name;
        cout << " Please enter the Last Name :: ";
        cin >> contact.l_name;
        cout << "\n Please enter the Number :: ";
        cin >> contact.number;
        cout << "\n Is there another number?(1 = Yes /2 = No) :: ";
        cin >> one_two_ind;
        if (one_two_ind == 1) {
            cout << "\n Please enter the Number :: ";
            cin >> contact.number2;
        }
        cout << "\n Please enter the Email :: ";
        cin >> contact.email;
        cout << endl;

        ofstream cont("Student\\Students data\\Contacts\\" + contact.f_name + " " + contact.l_name + "_c.txt"); // creats a file by using the folder name, first anem and last name
        if (cont.is_open()) {
            cont << " --------------\n" << " | Name     :: " << contact.f_name << " " << contact.l_name << endl << " | Number 1 :: " << contact.number << endl
                << " | Number 2 :: " << contact.number2 << endl << " | Email    :: " << contact.email << endl << " --------------\n";
            cont.close();
        }
        ifstream all_1("Student\\Students data\\Contacts\\All_contacts_name.txt");
        if (all_1.is_open()) {
        }
        else {
            ofstream all("Student\\Students data\\Contacts\\All_contacts_name.txt");
        }
        all_1.close();
        ofstream all("Student\\Students data\\Contacts\\All_contacts_name.txt", ios::app);
        if (all.is_open()) {
            all << " " << contact.f_name << " " << contact.l_name << endl << endl;
        }
        else {
            cout << "A VERY  BIG ERROR";
        }
        all.close();
        cont.close();
        cout << " Done !!\n\n";
        return_to(addinf, "Additional Information", 0);
    }
    else if (one_two_ind == 2) {
        ifstream all("Student\\Students data\\Contacts\\All_contacts_name.txt");
        if (all.is_open()) {
            cout << endl;
            while (getline(all, line)) {
                cout << line << endl;
            }
            all.close();
        }
        return_to(addinf, "Additional Information", 0);
    }
    else if (one_two_ind == 3) {
        string cont_name;
        cout << " Please enter the Contact Full name :: ";
        cin.ignore();
        getline(cin, cont_name);
        cout << endl;
        ifstream cont("Student\\Students data\\Contacts\\" + cont_name + "_c.txt");
        if (cont.is_open()) {
            while (getline(cont, line)) {
                cout << line << endl;
            }
            cont.close();
            cout << endl;
            return_to(addinf, "Additional Information", 0);
        }
        else {
            cout << " \n\n There's No contact with this name !!";
            return_to(addinf, "Additional Information", 0);
        }

    }
    else if (one_two_ind == 4) {
        cout << endl;
        addinf();
    }
    else {
        wrong_input(addinf, "Additional Information");
    }
}
void forgot_password() { // forget password menu
    int student_number, studygroup_test;
    string line, sec_qus, sec_ans, user_ans;
    cout << " Please enter your Student Number :: ";
    cin >> student_number;
    string student_number_string = to_string(student_number);
    ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
    if (fil_st_sec.is_open()) {
        cout << " Please enter your StudyGroup Number :: ";
        cin >> studygroup_test;
        string studygroup_test_string = to_string(studygroup_test);
        for (int lineno = 1; getline(fil_st_sec, line) && lineno <= 4; lineno++) {
            if (lineno == 3) {
                string studygroup_number_string;
                studygroup_number_string = line;
            }
        }
        if (studygroup_test_string == line) {
            ifstream std_sec_qus("Student\\Students Security\\Sec_question\\" + student_number_string + "_sec_qus" + ".txt");
            if (std_sec_qus.is_open()) { //if the file exist read it
                getline(std_sec_qus, sec_qus);
                getline(std_sec_qus, sec_ans);
                cout << " " << sec_qus << endl;
                cout << " Answer :: ";
                cin >> user_ans;
                if (sec_ans == user_ans) {
                    forget_pin_creator(student_number_string, studygroup_test);
                    return_to(uni, "University", 0);
                }
                else {
                    cout << "\n Wrong Answer !!\n";
                    wrong_input(uni, "University");
                }
            }
            else {
                forget_pin_creator(student_number_string, studygroup_test);
                return_to(uni, "University", 0);
            }
            std_sec_qus.close();
        }
        else {
            cout << "\n Study Group number is WRONG !\n";
            wrong_input(uni, "University");
        }
        fil_st_sec.close();
    }
    else {
        cout << "\n No account found !";
        wrong_input(uni, "University");
    }

}
void security_check(string student_number_string, int student_number, int forget_ind) { //used to make security check if it is the real user or not, take alsi forget pin indicator to trigger the function when needed
    int studygroup_test;
    string line, sec_qus, sec_ans, user_ans;
    ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
    if (fil_st_sec.is_open()) {
        cout << " Please enter your StudyGroup Number :: ";
        cin >> studygroup_test;
        string studygroup_test_string = to_string(studygroup_test);
        for (int lineno = 1; getline(fil_st_sec, line) && lineno <= 4; lineno++) {
            if (lineno == 3) {
                string studygroup_number_string;
                studygroup_number_string = line;
            }
        }
        if (studygroup_test_string == line) {
            ifstream std_sec_qus("Student\\Students Security\\Sec_question\\" + student_number_string + "_sec_qus" + ".txt");
            if (std_sec_qus.is_open()) {
                getline(std_sec_qus, sec_qus);
                getline(std_sec_qus, sec_ans);
                cout << " " << sec_qus << endl;
                cout << " Answer :: ";
                cin >> user_ans;
                if (sec_ans == user_ans) {
                    if (forget_ind == 1) {
                        forget_pin_creator(student_number_string, studygroup_test);
                        return_to(uni, "University", 0);
                    }
                    else {
                        cout << "\n Check Done.. !\n";
                    }
                }
                else {
                    cout << "\n Wrong Answer !!\n";
                    wrong_input(uni, "University");
                }
            }
            else {
                if (forget_ind == 1) {
                    forget_pin_creator(student_number_string, studygroup_test);
                    return_to(uni, "University", 0);
                }
            }
            std_sec_qus.close();
        }
        else {
            cout << "\n Study Group number is WRONG !\n";
            wrong_input(uni, "University");
        }
        fil_st_sec.close();
    }
    else {
        cout << "\n No account found !";
        wrong_input(uni, "University");
    }
}
void forget_pin_creator(string student_number_string, int studygroup_number) { // pin recreate function
    int pin;
    cout << "\n Please create a new PIN (With max of 5 digits) :: ";
    cin >> pin;
    if (pin > 99999) { // if the pin is more than 99999 or more than 5 digits it will not work
        cout << "\n Error, Pin MUST not be more than 5 digits !\n";
        stud_inf();
    }
    string pin_string = to_string(pin);
    cout << "\n";
    ofstream std_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
    std_sec << student_number_string << endl;
    std_sec << pin_string << endl;
    std_sec << studygroup_number;
    std_sec.close();
}
void file_reader(string location, string filename, void section(), string section_name, int openinghours) { // file reading function
    string line;
    ifstream fil(location + filename + ".txt");
    if (fil.is_open()) {
        while (getline(fil, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "\n Error, File not found\n\n";
    }
    fil.close();
    return_to(section, section_name, openinghours);
}
void return_to(void section(), string section_name, int openinghours) { // return to menu function
    int selection;
    if (openinghours == 1) {
        cout << " 0. Go to their opening hours ";
    }
    cout << " #  1. Return to Main menu ";
    cout << "  2. Return to " << section_name << " menu";
    cout << "   3. Exit" << endl;
    cout << "\n Please Enter Your Choice: ";
    cin >> selection;
    if (selection == 1) {
        main();
    }
    else if (selection == 2) {
        section();
    }
    else if (selection == 3) {
        exit(0);
    }
    else if (openinghours == 1) {
        if (selection == 0) {
            int one_two;
            cout << "\n\n 1 - Town Opening hours"
                " 2 - University Opening hours"
                "\n Answer :: ";
            cin >> one_two;
            if (one_two == 1) {
                town();
            }
            else if (one_two == 2) {
                uni();
            }
            else {
                wrong_input(fweek, "Main");
            }
        }
    }
    else {
        wrong_input(section, section_name);
    }
}
void wrong_input(void section(), string section_name) { // this function used when inputting a wrong answer from the user, like typing a number that doesn't do anything
    cout << "\n -------------------------------"
        "\n Please Choose a Valid Answer !! \n"
        " -------------------------------"
        "\n Returning to " << section_name << " menu..."
        "\n\n 같같같같같같같같같같같같같같같같같같같같같같같같같같같같�\n";
    cout << endl << endl;
    section();
}
void remove_function(int user_tt_ind) { // deleting information function
    int y_n_int, student_number;
    if (user_tt_ind == 1) { // if the user wants to delete his entire data except the security data
        cout << " Please enter your University student number :: ";
        cin >> student_number;
        string student_number_string = to_string(student_number);
        ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
        if (fil_st_sec.is_open()) {
            cout << "\n\n"
                " Are you sure?\n"
                " 1- Yes\n"
                " 2- No\n"
                " Answer(1-2) :: ";
            cin >> y_n_int;
            if (y_n_int == 1) {
                security_check(student_number_string, student_number, 0);
                ofstream std_fil("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
                ofstream std("Student\\Students data\\Information\\" + student_number_string + "_data" + ".txt");
                std.close();
                std_fil.close();
                cout << "\n Done ! \n";
                return_to(uni, "University", 0);
            }
            else if (y_n_int == 2) {
                return_to(uni, "University", 0);
            }
            else {
                wrong_input(uni, "University");
            }
            fil_st_sec.close();
        }
        else {
            cout << " \nUser not Found....\n";
            wrong_input(uni, "University");
        }

    }
    else { // to delete the timetable data only
        int y_n_int, student_number;
        cout << " Please enter your University student number :: ";
        cin >> student_number;
        string student_number_string = to_string(student_number);
        ifstream fil_st_sec("Student\\Students Security\\Sec_info\\" + student_number_string + "_sec" + ".txt");
        if (fil_st_sec.is_open()) {
            cout << "\n\n"
                " Are you sure?\n"
                " 1- Yes\n"
                " 2- No\n"
                " Answer(1-2) :: ";
            cin >> y_n_int;
            if (y_n_int == 1) {
                security_check(student_number_string, student_number, 0);
                ofstream std_tt("Student\\Students data\\Timetables\\" + student_number_string + "_tt" + ".txt");
                std_tt.close();
                cout << "\n Done ! \n";
                return_to(uni, "University", 0);
            }
            else if (y_n_int == 2) {
                return_to(uni, "University", 0);
            }
            else {
                wrong_input(uni, "University");
            }
            fil_st_sec.close();
        }
        else {
            cout << " \nUser not Found....\n";
            wrong_input(uni, "University");
        }
    }
}
