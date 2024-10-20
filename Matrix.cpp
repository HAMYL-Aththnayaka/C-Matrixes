#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int matrix [rows][cols];
    int transepose [rows][cols];

    cout<<"Enter elements of matrix\n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"Enter Value for ("<<i<<","<<j<<"):";
            cin>>matrix[i][j];
        }
    }

    int choice;

    do{
    cout<<"\nMatrix operation menu:\n";
    cout<<"1.Display elements of matrix\n";
    cout<<"2.Sum of all elements in matrix\n";
    cout<<"3.Display row-wise sum of matrix\n";
    cout<<"4.Display column-wise sum of matrix\n";
    cout<<"5.Create transpose of matrix\n";
    cout<<"6.Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;


    switch (choice)
    {
    case 1:
        {
        cout<<"Elements in matrix\n";

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
        }

    case 2:
        {
        int sum=0;

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                sum+=matrix[i][j];
            }
        }
        cout<<"Sum of all elements:"<<sum<<endl;
        break;
        }

    case 3:
        {
        cout<<"\nRow-wise sum:\n";
         for(int i=0; i<rows; ++i)
        {
            int rowSum=0;
            for(int j=0; j<cols; j++)
            {
                rowSum+=matrix[i][j];
            }
        cout<<"Row "<<i+1<<" sum: "<<rowSum<<endl;
        }
        break;
        }
    case 4:
        {
        cout<<"\nColumn-wise sum:\n";
        for(int j=0; j<cols; ++j)
        {
            int colSum=0;
            for(int i=0; i<rows; i++)
            {
                colSum+=matrix[i][j];
            }
        cout<<"Col "<<j+1<<" sum: "<<colSum<<endl;
        }
        break;
        }
    case 5:
        {
        cout<<"Transpose of matrix\n";

        for(int i=0; i<cols; i++)
        {
            for(int j=0; j<rows; j++)
            {
                cout<<matrix[j][i]<<" ";
            }
            cout<<endl;
        }
        break;
        }
    case 6:
        {
            cout<<"\nExit\n";
            break;
        }
    default:
        {
            cout<<"\nInvalid Choice\n";
        }
    }
    }while(choice!=6);

return 0;
}
