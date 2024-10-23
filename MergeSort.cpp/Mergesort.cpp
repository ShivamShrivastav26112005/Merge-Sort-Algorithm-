// Practices -: 
// Ques -: merge the given two arrays
// hints -: 3 pointers


// #include<iostream>
// #include<vector>
// using namespace std;
// void merge (vector<int>&a,vector<int>&b,vector<int>&res)
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
//         else // a[i]>=b[j]
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
//          res[k]=b[j];
//          k++;
//          j++;
//     }
//     }
//     if(j==b.size())
//     {
//         while(i<a.size())
//         {
//         res[k]=a[i];
//         k++;
//         i++;
//     }
//     }
// }
// int main()
// {
//     int arr1[]={1,3,5};
//     int arr2[]={2,4,6,7,8};
//     // merge the given two array

//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     // cout<<n1;

//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     // cout<<n2;


//     vector<int>v(arr1,arr1+n1);
//     // vector v is print 
//     // for(int i=0; i<v.size();i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }

//     vector< int>f(arr2,arr2+n2);
//     // vector f is print 
//     // for(int i=0; i<f.size(); i++)
//     // {
//     //     cout<<f[i]<<" ";
//     // }

// vector<int>res(n1+n2);

// merge(v,f,res);

// for(int i=0; i<res.size(); i++)
// {
//     cout<<res[i]<<" ";
// }

// }

// //1 2 3 4 5 6 7 8 


// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&aa,vector<int>&bb, vector<int>& ress)
// {
//     int i=0; 
//     int j=0;
//     int k=0;
//     while(i<aa.size() && j<bb.size())
//     {
//         if(aa[i]<bb[j])
//         {
//             ress[k]=aa[i];
//             k++;
//             i++;
//         }
//         else // a[i]>=b[j]
//         {
//             ress[k]=bb[j];
//             k++;
//             j++;
//         }
//     }

//     if(i==aa.size())
//     {
//         while(j<bb.size())
//         {
//             ress[k]=bb[j];
//             k++;
//             j++;
//         }
//     }

//     if(j==bb.size())
//     {
//         while(i<aa.size())
//         {
//             ress[k]=aa[i];
//             k++;
//             i++;
//         }
//     }
// }
// void mergesort(vector<int>& r)
// {
//     int n=r.size();
//     if(n==1) return ;
//     int n1 = n/2;
//     int n2 = n-n/2;
    
//      vector<int>a(n1);
//      vector<int>b(n2);
//      for(int i=0; i<n1;i++)
//      {
//         a[i]=r[i];
//      }

//      for(int i=0; i<n2;i++)
//      {
//         b[i]=r[i+n1];
//      }

//     // magic 
//     mergesort(a);
//     mergesort(b);

//     // merge
//     merge(a,b,r);

// }
// int main()
// {
//     int arr[]={5,1,3,0,4,9,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // cout<<n;

//     vector<int>v(arr,arr+n);
//     for(int i=0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     mergesort(v);

//     for(int i=0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }


