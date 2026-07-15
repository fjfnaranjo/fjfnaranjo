<!-- vi: set ft=html: -->
<!--
Copyright 2026 Francisco José Fernández Naranjo
Copyright 2013 Christophe-Marie Duquesne <chmd@chmd.fr>

CSS for making a resume with pandoc. Inspired by moderncv.

This CSS document is delivered to you under the CC BY-SA 3.0 License.
https://creativecommons.org/licenses/by-sa/3.0/deed.en_US
-->
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Noto+Sans:ital,wght@0,100..900;1,100..900&display=swap" rel="stylesheet">
<style type="text/css">
body {
    max-width: 40em;
    font-family: "Noto Sans", sans-serif;
}
p, li {
    text-align: justify;
}
a {
    text-decoration: none;
    color: #397249;
}
a:hover, a:active {
    background-color: #397249;
    color: #FFFFFF;
    text-decoration: none;
    text-shadow: 1px 1px 1px #333;
}
hr {
    border-top: solid 1px #9CB770;
    margin: 3em 0;
}
table {
    width: 100%;
}
h1, h2 {
    color: #397249;
}
h1 {
    font-size: 55px;
    text-align: center;
    margin:0 15px;
}
h2:before {
    content: "";
    display: inline-block;
    margin-right:1%;
    width: 16%;
    height: 10px;
    background-color: #9CB770;
}
h1 + ul {
    margin: 1em 2em;
    border: none;
    color: #606060;
    padding-left: 0;
}
h1 + ul > li {
    list-style: none;
    text-align: center;
}
dt {
    float: left;
    clear: left;
    width: 17%;
    font-weight: bold;
}
dd {
    margin-left: 17%;
    margin-bottom:7px;
}
</style>
