'use strict';
// let hasdriverlicense = false;
// const passtest = true;
// if(passtest)
// {
//     hasdriverlicense = true;
// }
// if(hasdriverlicense)
// {
//     console.log("i can drive too. ");
// }
// const interface = 'audio';

// function logger()
// {
//     console.log("my name is alok. ");
// }
// logger();
// function fruitprocessor(apple, orange)
// {
//     console.log(apple, orange);
//     const juice = `juice with ${apple} apples and ${orange} oranges`;
//     return juice;
// }
// const applejuice = fruitprocessor(5, 3);
// console.log(applejuice);
// const num = Number('23');
// function calcage(birthyear)
// {
//     const year = 2021-birthyear;
//     return year;
// }
// console.log(calcage(1999));
// const calcage2 = function(birthyear)
// {
//     return 2023-birthyear;
// }
// console.log(calcage2(1999));

// const calcage3 = birthyear=>2021-birthyear;
// console.log(calcage3(1999));

// const yearsuntilretirement = birthyear=>
// {
//     const age = 2022-birthyear;
//     const retirement = 65-age;
//     return retirement;
// }
// console.log(yearsuntilretirement(1999));


// function calling other functions

// const fruitcuts = function(fruit)
// {
//     return 2*fruit;
// }

// const fruitprocessor = function(apple, orange)
// {
//     const applecut = fruitcuts(apple);
//     const orangecut = fruitcuts(orange);

//     const juice = `juice of ${applecut} apple and ${orangecut} juice is healthy for your health`;
//     return juice;
// }

// console.log(fruitprocessor(4, 3));



// revewing functions
// const calcage = function(year)
// {
//     return 2021-year;
// }
// const yearsuntilretirement = function(birtheyear, name)
// {
//     const age = calcage(birtheyear);
//     const retirement = 65-age;
//     if(retirement>0)
//     {
//         console.log(`${name} retires in ${retirement} age`);
//         return retirement;
//     }
//     else
//     {
//         return -1;
//         console.log(`${name} ia already retired. `);
//     }
// }
// console.log(yearsuntilretirement(1999, "alok singh bhadauria"))


// coding challenge1


// const calcage = function(score1, score2, score3)
// {
//     const avgdolphins = (score1+score2+score3)/3;
//     const avgkoalas = (score1+score2+score3)/3;

// }
// const scoredolphis = calcage(44, 23, 71);
// const scorekoalas = calcage(65, 54, 49);
// console.log(scoredolphis, scorekoalas);

// const checkwinner = function(avgdolphins, avgkoalas)
// {
//     if(avgdolphins>=2*avgkoalas)
//     {
//         console.log( `dolphins wins (${avgdolphins} vs ${avgkoalas})`);
//     }
//     else if(avgkoalas>=2*avgdolphins)
//     {
//         console.log( `koalas wins (${avgkoalas} vs ${avgdolphins})`);
//     }
//     else
//     {
//         console.log(`no team wins....`);
//     }
// }
// checkwinner(scoredolphis, scorekoalas);


// introduction to arrays


// const friends = ['alok', 'aman', 'mahesh', 'ajay'];
// console.log(friends);
// const years = new Array(1338, 1999, 2001, 2015, 2020);
// console.log(years);
// console.log(friends[2]);
// console.log(years[2]);
// console.log(friends.length);
// console.log(years.length);
// const firstname = "alok";
// const str=[firstname, "singh", "bhadauria", 1999-2021, "student", friends];
// console.log(str);
// console.log(str.length);


// basic array operation

// const friends = ['alok', 'urvashi', 'bachcha'];
// console.log(friends);
// friends.push('jay mehta');
// console.log(friends);
// friends.push(2021-1999);
// console.log(friends);
// const newlength = friends.push('rathore');
// console.log(friends);
// console.log(newlength);
// friends.unshift("jessica");
// console.log(friends);
// friends.pop();
// console.log(friends);
// const popped = friends.pop();
// console.log(popped);
// friends.shift();
// console.log(friends);
// friends.unshift('jerry');
// console.log(friends);
// console.log(friends.indexOf('jay mehta'));
// console.log(friends.includes('urvashi'));
// console.log(friends.includes('urvashi rathore'));




// coding challenge 2

// const calcage = function(bill)
// {
//     if(bill>=50 && bill<=300)
//     {
//         return bill*0.15;
//     }
//     else
//     {
//         return bill*0.20;
//     }
// }

// const bills = [125, 555, 44];
// const tips = [calcage(bills[0]), calcage(bills[1]), calcage(bills[2])];
// const total = [bills[0]+tips[0], bills[0]+tips[0], bills[0]+tips[0]]
// console.log(bills, tips, total);



// introduction to objects

// const mycountry={
//     country : 'india',
//     capital : 'new delhi',
//     population : 1.3,
//     language : 'hindi',
//     neighbours : ['pakistan', 'bangla desh', 'china', 'nepal', 'bhutan', 'myanmar']
// };
// console.log(mycountry);

