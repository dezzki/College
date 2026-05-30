### UNIT 1 – Introduction to basic statistics and analysis

**Topic 1 – Fundamentals of Data Analysis & Types of Data**

- **6 Marks**
    - Using diagrams give example of each of the following data distributions: (i) unimodal (ii) bimodal (iii) multimodal [Source: Paper 1673 (2024), Q4(a)]

**Topic 2 – Correlation and Covariance**

- **2 Marks**
    - Create a DataFrame of 8 rows and 8 columns containing random integers in the range of 1 to 10. Compute the correlation of each row with the preceding row. [Source: Paper 4432 (2024), Q7(a)]
- **Part of 8 Marks**
    - Compute the correlation and covariance between Hours_studied and Marks_obtained. [Source: Paper 1673 (2024), Q3(a)(iii)]

**Topic 3 – Python Fundamentals (Prerequisite/Foundation)**

- **2 Marks**
    - What will be the output of the following codes? `List = [str[::-1] for str in ('happy','go','lucky')]` `print(List)` [Source: Paper 4432 (2024), Q1(b)(ii)]
    - Python is a strongly “typed” language. Comment. [Source: Paper 4432 (2024), Q1(d)]
    - Differentiate between mutable and immutable objects. [Source: Paper 4432 (2024), Q1(f)]
    - Give output of the following code. Justify your answer. `var=(1, 2, (3,4))` `var='geet'` `print(var)` [Source: Paper 4432 (2024), Q5(a)]
- **3 Marks**
    - Provide the output of the following code: `from datetime import datetime, date, time`, `dt = datetime(2011, 10, 29, 20, 30, 21)`, `dt2 = datetime(2011, 11, 15, 22, 30)`, `delta = dt2 - dt`, `print(delta)`, `print(type(delta))`, `print(dt.replace(minute=0, second=0))` [Source: Paper 4432 (2024), Q1(h)]
- **4 Marks**
    - Write a generator function to print Fibonacci numbers. [Source: Paper 4432 (2024), Q4(b)(i)]
    - What is the output of the following code: `def simpleGeneratorFunc(): yield 1 yield 2`, `x = simpleGeneratorFunc()`, `print(next(x))`, `print(next(x))` [Source: Paper 4432 (2024), Q4(b)(ii)] _(Estimated Marks: Part of 4 Marks)_

### UNIT 2 – Array manipulation using Numpy

**Topic 1 – Creating NumPy Arrays and Data Types**

- **5 Marks**
    - Find the output that will be produced on the execution of the following code snippet: `a1 = np.zeros((2, 3))`, `a2 = [,]`, `print(np.add(a1, a2))`, `a1 = np.append(a1, a2, axis = 0)`, `print('Shape of array:', a1.shape)` [Source: Paper 1673 (2024), Q1(d)]
    - Construct a NumPy array, markSheet, to store marks obtained by 2 students in 3 subjects, where marks are between 60 and 100. Write Python statements to display the data type, shape and dimension of markSheet. [Source: Paper 1673 (2024), Q2(b)]

**Topic 2 – Indexing, Slicing, and Data Processing**

- **2 Marks**
    - What will be the output of the following codes? `import numpy as np`, `arr = np.array([,])`, `print(arr[1,-1], arr[-1:])` [Source: Paper 4432 (2024), Q1(b)(i)]
    - Reshape the following array to dimension (2,6): `[,,]` [Source: Paper 4432 (2024), Q1(c)]
- **5 Marks**
    - Consider a NumPy array, empSalary, containing salary of 10 employees. Write Python statements to do the following: (i) Find total number of employees earning salary > 5000. (ii) Create a new array, incentive, to store incentives given to each employee where incentive is 10% of the salary. [Source: Paper 1673 (2024), Q1(e)]
    - Find the output that will be produced on the execution of the following code snippet: `c1 = np.arange(0, 24, 2); c2 = c1.reshape((2, 6)); print(c1, c2, sep='\n'); print(c2.reshape((3,4))); arr2[:3, 3:] = 0; print(c2); print(c1 * 2)` [Source: Paper 1673 (2024), Q5(a)]
- **7 Marks**
    - Find the output on the execution of the following code snippet: `b1 = np.arange(6); b2 = np.array([,]); print('i.\n', b1); print('ii.\n', b2); print('iii.\n', 2/b2); print('iv.\n', b1, b2); print('v.\n', b1[:1], b2[::-2])` [Source: Paper 1673 (2024), Q3(b)]

### UNIT 3 – Data Manipulation using Pandas

**Topic 1 – Data Structures: Series and DataFrame Creation**

- **2 Marks**
    - Give the output of the following code and identify the role of is_unique attribute in the code: `series = pd.Series()`, `print(series.is_unique)` [Source: Paper 4432 (2024), Q1(e)]
    - Find the output that will be produced on the execution of the following code snippet: `s1 = pd.Series([5, 0, -4, 8]) print(s1) print(s1.rank())` [Source: Paper 1673 (2024), Q6(a)(i)]
