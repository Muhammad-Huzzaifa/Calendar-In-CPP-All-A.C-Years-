# Calendar-In-CPP-All-A.C-Years-
C++ Calendar Code To Print Calendar (A.C) By Entering Year.
<br>
This code would prints the calendar for any A.C year entered by the user.
<br>
<div>
  This code is done with the help of Zeller's Congruence formula:
  <div>
    <br>
    Formula:
    <br>
    h = (q + floor(13 * ( m + 1 ) ) / 5) + k + floor( k / 4 ) + floor( j / 4 ) - 2 * j) mod 7
    <br>
  </div>
  <div>
    <br>
    1. 'h' is the day of week (0 = Saturday, 1 = Sunday, 2 = Monday, 3 = Tuesday, 4 = Wednesday, 5 = Thursday, 6 = Friday).
    <br>
    2. 'q' is the day of month.
    <br>
    3. 'm' is the  month (13 = January, 14 = February, 3 = March, 4 = April, 5 = May, 6 = June, 7 = July, 8 = August, 9 = September, 10 = Octuber, 11 = November, 12 = December).
    <br>
    4. If the year is "leap year" or the month is "January" or "February" then minus one the year.
    <br>
    5. 'k' is the year of century (year % 100).
    <br>
    6. 'j' is the century ( year / 100 ).
    <br>
  </div>
</div>
![image](https://github.com/Muhammad-Huzzaifa/Calendar-In-CPP-All-A.C-Years-/assets/157915768/7d6bed28-3029-4fb9-b112-b348d9a9b2a5)
