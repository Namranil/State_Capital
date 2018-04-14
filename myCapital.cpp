#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#define key 35
#define FALSE 0
#define TRUE 1
using namespace std;


int main()
{
    int i,j,k,l=0,store[36],flag,cnt=0,track=0;
    char ans[30];

    char city[][40]= {"Andhra Pradesh","Arunachal Pradesh","Assam","Bihar","Chattisgarh","Goa","Gujarat","Haryana, Punjab","Himachal Pradesh",

                      "J&K","Jharkhand","Karnataka","Kerala","Maharashtra","Manipur","Madhya Pradesh","Meghalaya","Mizoram",

                      "Nagaland","Odisha","Rajasthan","Sikkim","Telangana","Tamil Nadu","Tripura","Uttar Pradesh","Uttarakhand","West Bengal",

                      "Andaman","Lakshadweep","Daman & Diu","Dadra & Nagar Havelli","Delhi","Chandigarh","Puducherry"
                     };

    char cap[][40]= {"Amaravati","Itanagar","Dispur","Patna","Raipur","Panaji","Gandhinagar","Chandigarh [C]","Shimla","Srinagar","Ranchi","Bengaluru","Tiruvananthapuram",

                     "Mumbai","Imphal","Bhopal","Shillong","Aizawl","Kohima","Bhubaneshwar","Jaipur","Gangtok","Hyderabad","Chennai",

                     "Agartala","Lucknow","Dehradun","Kolkata","*Port blair","*Kavaratti","*Daman","*Silvassa","*New Delhi","*Chandigarh [U]","*Pondicherry"
                    };

    //Iniitalise an array store[] for storing the randomly generated values
    for(i=0;i<36;i++)
        store[i]=-1;

    for(i=0;i<127;i++) //CHANGE TO 36/181
    {
        flag=TRUE;
        j=(rand()%key); //GENERATE RANDOM NUMBER


        //TO CHECK DUPLICATE NUMBER GENERATED IN RANDOM NUMBER GENERATION PROCESS
        for(k=0;k<36;k++){
            if(store[k]==j){
                //cout<<"\n"<<i+1<<"..> j="<<j;
                //cout<<"\t-->DUPLICATE & store["<<k<<"]= "<<j<<"<--"<<endl<<endl;
                flag=FALSE;
                break;
            }
        }


        //TO STORE THE NEWLY GENERATED NUMBER IN THE NEXT ATTEMPY, IN THE LAST INDEX OF STORE[] WHERE DUPLICATE ITEM(IF ANY) WAS FOUND
        if(flag)
        {
            for(k=0;k<36;k++){
                if(store[k]==-1)
                    break;
            }
            store[k]=j;
        }

        else
            continue;

        //cout<<"\n"<<(i+1)<<"..> j="<<j<<"  >>store["<<k<<"]="<<store[k]<<"// "<<cap[j]<<": ";
        cout<<cap[j]<<": ";
        cin.getline(ans,30);

        if(strcmpi(ans,city[j])==0){
            cout<<"\t\t\t\t\t\t\t[CORRECT]"<<endl;
            ++cnt;
            track++;
        }
        else if(strcmpi(ans,"")==0){
            cnt=cnt;
            track++;
            cout<<endl;
        }
        else{
            cout<<"\t\t\t\t\t\t\t[INCORRECT]"<<endl;
            /*if(cnt<=0)
                cnt=cnt;
            else*/
                --cnt;
            track++;
        }
    }
    if(cnt<0)
        cout<<"\n\nTotal : "<<"0"<<"/"<<track<<" ("<<cnt<<")"<<endl;
    else
        cout<<"\n\nTotal : "<<cnt<<"/"<<track<<endl;
}



