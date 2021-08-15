void mx_printstr();
void mx_strlen();

void mx_is_positive(int i) {
	if (i > 0) {
		mx_printstr("positive\n");	
	}
	else if (i == 0) {
		mx_printstr("zero\n");
	}
	else {
		mx_printstr("negative\n");
	}
}

// int main() {
// mx_is_positive(25);
// mx_is_positive(0);
// mx_is_positive(-31);
// }
