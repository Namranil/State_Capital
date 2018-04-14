#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#define key 36
#define FALSE 0
#define TRUE 1
using namespace std;





int main()
{
    int i,j,k,l=0,store[36],flag,cnt=0,track=0;
    for(i=0;i<36;i++)
        store[i]=-1;
    char ans[30],store_ans[][20];



    char city[][40]= {"Andhra Pradesh","Arunachal Pradesh","Assam","Bihar","Chhattisgarh","Goa","Gujarat","Haryana","Himachal Pradesh",

                      "Jammu and Kashmir","Jharkhand","Karnataka","Kerala","Maharashtra","Manipur","Madhya Pradesh","Meghalaya","Mizoram",

                      "Nagaland","Odisha","Punjab","Rajasthan","Sikkim","Telangana","Tamil Nadu","Tripura","Uttar Pradesh","Uttarakhand","West Bengal",

                      "*Andaman & Nicobar","*Lakshadweep","*Daman & Diu","*Dadra & Nagar Havelli","*Delhi","*Chandigarh","*Puducherry"
                     };

    char cap[][40]= {"Amaravati","Itanagar","Dispur","Patna","Raipur","Panaji","Gandhinagar","Chandigarh","Shimla","Srinagar","Ranchi","Bengaluru","Tiruvananthapuram",

                     "Mumbai","Imphal","Bhopal","Shillong","Aizawl","Kohima","Bhubaneshwar","Chandigarh","Jaipur","Gangtok","Hyderabad","Chennai",

                     "Agartala","Lucknow","Dehradun","Kolkata","Port blair","Kavaratti","Daman","Silvassa","New Delhi","Chandigarh","Pondicherry"
                    };


    //while(1)

    for(i=0;i<181;i++) //CHANGE TO 36/181
    {

        flag=TRUE;
        j=(rand()%key); //GENERATE RANDOM NUMBER


        //TO CHECK DUPLICATE NUMBER GENERATED IN RANDOM NUMBER GENERATION PROCESS
        for(k=0;k<36;k++){
            if(store[k]==j){

                flag=FALSE;
                break;
            }
        }


        //TO STORE THE NEWLY GENERATED NUMBER IN THE LAST INDEX OF STORE[] WHERE DUPLICATE ITEM(IF ANY) WAS FOUND
        if(flag){
            for(k=0;k<36;k++){
                if(store[k]==-1)
                    break;
            }
            store[k]=j;
        }
        else
            continue;


        cout<<city[j]<<": ";
        cin.getline(ans,30);

        if(strcmpi(ans,cap[j])==0){
            store_ans[i]="[CORRECT]";
            //cout<<"\t\t\t\t\t\t\t[CORRECT]"<<endl;
            ++cnt;
            track++;
        }
        else{
            store_ans[i]="[INCORRECT]";
            //cout<<"\t\t\t\t\t\t\t[INCORRECT]"<<endl;
            //--cnt;
            track++;
        }
        //cnt++;
    }

    cout<<"\n\nTotal : "<<cnt<<"/"<<track<<endl;

    cout<<



}



