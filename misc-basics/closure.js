var o = {
    items: []
};

var s = JSON.stringify(o);

function read() {
    return JSON.parse(s);
}

function write(o) {
    s = JSON.stringify(o);
}

function next() {
    var o = read();
    o.items.push(o.items.length);
    write(o);
}

function run() {

    var o = read();
    o.items.push(1);
    write(o);

    next();
    
};

run();

var o = read();
o.items.push(3);
write(o);


next();

var r = read();
for(var i = 0; i < r.items.length; i++ ) {
    console.log(r.items[i]);

}
