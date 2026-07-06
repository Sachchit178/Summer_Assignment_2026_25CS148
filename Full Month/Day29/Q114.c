#include <stdio.h>
int main()
{
    int arr[100], n, i, j, choice, key, found, temp, maxFreq, freq, lucky;

    do
    {
        printf("\n====== SMART ARRAY ANALYZER ======\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Find Lucky Number (Most Frequent)\n");
        printf("4. Count Prime Numbers\n");
        printf("5. Count Palindrome Numbers\n");
        printf("6. Find Nearest Number to Target\n");
        printf("7. Remove Duplicate Elements\n");
        printf("8. Reverse Array\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter size of array: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i=0; i<n; i++)
                    scanf("%d",&arr[i]);
                break;

            case 2:
                printf("Array Elements: ");
                for(i=0; i<n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 3:
                maxFreq = 0;
                lucky = arr[0];

                for(i=0; i<n; i++)
                {
                    freq = 1;
                    for(j=i+1; j<n; j++)
                    {
                        if(arr[i]==arr[j])
                            freq++;
                    }

                    if(freq > maxFreq)
                    {
                        maxFreq = freq;
                        lucky = arr[i];
                    }
                }

                printf("Lucky Number = %d\n", lucky);
                printf("Frequency = %d\n", maxFreq);
                break;

            case 4:
            {
                int countPrime = 0, k, prime;

                for(i=0; i<n; i++)
                {
                    if(arr[i] < 2)
                        continue;

                    prime = 1;
                    for(k=2; k<=arr[i]/2; k++)
                    {
                        if(arr[i]%k==0)
                        {
                            prime = 0;
                            break;
                        }
                    }

                    if(prime)
                        countPrime++;
                }

                printf("Total Prime Numbers = %d\n", countPrime);
                break;
            }

            case 5:
            {
                int num, rev, rem, countPal = 0;

                for(i=0; i<n; i++)
                {
                    num = arr[i];
                    rev = 0;

                    while(num>0)
                    {
                        rem = num%10;
                        rev = rev*10 + rem;
                        num = num/10;
                    }

                    if(rev == arr[i])
                        countPal++;
                }

                printf("Palindrome Numbers = %d\n", countPal);
                break;
            }

            case 6:
            {
                int nearest, diff, minDiff;

                printf("Enter target number: ");
                scanf("%d",&key);

                nearest = arr[0];
                minDiff = arr[0]-key;
                if(minDiff<0)
                    minDiff = -minDiff;

                for(i=1; i<n; i++)
                {
                    diff = arr[i]-key;
                    if(diff<0)
                        diff = -diff;

                    if(diff < minDiff)
                    {
                        minDiff = diff;
                        nearest = arr[i];
                    }
                }

                printf("Nearest Number = %d\n", nearest);
                break;
            }

            case 7:
                for(i=0; i<n; i++)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(arr[i]==arr[j])
                        {
                            for(int k=j; k<n-1; k++)
                                arr[k]=arr[k+1];

                            n--;
                            j--;
                        }
                    }
                }

                printf("Duplicates Removed.\n");
                break;

            case 8:
                printf("Reverse Array: ");
                for(i=n-1; i>=0; i--)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 9:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=9);

    return 0;
}