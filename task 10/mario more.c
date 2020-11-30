int main(void)
  {
          int height;
          int row;
          do
         {
                height= get_int("Height :");
         }   while (height < 0 || height > 23);

  for (row = 1 ; row <= height ; row++)
  {

	  // print spaces for left pyramid  ** spaces = current_row - height
	  for (int j = height; j > row; j--)
	  {
		  printf(" ");
	  }

	  // print hashes for left pyramid
	  for (int k = 0; k < row ; k++)
	  {

		  printf("#");
	  }

	  // print gap between pyramids
	  printf("  ");

	  // print hashes for right pyramid
	  for (int k = 0; k < row ; k++)
	  {

		  printf("#");
	  } 
	  printf("\n"); // new line after each row
  }

  }
