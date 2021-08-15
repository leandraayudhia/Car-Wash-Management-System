#include <stdio.h>
#include <stdlib.h>
#define n 100

//Nama : Leandra Ayudhia Alvaneza
//NIM : 2301885011
//Kelas : LC01

struct data_mobil
{  
	char plat[7];  
	int car_code[4];  
	int layanan[3];
	struct data_mobil *que; 
};  

typedef struct data_mobil node

struct que
{
	int x;
	struct antrian *next;
	
}*head, *tail, *current;

void que
{
	for (i = 0; i < jml; i++) //untuk menentukan mobil masuk ke jalur mana
	{ 
	    if (ukuran[i] = '1') 
    	{
    		if (status_jalur1 = false)
			{
				jalur1 = plat[i]
			}	 
            
        	else if (status_jalur2 = false)
        	{
        		jalur2 = plat[i]
			}
		    
        	else (status_jalur3 = false) 
        	{
        		jalur3 = plat[i]
			}           
		}
        
    	else if (ukuran[i] = '2') 
    	{
    		if (status_jalur1 = false)
    		{
    			jalur1 = plat[i]
			}
            
        	else if (status_jalur2 = false)
        	{
        		jalur2 = plat[i]
			}
      
        	else if (status_jalur3 = false)
        	{
        		jalur3 = plat[i]
			}
		}
        
   		else 
   		{
   			if (status_jalur4 = false)
   	 		{
   	 			jalur4 = plat[i]
			}
   		}
	}
}

typedef strcut 
{
	int minutes;
	int hours;
}time;

time *tm = calloc(2,sizeof(time));

void opt
{
	char car_code;
	
}

void data_mobil
{
	char plat;
	int opt, harga;
	
	if car_code == 1 //untuk menentukan harga pelayanan
	{
		opt()
		if opt[i]==1
		{
			harga = 50.000;		
		}
		else if opt[i]==2
		{
			harga = 35.000;		
		}
		else opt[i]==3
		{
			harga = 125.000;		
		}				
	}
	
	else if car_code == 2 //untuk menentukan harga pelayanan
	{
		opt()
		if opt[i]==1
		{
			harga = 60.000;		
		}
		else if opt[i]==2
		{
			harga = 40.000;		
		}
		else opt[i]==3
		{
			harga = 150.000;	
		}				
	}
	
	else if car_code == 3 //untuk menentukan harga pelayanan
	{
		opt()
		if opt[i]==1
		{
			harga = 70.000;		
		}
		else if opt[i]==2
		{
			harga = 50.000;		
		}
		else opt[i]==3
		{
			harga = 200.000;		
		}				
	}
	
	else
	{
		opt()
		if opt[i]==1
		{
			harga = 70.000;		
		}
		else if opt[i]==2
		{
			harga = 40.000;		
		}			
	}
}

char Q[n];
int F, R;
void insert(char x);
void del(void);
void awal(void);

void awal(void)
{
	F=0;
	R=-1;
}
	
void insert(char X)
{
	if (R<n-1)
	{
		R++;
		Q[R];
	}
		
	else
	{
		printf("\nAntrian Penuh");
	}
}

int main()
{
	FILE *fptr;
	
	fptr = fopen("UTSDS_2301885011_LEANDRA AYUDHIA ALVANEZA.txt","w");
	if (fptr == NULL)
	{
		printf("Error opening file.");
		int i;
		char x, y;
		data_mobil()
		
		data_mobil	
		scanf("%I", &x);
		insert(x);
	}
	fclose(fptr);	
	return 0;
}