- **3 Marks**
    - Write a program to create the given dataframe [id, value]. [Source: Paper 4432 (2024), Q1(g)]
- **4 Marks**
    - What is the output of the following code: `df=pd.DataFrame({'fruit':fruits, 'basket_ID':np.arange(N), ...}) print(df) Fruit_cat=df['fruit'].astype('category') print(Fruit_cat) print(df.dtypes)` [Source: Paper 4432 (2024), Q1(L)]

**Topic 2 – Loading Data into Pandas**

- **6 Marks**
    - Write the code to read each row of a given csv file. Skip the header of the file while reading. Also print the number of rows and the field names. [Source: Paper 4432 (2024), Q3(a)]
- **Part of 10 Marks**
    - Read data from the given excel file 'data.xlsx' into a dataframe, df1. Set Employee_id as the index of the df1. [Source: Paper 1673 (2024), Q5(b)(i)]
- **Part of 15 Marks**
    - Read data from the given CSV file 'employee.csv' into a dataframe empData. [Source: Paper 1673 (2024), Q7(a)]

**Topic 3 – Working with Data Frames: Arithmetic, Statistics & Filtering**

- **4 Marks**
    - Consider the following dataframe, itemRate: (i) Double the value of the column Rate of each item. (ii) Display the type of item with minimum rate. [Source: Paper 1673 (2024), Q2(c)]
    - Consider the following dataset to perform the following operations: (i) Find all the rows where Age is greater than or equal to 12 and the Gender is male. (ii) If Age is greater than 20, then use the loc function to update Section with "S" and City with Pune. (iii) Select rows 1 to 2 with columns 2 to 3 using iloc. [Source: Paper 4432 (2024), Q1(k)]
- **5 Marks**
    - Consider the following dataframe, company... (i) Display the total number of distinct names of the employees. (ii) Compute the average age of the employees with the same name. [Source: Paper 1673 (2024), Q1(b)]
- **Part of 8 Marks**
    - Consider the dataframe df_Student... (i) Find names of students who got maximum marks. (ii) Find the average number of hours studied by the students. [Source: Paper 1673 (2024), Q3(a)(i, ii)]
- **Part of 9 Marks**
    - Consider the dataframe, company, showing details of sales... (i) Find the maximum and minimum sales for Brazil. (ii) Display total sales for each country. (iii) Display the name of the salesperson with maximum average sales. (iv) Display statistical summary of the numerical attributes only. [Source: Paper 1673 (2024), Q4(b)(i-iv)]
- **Part of 15 Marks**
    - (b) Calculate and display the total salary for each role. (c) Display the total number of females along with their average salary. (e) Delete records with salary less than the average salary of all employees. [Source: Paper 1673 (2024), Q7(b, c, e)]

**Topic 4 – Binning**

- **1 Mark**
    - Differentiate between: qcut and cut methods. [Source: Paper 4432 (2024), Q2(a)(i)] _(Estimated Marks: Part of 2 Marks)_
- **3 Marks**
    - Consider the following numeric grades (out of 4). Formulate bins for the given grades as per the following condition (Below 2.5: Very bad... Between 3.75 to 4: Excellent). [Source: Paper 4432 (2024), Q2(b)]
- **5 Marks**
    - Consider an array, ages... (i) Create four bins of the array ages, using right side closed intervals (18–25], (25–35], (35–60], (60–100]. Name the categories as 'Youth', 'YoungAdult', 'MiddleAged' and 'Senior' respectively. Display the number of values in each category. (ii) Create four equal-sized categories of the array ages. [Source: Paper 1673 (2024), Q6(b)]

**Topic 5 – Handling Missing Data & Reindexing**

- **4 Marks**
    - Provide the output of the following code: `df.iloc[2:4, 1,2]=np.NaN` `print(df)` [Source: Paper 4432 (2024), Q1(j)(i)]
    - (i) Differentiate between ffill and bfill. (ii) Provide the output of the given code: `obj3.reindex(range(6), method='ffill')`, `obj3.reindex(range(6), method='bfill')` [Source: Paper 4432 (2024), Q3(b)]
- **5 Marks**
    - Find the output that will be produced... `print(data.dropna(thresh = 2)) print(data.fillna(method = 'ffill', limit = 2))` [Source: Paper 1673 (2024), Q1(f)]
    - Given the following dataframe, provide the output for the following commands: (i) df.dropna(thresh=2) (ii) df.dropna(how='all') (iii) df.dropna(how='all', axis=1) (iv) df.isnull() (v) df.isnull().values.any() [Source: Paper 4432 (2024), Q2(c)]

**Topic 6 – Data Wrangling: Merging, Reshaping, and Data Cleaning**

- **1 Mark**
    - Differentiate between: Pandas.merge and pandas.concat [Source: Paper 4432 (2024), Q2(a)(ii)] _(Estimated Marks: Part of 2 Marks)_
