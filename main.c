# include <stdio.h>
# define SIZE 10
main()
{
    // define and initialize an array
    int arr1[]={10,20,43,56,74,78,83,91,96,99};

    // value need to search
    int search_item=78;

    //function call and assign the return value to the result variable
    int result=BinarySearch(arr1, search_item);

    //check the result value is negative or positive
    if(result==-1)
    printf("%d is NOT Found\n",search_item);
    else
    printf("%d is Found\narray index %d",search_item,result);
}

   //function that is used for binary searching
int BinarySearch(int arr[], int item)
{
    //variable declaration for array indexes
     int low,high,mid;

     //lowest array index should equal to 0
     low = 0;
     //highest array index should equal to arraysize-1
     high = SIZE-1;

     //lowest index should be less than or equal to highest index
     while(low <= high)
    {
        //finding middle index
        mid = (low+high) / 2;

        //start searching with middle element

        ///if the search item is equal to middle element return that value
        if(item == arr[mid])
            return mid;

        ///else check whether the search item is less than or greater than to the middle element

        else
          {
              ///if search item is greater than middle value then search item should be in right side in array
              ///therefore low value should be initialized with the next value after the middle
             if (item>arr[mid])
                low = mid+1;
            ///if search item is less than middle value then search item should be in left side in array
              ///therefore low value should be initialized with the previous value before the middle
            else
                high = mid-1;
          }
    }
    return -1;
}
