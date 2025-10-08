import sys

end_year = int(sys.stdin.readline().strip())

def is_leap(year):
    if year % 400 == 0: return True
    elif year % 100 == 0: return False
    if year % 100 != 0 and year % 4 == 0 : return True
    return False

month_days_leap =   [31,29,31,30,31,30,31,31,30,31,30,31]
month_days_normal = [31,28,31,30,31,30,31,31,30,31,30,31]

week_of_the_day = 1 # 2019,1,1 week
count = 0

for year in range(2019, end_year+1):
    months = month_days_leap if is_leap(year) else month_days_normal
    
    for i in range(len(months)):
        if (week_of_the_day + 12) % 7 == 4: # 4 == friday, 0 == monday
            count += 1
        week_of_the_day = (week_of_the_day + months[i]) % 7 # Next Month Start week
print(count)


