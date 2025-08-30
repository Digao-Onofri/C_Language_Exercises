# C Language Exercises

This repository contains a list of exercises about programming on C language that I developed during my Computer Information System course. I hope this content help you with your studies and knowledge.

--- 
## 📝 License

This project follow the MIT License. Take a look in the file [LICENSE](LICENSE) for more details.

---

## 📂 Repository Structure

```bash
C_Language_Exercises/
├── Exercises/   
	├── 01 - Beginner/              # If and Else
	├── 02 - Loops/                 # For, Do while and While 
	├── 03 - Arrays/                # Ordination and Comparison
	├── 04 - Strings/               # Ways to read and Handling
	├── 05 - Structs/               # Ways to create and Use
	├── 06 - Pointers/              # Dynamic Memory Allocation 
	└── 07 - Functions/             # Normal and Recursive
├── LICENSE
└── README.md
```

--- 

## 📄 File Structure
### 📌 File Name

The name is always set with the exercise number in the order that I developed plus the standard file extention of the C programming language.
- Example: <01.c> 

### 📌 Content Structure

Each file has a header with:

- Problem statement.
- Link to specific video that I explain the solution.
- Author details.

Bellow the header is the solution of the problem.

#### ✅ Complete Example

```05.c
/*

	Example: Write a program that reads an integer and displays, as an answer, the sum of it 	
	cube root with it fourth root. Consider two decimal places.
 	Youtube lesson: https://youtu.be/KTLnp6uXmhc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
int main() {
	int integer;
	float answer;
	
	printf("Enter an integer: ");
	scanf("%d", &integer);
	
	answer = sqrt(sqrt(integer)) + cbrt(integer);
	
	printf("The sum is: %.2f\n", answer);
	
	return 0;
}
```

--- 

## More informations 📞 

You can find all the solutions explained for each problem on my channel:

[![Youtube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@RodrigoOnofri)

Feel free to connect with me on Linkedin:

[![Linkedin](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/Rodrigo-Onofri)

My professional email: contact.rodrigo.onofri@gmail.com
