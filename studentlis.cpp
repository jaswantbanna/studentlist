


#include<iostream>

using namespace std;
int main()
{
    int n,sum;
    float per[n];
     
    int ch, marks,i,j,phy[n],elec[n],maths[n],english[n],egd[n],pps[n];
    string name[100];
     string chname[n];
    cout<<"enter the nmber of students:";
    cin>>n;
    for(i=0;i<n;i++)
    { 
    sum=0;
    cout<<"enter the name:"<<endl;
    cin>>name[i];
    cout<<"enter the maths marks of:"<<name[i]<<endl;
    cin>>maths[i];
    again1:if(maths[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>maths[i];
    	goto again1;
    	
	}
	else
	cout<<endl;
    sum+=maths[i];
    cout<<"enter the phy marks of:"<<name[i]<<endl;
    cin>>phy[i];
     again2:if(phy[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>phy[i];
    	goto again2;
    	
	}
	else
	cout<<endl;
    sum+=phy[i];
      cout<<"enter the elec marks of:"<<name[i]<<endl;
    cin>>elec[i];
     again3:if(elec[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>elec[i];
    	goto again3;
    	
	}
	else
	cout<<endl;
    sum+=elec[i];
    cout<<"enter the english marks of:"<<name[i]<<endl;
    cin>>english[i];
     again4:if(english[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>english[i];
    	goto again4;
    	
	}
	else
	cout<<endl;
    sum+=english[i];
  cout<<"enter the egd marks of:"<<name[i]<<endl;
    cin>>egd[i];
     again5:if(maths[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>egd[i];
    	goto again5;
    	
	}
	else
	cout<<endl;
    sum+=egd[i];
      cout<<"enter the pps marks of:"<<name[i]<<endl;
    cin>>pps[i];
     again6:if(pps[i]>100)
    {
    	cout<<"you have entered invalid no:";
    	cout<<"reenter your maths marks:";
    	cin>>pps[i];
    	goto again6;
    	
	}
	else
	cout<<endl;
    sum+=pps[i];
    per[i]=sum/6;
    
    
    }
    
    cout<<"do you want list of data press 1 for yes or 0 for not:"<<endl;
    cin>>ch;
    
    if(ch==1)
    {
        for(i=0;i<n;i++)
        {
            cout<<name[i]<<"  pps :"<<pps[i]<<"  elecectrical  :"<<elec[i]<<"  physics: "<<phy[i]<<" maths:"<<maths[i]<<" english:"<<english[i]<<"  egd  :"<<egd[i]<<endl;
            cout<<per[i]<<endl;
        }
    }
    else
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter the choice stduent:"<<endl;
        cin>>chname[i];
        
        if(name[i]==chname[i])
        {
        
         cout<<name[i]<<"  pps :"<<pps[i]<<"  elecectrical  :"<<elec[i]<<"  physics: "<<phy[i]<<" maths:"<<maths[i]<<" english:"<<english[i]<<"  egd  :"<<egd[i]<<endl;
            cout<<per[i]<<endl;
            break;
        }
        else
        cout<<endl;
        
    }


return 0;
}
