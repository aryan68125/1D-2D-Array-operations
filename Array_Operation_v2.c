#include<stdio.h>

// functions for 2D Array Operations
void InputElements(int arr[],int n) //function to input the elements inside the array
{
	printf("Input the elements inside the array\n");
for(int i=0;i<n;i++)
{
	scanf("%d", &arr[i]); //logic to input the array elements
}
}//InptElements closed

void display(int arr[],int n) //function to traverse the array
{
printf("Performing Traversal operation on array\n");
for(int i=0;i<n;i++)
{
	printf("arr[%d] = %d\n",i, arr[i]); //logic to traverse the array elements
}
}//display closed

int Insertion(int arr[], int n, int element, int capacity, int position) //Function to perform insertion operation on the array
{
	if(n >= capacity) // condition for insertion
	{
		printf("capacity reached ...cannot add anymore element\n");
		return -1;
	}
for (int i= n-1 ; i>= position; i--) //shifting lements inside the array 
{
	arr[i+1]=arr[i];
}
arr[position]=element;//inserting the element in the desired position of the array
return 1;
}// insertion closed

int Deletion(int arr[], int n, int position) //function performing deletion operation on the array using the position method
{
	if(position<=n)
	{
	printf("Deleting %d from the array in position %d \n", arr[position], position);
	for(int i=position; i<n-1; i++)
	{
      arr[i]=arr[i+1];
	}
}

else 
{
	printf("array position you entered does not hold any data\n");
}

printf("Deletion complete...\n");
return 1;

}//deletion closed

int LinearSearch(int arr[], int n, int element) //Linear search operation on array
{
for(int i =0;i<n;i++)
{
    if(arr[i]==element)
    {
    		return i;
    }
}
printf("Linear search complete\n");
return -1;
}//Linear search closed

int binarysearch(int arr[],int n, int element, int brr[]) // function to perform binary search the array must be sorted in ascending or desending order
{
	int temp=0;//temporary variable for sorting
for(int i=0;i<n;i++)
{
brr[i] = arr[i];   //loop to copy arr array into brr array
}

for(int m=0;m<n-1;m++)  //bubble sorting logic in ascending order
{
	for(int j=m+1;j<n;j++)
	{
		if(brr[j]<brr[m])
		{
          temp=brr[m];
          brr[m]=brr[j];
          brr[j]=temp;
		}
	}
}

int low,mid,high;
low=0;
high=n-1;
while(low<=high)
{
	mid = (low+high)/2;
	if(brr[mid]==element)
	{
      return element;
      break;
	}
	if(brr[mid]<element)
	{
		low=mid+1;
	}
	else
	{
		high=mid-1;
	}

}
printf("Binary search complete...\n");
	return 0;
}// binary sort ends

void update(int arr[], int n, int position, int element) //update operation on array
{
	if(position<n) //position should be less than equal to number of elements inside the array
	{
		arr[position]=element;
		printf("Update element in array operation complete...\n");
	}
	else
	{
		printf("Update operation unsuccessful\n");
	}
}//Update closed


//functions for 1D Array Operations
int inputa(int a[10][10] , int row, int column)
{
	printf("input elements of mairix a\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	scanf("%d", &a[i][j]);
	}
	}
	return 0;
}// inputa closed

int inputb(int b[10][10] , int row, int column)
{
	printf("input elements of mairix b\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	scanf("%d", &b[i][j]);
	}
	}
	return 0;
}// inputb closed

int displaya(int a[10][10], int row, int column)
{
	printf("displaying elements of mairix a\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	printf("%d \t\t", a[i][j]);
	}
	printf("\n");
    }
  return 0;
} //displaya closed

int displayb(int b[10][10] , int row, int column)
{
	printf("displaying elements of mairix b\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	printf("%d \t\t", b[i][j]);
	}
	printf("\n");
	}
   return 0;
}//displayb closed

int sumOfTwoArray(int a[10][10] , int b[10][10] , int res[10][10], int row, int column)
{

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		res[i][j]=a[i][j] + b[i][j];
	}
}

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		printf("%d \t\t", res[i][j]);
	}
	printf("\n");
}
 return 0;
} //sumOdTwoArray closed

int subtractionOfTwoArray(int a[10][10] , int b[10][10] , int res[10][10], int row, int column)
{

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		res[i][j]=a[i][j] - b[i][j];
	}
}

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		printf("%d \t\t", res[i][j]);
	}
	printf("\n");
}
 return 0;
}//subtractionOfTwoArray closed