// const statement = `${mycountry.country} has ${mycountry.population} billion ${mycountry.language}-speaking people, ${mycountry.neighbours.length}
// neighbouring countries and it's capital is called ${mycountry.capital}`;
// console.log(statement);

// mycountry.population+=1;
// console.log(mycountry.population);
// mycountry.population-=1;
// console.log(mycountry.population);



// dot vs bracket notation

// const myself = {
//     firstname : 'alok',
//     lastname : 'singh',
//     age : 2021-1999,
//     job : 'student',
//     address : 'rajpur road chakar nagar etawah',
//     friends : ['ankush', 'ajay', 'mm', 'pyaare', 'it', 'neeraj']
// };
// console.log(myself);
// console.log(myself.firstname);
// console.log(myself['firstname']);

// const keyname = 'name';
// console.log(myself['first'+keyname]);
// console.log(myself['last'+keyname]);

// const interestedin = prompt('what do you want to know about myself? ');

// if(myself[interestedin])
// {
//     console.log(myself[interestedin]);
// }
// else
// {
//     console.log("wrong request! choose between firstname, lastname, age, address, friends");
// }



// objects method

// const myself = {
//         firstname : 'alok',
//         lastname : 'singh',
//         birthyear : 1999,
//         age : 2021-1999,
//         job : 'student',
//         address : 'rajpur road chakar nagar etawah',
//         friends : ['ankush', 'ajay', 'mm', 'pyaare', 'it', 'neeraj'],

//         // calcage : function(){
//         //     console.log(this);
//         //     return 2021-this.birthyear;
//         //         }

//         calcage: function()
//         {
//             this.age = 2025-this.birthyear;
//             return this.age;
//         }
//     };

//     console.log(myself.calcage());


// object method assignment

// const mycountry={
//         country : 'india',
//         capital : 'new delhi',
//         population : 1.3,
//         language : 'hindi',
//         neighbours : ['pakistan', 'bangla desh', 'china', 'nepal', 'bhutan', 'myanmar'],
//         describe : function()
//         {
//             return `${this.country} has ${this.population} billion ${this.language}-speaking people, ${this.neighbours.length}
//                neighbouring countries and it's capital is called ${this.capital}`;
//         },
//         checkisisland : function()
//         {
//             this.isisland = this.neighbours.length === 0?true:false;
//             return this.isisland;
//         }
//     };
//     console.log(mycountry.describe());
//     console.log(mycountry.checkisisland());


// coding challenges 3


// const mark = {
//     fullname : "mark miller",
//     mass : 78,
//     height : 1.69,
//     calcbmi : function(){
//         this.bmi = this.mass/(this.height*this.height);
//         return this.bmi;
//     }
// };
// const john = {
//     fullname : "john smith",
//     mass : 92,
//     height : 1.95,
//     calcbmi : function(){
//         this.bmi = this.mass/(this.height*this.height);
//         return this.bmi;
//     }
// };

// mark.calcbmi();
// john.calcbmi();
// console.log(mark.bmi, john.bmi);

// for loop
// for(let i=1; i<=50; i++)
// {
//     console.log(`voter number ${i} is currently voting`);
// }


// looping array breaking and continue

// const alok = [
//     'alok',
//     'singh',
//     'bhadauria',
//     'student',
//     2021-1999,
//     ['ajay', 'ankush', 'dalit'],true
// ];

// for(let i=0; i<alok.length; i++)
// {
//     console.log(alok[i], typeof(alok[i]));
// }

// const years = [1999, 1995, 2005, 2007, 1949, 1980];
// const ages = [];
// for(let i=0; i<years.length; i++)
// {
//     ages.push(2021-years[i]);
// }
// console.log(ages);

// for(let i=0; i<alok.length; i++)
// {
//     if(typeof(alok[i])==='string')
//     {
//         continue;
//     }
//     console.log(alok[i]);
// }

// exercise of looping backward

// const listofneighbours = [['Canada', 'Mexico'], ['Spain'], ['Norway', 'Sweden',
// 'Russia']];

// for(let i=0; i<listofneighbours.length; i++)
// {
//     for(let j=0; j<listofneighbours[i].length; j++)
//     {
//         console.log(`Neighbour: ${listofneighbours[i][j]}`);
//     }
// }


// while loop
// let dice = Math.trunc(Math.random()*6)+1;
// // let dice = 1;
// while(dice!==6)
// {
//     console.log(`you rolled a ${dice}`);
//     dice = Math.trunc(Math.random()*6)+1;
//     if(dice === 6)
//     {
//         console.log(`loop is about to end. `)
//     }
// }


// coding challenge 4

const calctip = function(amount)
{
    if(amount>=50 && amount <= 300)
    {
        return 0.15*amount;
    }
    else
    {
        return 0.20*amount;
    }
}

const bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86,  52];
const tips = [];
const totals = [];

for(let i=0; i<bills.length; i++)
{
    tips.push(calctip(bills[i]));
    totals.push(bills[i]+tips[i]);
}
console.log(tips, totals);