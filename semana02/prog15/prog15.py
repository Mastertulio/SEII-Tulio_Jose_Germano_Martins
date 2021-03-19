import csv

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)
    for line in csv_reader:
        print(line)

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)

    next(csv_reader) #pula a primeira linha de cabeçalho

    for line in csv_reader:
        print(line[2])

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)

    with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/new_names.csv', 'w') as new_file:
        csv_writer = csv.writer(new_file, delimiter='\t')

        for line in csv_reader:
            csv_writer.writerow(line)

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/new_names.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter='\t')
    for line in csv_reader:
        print(line)

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.DictReader(csv_file)
    for line in csv_reader:
        print(line['email'])

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.DictReader(csv_file)

    with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/new_names.csv', 'w') as new_file:
        fieldnames = ['first_name', 'last_name', 'email']
        csv_writer = csv.DictWriter(new_file, fieldnames=fieldnames, delimiter='\t')
        csv_writer.writeheader()

        for line in csv_reader:
            csv_writer.writerow(line)

with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/names.csv', 'r') as csv_file:
    csv_reader = csv.DictReader(csv_file)

    with open('/home/Tulio/SEII-Tulio_Jose_Germano_Martins/Semana02/prog15/new_names.csv', 'w') as new_file:
        fieldnames = ['first_name', 'last_name']
        csv_writer = csv.DictWriter(new_file, fieldnames=fieldnames, delimiter='\t')
        csv_writer.writeheader()

        for line in csv_reader:
            del line['email']
            csv_writer.writerow(line)
