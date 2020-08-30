def arithmetic_arranger(problems, solve=False):
    arranged_problems = ""
    if len(problems) > 5:
        return "Error: Too many problems."
    else:
        for prob in problems:
            l = prob.split()
            num1 = l[0].strip()
            op = l[1].strip()
            num2 = l[2].strip()
            if op == "+" or op == "-":
                if (num1.isdecimal() and num2.isdecimal()):
                    if ( (len(num1) <= 4) and (len(num2) <= 4) ):
                        larger = max(len(num1), len(num2)) + 2
                        top = num1.rjust(larger)
                        bottom = op + num2.rjust(larger - 1)
                        dashes = '-' * larger
                        print(top + '\n' + bottom + '\n' + dashes)
                    else:
                        return "Error: Numbers cannot be more than four digits."
                else:
                    return "Error: Numbers must only contain digits."
            else:
                return "Error: Operator must be '+' or '-'."
                
            