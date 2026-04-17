# prog-obj

[Task1](https://github.com/Artu5r/prog-obj/blob/main/Programowanie/LinqPracticalTasksConsoleApp/Task1.cs)
[Task2](https://github.com/Artu5r/prog-obj/blob/main/Programowanie/LinqPracticalTasksConsoleApp/Task2.cs)


SELECT w.nazwa_wydzialu FROM wydzial w JOIN student s ON w.id_wydzial = s.id_wydzial GROUP BY w.nazwa_wydzialu HAVING COUNT(s.id_student) > 2 ORDER BY w.nazwa_wydzialu DESC; -- AK

SELECT s.imie, s.nazwisko, w.nazwa_wydzialu FROM student s JOIN wydzial w ON s.id_wydzial = w.id_wydzial; -- AK

SELECT s.nazwisko, k.nazwa_kierunku FROM student s JOIN kierunek k ON s.id_kierunek = k.id_kierunek; -- AK

SELECT k.nazwa_kierunku, COUNT(s.id_student) AS liczba_studentow FROM kierunek k LEFT JOIN student s ON k.id_kierunek = s.id_kierunek GROUP BY k.nazwa_kierunku ORDER BY liczba_studentow DESC; -- AK

SELECT s.imie, s.nazwisko FROM student s JOIN kierunek k ON s.id_kierunek = k.id_kierunek JOIN wydzial w ON k.id_wydzial = w.id_wydzial WHERE w.nazwa_wydzialu = 'Wydział Informatyki'; -- AK

SELECT w.nazwa_wydzialu, AVG(s.rok_urodzenia) FROM wydzial w JOIN student s ON w.id_wydzial = s.id_wydzial GROUP BY w.nazwa_wydzialu; -- AK

