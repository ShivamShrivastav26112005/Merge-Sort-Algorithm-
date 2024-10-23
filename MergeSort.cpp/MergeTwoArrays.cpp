// Push array into vectors..

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arrr[]={1,2,4,3,5};
//     int n=sizeof(arrr)/ sizeof(arrr[0]);
//     vector<int>v(arrr,arrr+n);
// //  for(int i=0; i<n; i++)
// //     {
// //        cout<<v[i]<<" ";
// //     }
//  for(int i=0; i<n; i++)
//     {
//        cout<<arrr[i]<<" ";
//     }
// }





// Ques -: merge the given two arrays

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&a,vector<int>&b,vector<int>&res)
// {
//     int i=0; // a
//     int j=0; // b
//     int k=0; // res

//     while(i<a.size() && j<b.size())
//    {
//       if(a[i]<b[j])
//       {
//         res[k]=a[i];
//         k++;
//         i++;
//       }
//       else // a[i]>=b[i]
//       {
//         res[k]=b[j];
//         k++;
//         j++;
//       }
//    }

//    if(i==a.size())
//    {
//       while(j<b.size())
//       {
//         res[k]=b[j];
//         k++;
//         j++;
//       }
//    }

//    if(j==b.size())
//    {
//     while(i<a.size())
//     {
//         res[k]=a[i];
//         k++;
//         i++;
//     }
//    }

// }

// int main()
// {
//     int arr[]={3,4,7,7,7,75};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int brr[]={1,2,6,7};
//     int m=sizeof(brr)/sizeof(brr[0]);

//     vector<int>a(arr,arr+n);
//     vector<int>b(brr,brr+m);

//     vector<int>res(n+m);

//     merge(a,b,res);

//     for(int i=0; i<res.size(); i++)
//     {
//         cout<<res[i]<<" ";
//     }
// }

// // 1 2 3 4 6 7 7 7 7 75



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