- **3 Marks**
    - Find the output that will be produced... `data2 = data1.drop_duplicates(['One', 'Two'], keep='last') print(data1) print(data2)` [Source: Paper 1673 (2024), Q6(a)(ii)]
- **4 Marks**
    - Write the code to merge the two given datasets using key1, key2. [Source: Paper 4432 (2024), Q5(b)]
- **5 Marks**
    - Consider the following tables named section1 and section2... (i) Create a dataframe named section1 for the table section 1. (ii) Display details of all students of section 2 along with details of students of section 1 with the same Name. (iii) Display details of students with the same Name and RollNo in both sections. [Source: Paper 1673 (2024), Q1(c)]
    - Find the output... `df2['A'] = df1['A'] + 10 print(df2) print(df2 > df1['B'].min())` [Source: Paper 1673 (2024), Q6(iii)]

**Topic 7 – Hierarchical Indexing**

- **6 Marks**
    - Find the output that will be produced on the execution of the following code snippet: `df.index.names = ['key1', 'key2']`, `df1=df.swaplevel('key1', 'key2')`, `df2=df1.sort_index(level=0)` [Source: Paper 1673 (2024), Q2(a)]

**Topic 8 – Time Series (Using Pandas Data Structures)**

- **2 Marks**
    - Provide code to create a time-series with two index labels- 2011/9/01 and 2011/9/02. Assign random values. [Source: Paper 4432 (2024), Q1(a)]
    - Identify the need to resample Timeseries data. [Source: Paper 4432 (2024), Q6(b)]
    - Downsample data to 30s. [Source: Paper 4432 (2024), Q6(c)(ii)]
- **3 Marks**
    - Create a Timeseries Dataframe with date range 01-02-2022 to 30-02-2022 with 1 min frequency interval. The dataframe has two columns populated with random values. [Source: Paper 4432 (2024), Q6(a)]
    - Consider following dataset. Resample for 10min with sum function for value1, mean for value2 and max for value3. [Source: Paper 4432 (2024), Q6(c)(i)]

### UNIT 4 – Plotting and Visualization

**Topic 1 – Using Matplotlib to plot data**

- **1 Mark (Each)**
    - (ii) Add title "Delhi AQI for last ten days". (iii) Set label for x-axis "Date" and y-axis "AQI". (iv) Show grids in the background. (v) Set marker as '*'. [Source: Paper 4432 (2024), Q7(b)(ii-v)]
- **4 Marks**
    - Plot a line graph showing AQI (Air Quality Index) against date with line colour as red, line width as "4pixels" and dashed line style. [Source: Paper 4432 (2024), Q7(b)(i)]
- **5 Marks**
    - Given rainfall = captured for 5 days... Write code in Python to plot a line with days and rainfall as x and y axis respectively. Mark each point with a red circle of size 20. Add a title to the graph. [Source: Paper 1673 (2024), Q1(a)]
- **Part of 10 Marks**
    - Create a figure and add two subplots in it. In the first subplot, create a scatter plot between Salary and Age... Discretize Salary into 3 equal bins. In the second subplot, draw a figure to visualize the count of the number of employees in each of these bins. (iii) Save the plotted figure to a file named 'Employees.png'. [Source: Paper 1673 (2024), Q5(b)(ii, iii)]

**Topic 2 – Plotting functions in Pandas (Bar, Box, Heatmap)**

- **Part of 8 Marks**
    - Plot the heatmap of columns Hours_studied and Marks_obtained of the dataframe Student. [Source: Paper 1673 (2024), Q3(a)(iv)]
- **Part of 9 Marks**
    - Draw a boxplot of the sales. [Source: Paper 1673 (2024), Q4(b)(v)]
- **Part of 15 Marks**
    - Compare the highest and lowest salary for each gender using bar plot. [Source: Paper 1673 (2024), Q7(d)]

### UNIT 5 – Data Aggregation and Group operations

**Topic 1 – Group By Mechanics & Data Aggregation**

- **2 Marks**
    - Group the data on the column ord_date and calculate the total purchase amount purch_amt year wise and month wise. [Source: Paper 4432 (2024), Q4(a)(i)]
    - Group on the columns customer_id, salesman_id and then sort sum of purch_amt within the groups. [Source: Paper 4432 (2024), Q4(a)(iii)]
- **4 Marks** _(Merged Question)_
    - Write the code to split the given dataset into groups based on column customer_id and create a list of order date ord_date for each group. [Sources: Paper 4432 (2024), Q4(a)(ii), 2 Marks Paper 4432 (2024), Q5(c), 4 Marks]
    - Using the above dataframe, group df by mapping and find the sum. [Source: Paper 4432 (2024), Q1(j)(ii)] _(Estimated Marks: Part of 4 Marks)_

**Topic 2 – Pivot tables and Cross Tabulation**

- **3 Marks**
    - Set the first column 'Id' as the row index of the given dataframe df. Create a pivot table of df to display the total number of admissions as per 'Section' and 'Gender'. [Source: Paper 4432 (2024), Q1(i)]