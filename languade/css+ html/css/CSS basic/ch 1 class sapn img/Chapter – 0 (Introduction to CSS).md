Chapter – 0 (Introduction to CSS)
HTML is just a skeletal layout of a website. We need CSS to design a website, add styles to it and make it look beautiful.

What is CSS?

CSS stands for cascading style sheets

CSS is optional but it converts an off looking HTML page into a beautiful & responsive website

 

Installing VS Code

We will use Microsoft Visual Code as a tool to edit our code. It is very powerful, free, and customizable.

 

What Learn CSS?

CSS is a much-demanded skill in the world of web development If you are successfully able to master CSS, you can customize your website as per your liking.

 

Your first line of CSS

Create a .css file inside your directory and add it to your HTML. Add the following line to your CSS

body {
          background-color: red;
}
This will make your page background red.

 

HTML Refresher

HTML is a bunch of tags used to lay the structure of a page.

Download HTML notes as part of these notes for a detailed deep dive. If you know basic HTML, continue!

 

 

 

Chapter – 1 (Creating our first CSS Website)
We will create our first CSS website in this section.

What is DOM?

DOM stands for document object model. When a page is loaded, the browser creates a DOM of the page which is constructed as a tree of objects.

 

HTML id and class attributes

When an HTML element is given an id, it serves as a unique identifier for that element.

On the other hand, when an HTML element is given a class, it now belongs to that class. More than one element can belong to a single class but every element must have a unique id (if assigned).

We can add multiple classes to an element like this,

<div id = ‘first’ class = ‘C1 C2 C3’>
          …
</div>
# first is the unique id

# C1, C2 and C3 are the multiple classes followed by spaces

 

Three ways to add CSS to HTML

There are 3 ways to add CSS to HTML:

<style> tag : Adding <style> … </style> to HTML
Inline CSS : Adding CSS using style attribute
External CSS : Adding a stylesheet(.css) to HTML using <link> tag
 

CSS Selectors

A CSS Selector is used to select an HTML element(s) for styling

body {
          color: red;                      #Declaration (property: value)
          background: pink;         #Declaration
}
#body is the selector

 

Element Selector

It is used to select an element based on the tag name

For example:

H2 {
          color: blue;
}
 

Id Selector

It is used to select an element with a given id

For example:

#first {
          color: white;
          background: black;
}
‘#’ is used to target by id

 

 

 

Class Selector

It is used to select an element with a given class

For example:

.red {
          background: red;
}
 

Important Notes:

We can group selectors like this:
h1,h2,h3,div {
          color:blue;           /*h1,h2,h3 and div will be blue*/
}
 

We can use element class as a selector like this:
p.red {
          color: red;            /*all paragraphs will get color of red*/
}
 

* can be used as a universal selector to select all the elements
*  {
          margin: 0;
          padding: 0;
}
 

An inline style will override external and internal styles