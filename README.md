# cs50
This repository has been created to keep the prject work of a course cs50 that i am currently working on.


<h2>Course Structure</h2>



<h3>📝HTML/CSS</h3>

<p>the part of the course had the very clear idea of what is html, the various tags used in html.</p>
The most common ones taught in this part of the course are:

<p>1.The style attribute which is used as a sub part in the main tags such as the heading tags(h1,h2,h3....), body tags, paragraph tags, etc. The style tag consists of various subparts such as font colour, text alignment, etc.</p>

<p>2.Attributes: HTML attributes are special words used inside the opening tag to control the element's behaviour. HTML attributes are a modifier of an HTML element type.It takes 2 parameters, ie, a name & a value which define the properties of the element and are placed inside the element tag. One of the attributes covered in the course is the a href attribute.</p>

<p>3.Have been taught how to create buttons. Buttons are a very common tool used to attract users in a website. In the course we were not just taught to use the buttons but also to change the colour of the button when the mouse is placed on it.</p>

<p>4.List: HTML lists allow web developers to group a set of related items in lists. Both unordered and ordered list have been covered. The use of nested list is also specified in the course.</p>

<p>5.Flexbox: Flexbox is a one-dimensional layout method for arranging items in rows or columns. Here the properties that will be used are:
  <p>The flex-wrap property is a sub-property of the Flexible Box Layout module. It defines whether the flex items are forced in a single line or can be flowed into multiple lines. If set to multiple lines, it also defines the cross-axis which determines the direction new lines are stacked in.</p>
</p>
<p>6.Editing font: The size, style and colour of the font can be changed. The aligment of the text and the font weight can also be changed.</p>

<p>7.Grid: The CSS Grid Layout Module offers a grid-based layout system, with rows and columns, making it easier to design web pages without having to use floats and positioning.</p>

<p>8.Media: Whhen we have to change the background color of the <body> element to "lightblue" when the browser window is 600px wide or less.</p>
  
<p>9.Table: The ability to change the width, boarder thickness, height and the spacing between rows and columns has been taught.</p>





<h3>  👩🏻‍🏭Git</h3>
A very useful tool that allows us to keep track of changes we make to our code by saving snapshots of our code at a given point in time. It allows us to easily synchronize code between different people working on the same project by allowing multiple people to pull information from and push information to a repository stored on the web. In addition to that, it allows us to make changes to and test out code on a different branch without altering our main code base, and then merging the two together. Furthermore git allows us to revert back to earlier versions of our code if we realize we’ve made a mistake. Here are the list of commands of git that were discussed in the course-

<p>1.git clone <repository url> : This will download the repository to your computer. </p>
<p>2.Run ls, which is a command that lists all files and folders in your current directory.</p>
<p>3.Run cd <repository name> to change directory into that folder.</p>
<p>4.Run touch <new file name> to create a new file in that folder. </p>
<p>5.Run git add <new file name> to track that specific file, or git add . to track all files within that directory.</p>
<p>6.git commit -m "some message" where the message describes the changes you just made.</p>
<p>7.git status to see how our code compares to the code on the remote repository.</p>
<p>8.publish our local commits to Github, we can run git push.</p>
<p>9.A merge conflict occurs when two people attempt to change a file in ways that conflict with each other.This will typically occur when you either git push or git pull. When this happens, Git will automatically change the file into a format that clearly outlines what the conflict is.</p>
<p>10.git log, which gives you a history of all of your commits on that repository.</p>
<p>11.git reset --hard <commit> reverts your code to exactly how it was after the specified commit. </p>
<p>12.git reset --hard origin/master reverts your code to the version currently stored online on Github.</p>
Branching is a method of moving into a new direction when creating a new feature
<p>13.Run git branch to see which branch you’re currently working on, which will have an asterisk to the left of its name.</p>
<p>14.To make a new branch, we’ll run git checkout -b <new branch name></p>
<p>15.Switch between branches using the command git checkout <branch name></p>
<p>16.<b>fork</b> any repository that you have access to, which creates a copy of the repository that you are the owner of. </p>
<p>17.Making a github page:
  <p>Create a new GitHub repository -> Clone the repository and make changes locally, making sure to include an index.html file which will be the landing page for your website -> Push those changes to GitHub -> Navigate to the Settings page of your repository, scroll down to GitHub Pages, and choose the master branch in the dropdown menu -> Scroll back down to the GitHub Pages part of the settings page, and after a few minutes, you should see a notification that “Your site is published at: …” including a URL where you can find your site!





