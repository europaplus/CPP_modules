/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:45:04 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/13 15:00:36 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	s_student {
	std::string name;
	int			eval;
}				t_student;

void		sortStudentOfEval(t_student *student, int countStudent)
{
	int		j;

	for (int i = 0; i < countStudent; i++)
	{
		j = i;
		for (j = 0; j < countStudent - 1; j++)
		{
			if (student[i].eval < student[i + 1].eval)
			{
				int buf;
				buf = student[i].eval;
				student[i].eval = student[i + 1].eval;
				student[i + 1].eval = buf;
			}
		}
	}
}

void		printStudent(t_student *student, int countStudent)
{
	for (int i = 0; i < countStudent; i++)
		std::cout << student[i].name << " got a grade of " << student[i].eval << std::endl;
}

int			main()
{
	int			countStudent;
	t_student	*student;

	countStudent = 0;
	do {
		std::cout << "Input count a student: ";
		std::cin >> countStudent;
	} while (countStudent <= 1);
	student = new t_student[countStudent];
	for (int i = 0; i < countStudent; i++)
	{
		std::cout << "Input name the student: ";
		std::cin >> student[i].name;
		std::cout << "Input eval of student: ";
		std::cin >> student[i].eval;
	}
	sortStudentOfEval(student, countStudent);
	printStudent(student, countStudent);
	delete[] student;
	return (0);
}