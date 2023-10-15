
    /* ----- เกมเป่ายิ่งฉุบ ลองทำความเข้าใจ ----- */

#include <math.h> // การคำนวณทางคณิตศาสตร์
#include <stdio.h> // การรับและแสดงผลข้อมูล
#include <stdlib.h> // การแปลงค่าข้อความ
#include <time.h> // manipulating date and time

int game(char you, char computer)  
{

    if (you == computer) // ถ้าเรากับคอมออกเหมือนกัน
		return -1; // กลับไปจุดแรก

	if (you == 's' && computer == 'p') // เราออกค้อน คอมออกกระดาษ
		return 0; // เราแพ้

			else if (you == 'p' && computer == 's') return 1; // แต่ถ้าเราออกกระดาษ คอมออกค้อน --- return 1 หมายความว่าเราชนะ

    if (you == 's' && computer == 'z') // ถ้าเราออกค้อน คอมออกกรรไกร
		return 1; // เราชนะ

		else if (you == 'z' && computer == 's') // แต่ถ้าถ้าเราออกกรรไกร คอมออกค้อน
			return 0; // เราแพ้

	if (you == 'p' && computer == 'z') // เราออกกระดาษ คอมออกกรรไกร
		return 0; // เราแพ้

		else if (you == 'z' && computer == 'p') // แต่ถ้าเราออกกรรไกร คอมออกกระดาษ
			return 1; // เราชนะ
}

int main()
{

	int n; 

	char you, computer, result;

	srand(time(NULL)); // srand ใช้สุ่มเลขในขณะหนึ่ง 
					  // Null น่าจะหมายความว่า ไม่กำหนด

	n = rand() % 100; // rand ใช้กำหนดระยะเลข

	// เงื่อนไขของฝั่งคอมพิวเตอร์
	if (n < 33)  				// ถ้าสุ่มเลขได้น้อยกว่า 33
		computer = 's'; 		// ออกค้อน

	else if (n > 33 && n < 66)  // แต่ถ้าสุ่มได้มากกว่า 33 แต่ไม่ถึง 66
		computer = 'p';			// ออกกระดาษ

	else						// นอกเหนือจาก 2 กรณีข้างบน (ก็คือเกิน 66)
		computer = 'z';			// ออกกรรไกร

	// \t คือการเว้นบรรทัดในแนวนอน (เว้นวรรค)
	printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

	scanf("%c", &you); // รับค่า char จากเรา

	result = game(you, computer); // เรียกใช้ function game

	if (result == -1) { // ถ้าเสมอ
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) { // ถ้าชนะ
		printf("\n\n\t\t\t\tWow! You have won the game!\n");
	}
	else { 				// นอกเหนือจาก 2 กรณีแรก ( result == 0 ---- แพ้) 
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	}
		printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);

	return 0;
}
