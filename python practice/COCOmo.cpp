//C++ program to implement basic COCOMO 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function for rounding off staff value to integer 
int fround(float x) 
{ 
    int a; 
    x=x+0.5; 
    a=x; 
    return(a); 
} 
  
// Function to calculate parameters of Basic COCOMO 
void calculate_Basic( char mode[][15], int size) 
{ 
    float effort,time,staff; 
     float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32}; 
  
    int model; 
      
    // Check the mode according to size 
      
    if(size>=2 && size<=50) 
        model=0;        //organic 
      
    else if(size>50 && size<=300) 
        model=1;        //semi-detached 
      
    else if(size>300) 
        model=2;        //embedded 
  
    cout<<"The mode is "<<mode[model]; 
  
    // Calculate Effort 
    effort = table[model][0]*pow(size,table[model][1]); 
  
    // Calculate Time 
    time = table[model][2]*pow(effort,table[model][3]); 
  
    //Calculate Persons Required 
    staff = effort/time; 
  
    // Output the values calculated 
    cout<<"\nEffort = "<<effort<<" Person-Month"; 
  
    cout<<"\nDevelopment Time = "<<time<<" Months"; 
  
    cout<<"\nAverage Staff Required = "<<fround(staff)<<" Persons"<<endl; 
      
} 

// Function to calculate parameters of intermediate COCOMO 
void Calculate_intermediate(char mode[][15],int size)
{ 
  float table[3][4]={3.2,1.05,2.5,0.38,3.0,1.12,2.5,0.35,2.8,1.20,2.5,0.32};
 int model;
 


  float effort,EAF,time,staff,productivity;

     
    // Check the mode according to size 
      
    if(size>=2 && size<=50) 
        model=0;        //organic 
      
    else if(size>50 && size<=300) 
        model=1;        //semi-detached 
      
    else if(size>300) 
        model=2;        //embedded 
  
    cout<<"The mode is "<<mode[model]<<endl; 
  

  
  EAF=1;
    {   float rly;
        cout<<" Enter Required Software Reliability value"<<endl;
        cin>>rly;
        EAF=EAF*rly;

        float sad;
        cout<<" Enter Size of Application Database value"<<endl;
        cin>>sad;
        EAF=EAF*sad;

        float CPLX;
        cout<<" Enter Complexity of The Product value"<<endl;
        cin>>CPLX;
        EAF=EAF*CPLX;

        float rt;
        cout<<" Enter Runtime Performance Constraints value"<<endl;
        cin>>rt;
        EAF=EAF*rt;

        float mcv;
        cout<<" Enter Memory Constraints value"<<endl;
        cin>>mcv;
        EAF=EAF*mcv;

        float vol;
        cout<<" Enter Volatility of the virtual machine environment value"<<endl;
        cin>>vol;
        EAF=EAF*vol;

        float rtt;
        cout<<" Enter Required turnabout time value"<<endl;
        cin>>rtt;
        EAF=EAF*rtt;

        float acv;
        cout<<" Enter Analyst capability value"<<endl;
        cin>>acv;
        EAF=EAF*acv;

        float ae;
        cout<<" Enter Applications experience value"<<endl;
        cin>>ae;
        EAF=EAF*ae;

        float sec;
        cout<<" Enter Software engineer capability value"<<endl;
        cin>>sec;
        EAF=EAF*sec;

        float vme;
        cout<<" Enter Virtual machine experience value"<<endl;
        cin>>vme;
        EAF=EAF*vme;

        float ple;
        cout<<" Enter Programming language experience value"<<endl;
        cin>>ple;
        EAF=EAF*ple;

        float ase;
        cout<<" Enter Application of software engineering methods value"<<endl;
        cin>>ase;
        EAF=EAF*ase;

        float ust;
        cout<<" Enter Use of software tools value"<<endl;
        cin>>ust;
        EAF=EAF*ust;

        float rds;
        cout<<" Enter Required development schedule value"<<endl;
        cin>>rds;
        EAF=EAF*rds;



    }

 cout<<"EAF:"<<EAF;

  effort=(table[model][0]*pow(size,table[model][1])) * EAF;

  time=table[model][2]*pow(effort,table[model][3]);

  staff=effort/time;

  productivity=size/effort;

  cout<<"\nEffort:"<<effort;

  cout<<"\nDevelopment Time :"<<time<<"Months";
 
  cout<<"\nAverage Staff Required :"<<fround(staff)<< "Persons";

  cout<<"\nProductivity:"<<productivity<<"KLOC/Person-Month";


}
  
int main() 
{ int n;
    int a;

    float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32}; 
  
    char mode[][15]={"Organic","Semi-Detached","Embedded"}; 
    int size ;
    a:
    cout<<"enter 1 for basic model and 2 for intermediate model:"<<endl;
    cin>>n;
    
    if(n==1 || n==2)
    {
    
    cout<<"FOR organic enter size between 2 and 50 :"<<endl;
    cout<<"FOR Semi-Detached enter size between 50 and 300 :"<<endl;
    cout<<"FOR EMbedded enter size greater than 300 :"<<endl;
    cout<<"enter the size:";
    cin>>size;

    if (n==1)
        {    calculate_Basic(mode,size);}
    else 
    {
      
    Calculate_intermediate(mode,size);
    }
    }
      else
        {cout<<"Enter only 1 or 2"<<endl;
    goto a;}
return 0; 
} 