int MultiplyTwoArray(int a[10][10] , int b[10][10] , int res[10][10], int row, int column, int row1, int column1)
{

    int i, j, k;
	for(i =0;i<row;i++) //row of matrix a
	{
		for(j=0;j<column1;j++) //column of matrix b
		{
			for(k=0;k<column;k++) //column of matrix a
			{
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for(int i=0;i<row;i++) //row of matrix a
{
	for(int j=0;j<column1;j++) //column of matrix b
	{
		printf("%d \t\t", res[i][j]);
	}
	printf("\n");
}

return 0;
}

int transposeA(int a[10][10] ,int transA[10][10], int row, int column)
{

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		transA[j][i] = a[i][j];
	}
}

printf("Transpose of Matrix A\n");
for(int i=0;i<column;i++)
{
	for(int j=0;j<row;j++)
	{
		printf("%d \t\t", transA[i][j]);
	}
	printf("\n");
}
return 0;
}//transposeA closed

int transposeB(int b[10][10] ,int transB[10][10], int row1, int column1)
{

for(int i=0;i<row1;i++)
{
	for(int j=0;j<column1;j++)
	{
		transB[j][i] = b[i][j];
	}
}

printf("Transpose of Matrix B\n");
for(int i=0;i<column1;i++)
{
	for(int j=0;j<row1;j++)
	{
		printf("%d \t\t", transB[i][j]);
	}
	printf("\n");
}
return 0;
}//transposeB closed


int main()
{
//variables related to 1D Array Operations
	int arr[100]; // declaring array of capacity to hold 100 elements

	int brr[100]; // temporary array for bubble sorting

	int size ; //number of elements to store inside the array

int ch; //choice in switch statement

int k=1; //menue loop variable

int element; //element to be inserted inside the array

int position; //define the position at which you want to insert the element

int index; //index of array where the element is found in linear search

int mid; //to hold the mid value returned by binary search function

//variables relayed to 2D Array operations
int a[10][10];
	int b[10][10];

	int res[10][10]; //to store result
	int transA[10][10]; //to store transpose of matrix A
	int transB[10][10]; //to store transpose of matrix B
    
    int row;    //for matrix a
	int column;

    int row1;
    int column1; //for matrix b

    int choice ;
 
    int u = 0; //menue loop variable

    //variables for main menue loop
    int menue; //choice variable main menue between 1D and 2D array operations 

    int g=0; //variable of main menue loop

//main menue loop
do{
	u=0;
	k=0;
printf("Press 1 to perform 1D Array operations\n");
printf("Press 2 to perform 2D Array operations\n");
printf("Press 3 to exit program\n");
scanf("%d", &menue);
printf("\n");
switch(menue)
{
case 1:
printf("you chose 1D Array operations \n");
printf("initializing 1D Array operations program\n");
printf("\n");
// menue loop for 1D Array
do{
printf("Press 0 to perform Input operation\n");
printf("Press 1 to perform Traversal operation\n");
printf("Press 2 to perform Insertion operation\n");
printf("Press 3 to perform Deletion operation\n");
printf("Press 4 to perform Linear Search operation\n");
printf("Press 5 to perform Binary Search operation\n");
printf("Press 6 to perform Update operation\n");
printf("press 7 to show developer information\n");
printf("Press 8 to exit the program\n");
scanf("%d", &ch);
printf("\n");
switch(ch)
{

case 0:
printf("Enter the number of Elements that is to be Entered inside the array\n");
printf("Note: the max size should be less than 100\n");
scanf("%d", &size); //enter the number of elements that is to Entered inside the array
InputElements(arr,size); //calling function that will input 1DArray elements
printf("\n");
break;

case 1:
display(arr,size);
printf("\n");
break;

case 2:
printf("Enter the element you want to insert inside the array\n");
	scanf("%d", &element);
	printf("Enter the position at which you want to insert the element inside the array\n");
	scanf("%d", &position);
Insertion(arr,size, element,100, position);
size++;
printf("size oh the array is now after insertion = %d\n", size);
printf("\n");
break;

case 3:
printf("Enter the element that is to be deleted from the array\n");
scanf("%d", &element);
index = LinearSearch(arr,size,element);
if(index != -1)
{
	printf("%d is found at position %d in array\n", element,index);
	printf ("deleting %d from the array\n", element);
	  Deletion(arr,size, index);
      size--;
      printf("\n");
}
else
{
	printf("%d not present in array\n",element);
	printf("\n");
}
break;

case 4:
printf("Enter the element that is to be found inside the array\n");
scanf("%d", &element);
index = LinearSearch(arr,size,element);
if(index != -1)
{
	printf("%d is found at position %d in array\n", element,index);
}
else
{
	printf("%d not present in array\n",element);
}
printf("\n");
break;

case 5:
printf("Enter the element that is to be found inside the array\n");
scanf("%d", &element);
mid = binarysearch(arr,size,element,brr);
if(mid == element)
{
	printf("%d is present in array\n", element);
}
else
{
	printf("%d is not present in array\n", element);
}
printf("\n");
break;

case 6:
printf("Enter the element you want to insert inside the array\n");
	scanf("%d", &element);
	printf("Enter the position at which you want to insert the element inside the array\n");
	scanf("%d", &position);
update(arr, size, position, element);
printf("\n");
break;

case 7:
printf(" Name :- Aditya Kumar\n");
printf("Roll number:- 1901230100001\n");
printf("Course:- B.Tech\n");
printf("Stream:- Computer science\n");
printf("\n");
break;

case 8:
printf("1D Array operations Program Terminated by the user !!!....\n");
printf("Switching to main menue...\n");
printf("\n");
k=2000;
break;

default:
printf("Wrong choice ...Please try again\n");
printf("\n");
break;

}//switch closed

}while(k<1000); //1D Array menue loop closed
break;

case 2:
printf("you chose 2D Array operations \n");
printf("initializing 2D Array operations program\n");
printf("\n");
//menue loop for 2D Array
 do
    {
    printf("Press 1 to enter matrix a\n");
    printf("Press 2 to enter matrix b\n");
    printf("Press 3 to display matrix a\n");
    printf("Press 4 to display matrix b\n");
    printf("Press 5 for matrix a + matrix b\n");
    printf("Press 6 for matrix a - matrix b\n");
    printf("Press 7 for matrix a * matrix b\n");
    printf("Press 8 to calculate transpose of matrix A\n");
    printf("Press 9 to calculate transpose of matrix B\n");
    printf("Press 10 to see developer information\n");
    printf("Press 11 to exit program\n");
    scanf("%d", &choice);
    printf("\n");
    printf("you chose option %d \n", choice);

    switch(choice)
    {
     case 1:
    printf("input row of the matrix a it should be less than 10\n");
    scanf("%d", &row);
    printf("input column of matrix a it should be less than 10\n");
    scanf("%d", &column);
    inputa(a , row, column);
     printf("\n");
     break;
     
     case 2:
    printf("input row of the matrix b it should be less than 10\n");
    scanf("%d", &row1);
    printf("input column of matrix b it should be less than 10\n");
    scanf("%d", &column1);
    inputb(b , row1, column1);
     printf("\n");
     break;
	
    case 3:
    printf("Displaying Matrix a\n");
    displaya(a, row, column);
     printf("\n");
     break;
	
	 case 4:
    printf("Displaying Matrix b\n");
    displayb(b , row1, column1);
     printf("\n");
     break;
     
     case 5:
     if( row == row1 && column == column1)
	{
		printf("performing Addition of matrix A and matrix B \n");
		sumOfTwoArray( a, b, res, row, column);
	}
	else 
	{
		printf("Addition of Matrix A and Matrix B is not possible \n");
	}
	printf("\n");
	break;

    case 6:
     if( row == row1 && column == column1)
	{
		printf("performing subtraction of matrix A and matrix B \n");
		subtractionOfTwoArray( a, b, res, row, column);
	}
	else 
	{
		printf("subtraction of Matrix A and Matrix B is not possible \n");
	}
	printf("\n");
	break;

    case 7:
    // the number of columns in the first matrix must be equal to the number of rows in the second matrix
    if( column == row1)
	{
		printf("performing multiplication of matrix A and matrix B \n");
		MultiplyTwoArray(a , b ,res, row, column, row1, column1);
	}
	else 
	{
		printf("multiplication of Matrix A and Matrix B is not possible \n");
	}
	printf("\n");
    break;

    case 8:
    transposeA(a ,transA, row, column);
    printf("\n");
    break;

    case 9:
    transposeB(b ,transB, row1, column1);
    printf("\n");
    break;

    case 10:
    printf(" Name :- Aditya Kumar\n");
printf("Roll number:- 1901230100001\n");
printf("Course:- B.Tech\n");
printf("Stream:- Computer science\n");
printf("\n");
    break;

	case 11:
	printf(" 2D Array Operations Program Terminated by the user!!!...\n");
	printf("Switching to main menue...\n");
    printf("\n");
	u=2000;
	break;

	default:
	printf("Wrong choice...Please try again!!!\n");
	printf("\n");
	break;
}
} while(u<1000); //2D array menue loop closed
break;

case 3:
printf("Program Terminated by the user!!!...\n");
printf("\n");
g=2000;
break;

default:
printf("Wrong choice...Please try again!!!\n");
printf("\n");
break;

}//main meue switch closed

}while(g<1000);//main menue loop closed

	return 0;
}//main closed