<h3>  📚Python</h3>
Python is a very powerful and widely-used language that will allow us to quickly build fairly complicated web applications. In this course, we’ll be using Python 3, although Python 2 is still in use in some places. When looking at outside resources, be careful to make sure they’re using the same version. The print function built in to the python language, that takes an argument in parentheses, and displays that argument on the command line. When you type newfile.py in your terminal, a program called an interpreter, which you downloaded together with Python, reads through your file line by line, and executes each line of the code. This is different than languages like C or Java, which need to be compiled into machine code before they can be run.

<p>-><b>int</b>: An integer</p>
<p>-><b>float</b>: A decimal number</p>
<p>-><b>chr</b>: A single character</p>
<p>-><b>str</b>: A string, or sequence of characters</p>
<p>-><b>bool</b>: A value that is either True or False</p>
<p>-><b>NoneType</b>: A special value (None) indicating the absence of a value.</p>

<p>1.Formatting Strings: To indicate that we’re using formatted strings, we simply add an f before the quotation marks. For example, instead of using "Hello, " + name as we did above, we could write f"Hello, {name}" for the same result.</p>

<p>2.Conditions: Just like in other programming languages, Python gives us the ability to run different segments of code based on different conditions.</p>

<p>3.Sequences: There are several types of sequences that are similar in some ways, but different in others. When explaining those differences, we’ll use the terms mutable/immutable and ordered/unordered. Mutable means that once a sequence has been defined, we can change individual elements of that sequence, and ordered means that the order of the objects matters.</p>

<p>4.Loops: Loops are used to iterate. In python, while loop is used to execute a block of statements repeatedly until a given condition is satisfied. And when the condition becomes false, the line immediately after the loop in the program is executed.</p>

<p>5.Functions: A function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function. A function can return data as a result.</p>

<p>6.Modules: Python has a way to put definitions in a file and use them in a script or in an interactive instance of the interpreter. Such a file is called a module; definitions from a module can be imported into other modules or into the main module.</p>

<p>7.Object-Oriented Programming: Method of structuring a program by bundling related properties and behaviors into individual objects. In this tutorial, you’ll learn the basics of object-oriented programming in Python. Object-oriented programming is a programming paradigm that provides a means of structuring programs so that properties and behaviors are bundled into individual objects. Use the keyword self to represent the object we are currently working with. self should be the first argument for any method within a Python class.</p>

<p>8.Functional Programming: Python also supports the Functional Programming Paradigm, in which functions are treated as values just like any other variable.
  <p>i.)Decorators: One thing made possible by functional programming is the idea of a decorator, which is a higher-order function that can modify another function. To write a decoder we have to use '@' symbol.</p>
  <p>ii.)Lambda Functions: This can be useful when we don’t want to write a whole separate function for a single, small use. </p>
 </p>
 
 <p>9.Exceptions: Even if a statement or expression is syntactically correct, it may cause an error when an attempt is made to execute it. Errors detected during execution are called exceptions and are not unconditionally fatal.</p>
 

<h3>  👨🏽‍🎓Django</h3>  
Django is a Python-based web framework that will allow us to write Python code that dynamically generates HTML and CSS. The advantage to using a framework like Django is that a lot of code is already written for us that we can take advantage of.
  
  
  
For more information about this course you can visit
<a href="https://www.edx.org/course/cs50s-web-programming-with-python-and-javascript" target="_main">Course </a>
