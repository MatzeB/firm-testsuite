int x[(1024 / sizeof (int))];

int main(int argc, char *argv[]) {
  int y[(1024 / sizeof (int))];
	printf("DivBug. ok!\n");
	printf("Result: %d", y[(1024 / sizeof (int))-1]+x[(1024 / sizeof (int))-1]);

	return 0;
}
