#include<iostream>
using namespace std;

class matrix
{
    char a[20][20],b[20][20];
    int i,j;

    public:
    matrix()
    {
        cout<<"Enter the elements of matrix : ";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void show()
    {
        cout<<"The given matrix is "<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<"\t";
            }
            cout<<"\n";
        }
    }

    void transpose()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    b[j][i]=a[i][j];
                }
        }
    }

    void display()
    {
        cout<<"The transposed matrix is "<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<b[i][j];
                cout<<"\t";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    matrix m;
    m.show();
    m.transpose();
    m.display();
}