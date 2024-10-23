// Merge sort is based on divide and conquer algorithm - means first we divide the array and then apply recursion and then at last we 
// maege the array 
// Merge sort -> 


// #include<iostream>
// using namespace std;
// int main()
// {

    // int n;
    // cout<<"Enter the size of the array "<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the array's elements "<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<"Display the array' elements "<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

// }





// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&a, vector<int>&b , vector<int>& res)
// {
//     int i=0;
//     int j=0;
//     int k=0;

//     while(i<a.size() && j<b.size())
//     {
//         if(a[i]<b[j])
//         {
//             res[k]=a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             res[k]=b[j];
//             k++;
//             j++;
//         }
//     }

//     if(i==a.size())
//     {
//         while(j<b.size())
//         {
//             res[k]=b[j];
//             k++;
//             j++;
//         }
//     }

//     if(j==b.size())
//     {
//         while(i<a.size())
//         {
//             res[k]=a[i];
//             k++;
//             i++;
//         }
//     }
// }


// void mergesort(vector<int>& v)
// {
//     int n=v.size();
//     if(n==1) return ;
//     int n1=n/2;
//     int n2=n-n/2;

//     vector<int>a(n1);
//     vector<int>b(n2);

//     for(int i=0; i<n1; i++)
//     {
//         a[i]=v[i];
//     }
//     for(int i=0; i<n2; i++)
//     {
//         b[i]=v[i+n1];
//     }

//     mergesort(a);
//     mergesort(b);

//     merge(a,b,v);

// }
// int main()
// {
//     int arr[]={010,3,44,56,5,6,56,4,5,-45,02, -345, 5455};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Before sorting "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // we store our array into vector 
//     vector<int>v(arr,arr+n);
//     cout<<"Before sorting "<<endl;
//     for(int i=0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     mergesort(v);
//     cout<<endl;

//     cout<<"After sorting "<<endl;
//     for(int i=0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }



// done - 18-02-2024 

